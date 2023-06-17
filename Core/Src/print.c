/*
 * print.c
 *
 *  Created on: 28 maj 2023
 *      Author: michal
 */
#include <stdint.h>
#include "tim.h"
#include "usart.h"

const uint8_t input[] = "Lorem ipsum dolor sit amet, consectetuer adipiscing elit. Aenean commodo ligula eget dolor. Aenean massa. Cum sociis natoque penatibus "
		"et magnis dis parturient montes, nascetur ridiculus mus. Donec quam felis, ultricies nec, pellentesque eu, pretium quis, sem. Nulla consequat massa quis "
		"enim. Donec pede justo, fringilla vel, aliquet nec, vulputate eget, arcu. In enim justo, rhoncus ut, imperdiet a, venenatis vitae, justo. Nullam dictum "
		"felis eu pede mollis pretium. Integer tincidunt. Cras dapibus. Vivamus elementum semper nisi. Aenean vulputate eleifend tellus. Aenean leo ligula, "
		"porttitor eu, consequat vitae, eleifend ac, enim. Aliquam lorem ante, dapibus in, viverra quis, feugiat a, tellus. Phasellus viverra nulla ut metus "
		"varius laoreet. Quisque rutrum. Aenean imperdiet. Etiam ultricies nisi vel augue. Curabitur ullamcorper ultricies nisi. Nam eget dui. Etiam rhoncus. "
		"Maecenas tempus, tellus eget condimentum rhoncus, sem quam semper libero, sit amet adipiscing sem neque sed ipsum. Nam quam nunc, blandit vLorem ipsum dolor sit amet, consectetuer adipiscing elit. Aenean commodo ligula eget dolor. Aenean massa. Cum sociis natoque penatibus "
		"et magnis dis parturient montes, nascetur ridiculus mus. Donec quam felis, ultricies nec, pellentesque eu, pretium quis, sem. Nulla consequat massa quis "
		"enim. Donec pede justo, fringilla vel, aliquet nec, vulputate eget, arcu. In enim justo, rhoncus ut, imperdiet a, venenatis vitae, justo. Nullam dictum "
		"felis eu pede mollis pretium. Integer tincidunt. Cras dapibus. Vivamus elementum semper nisi. Aenean vulputate eleifend tellus. Aenean leo ligula, "
		"porttitor eu, consequat vitae, eleifend ac, enim. Aliquam lorem ante, dapibus in, viverra quis, feugiat a, tellus. Phasellus viverra nulla ut metus "
		"varius laoreet. Quisque rutrum. Aenean imperdiet. Etiam ultricies nisi vel augue. Curabitur ullamcorper ultricies nisi. Nam eget dui. Etiam rhoncus. "
		"Maecenas tempus, tellus eget condimentum rhoncus, sem quam semper libero, sit amet adipiscing sem neque sed ipsum. Nam quam nunc, blandit ve";

const uint8_t original[] = "Original text: ";
const uint8_t encrypted[] = "Encrytped text: ";
const uint8_t decrypted[] = "Decryped text: ";

const uint8_t aesName[] = 		"AES algorithm:\n";
const uint8_t desName[] = 		"3DES algorithm:\n";
const uint8_t twoFishName[] = 	"TwoFish algorithm:\n";
const uint8_t blowFishName[] = "BlowFish algorithm:\n";
const uint8_t rc4Name[] = 		"RC4 algorithm:\n";
const uint8_t rc6Name[] = 		"RC6 algorithm:\n";

const uint8_t rsaName[] = "RSA algorithm:\n";
const uint8_t pkcsName[] = "RSA PKCS V1 signing algorithm:\n";
const uint8_t pssName[] = "RSA PSS signing algorithm:\n";

const uint8_t sha256Name[] = "sha256 algorithm\n";
const uint8_t sha384Name[] = "sha384 algorithm\n";
const uint8_t sha512Name[] = "sha512 algorithm\n";

const uint16_t asymKeysLengths[] = {1024, 2048, 3072, 4096};

const uint8_t keySizeName[] = 	"Size of key: ";
const uint8_t dataLengthName[]=	"Size of data in bytes: ";

void PrintCompare(uint32_t data_length, uint8_t* out)
{
	if (memcmp(out, input, data_length) == 0) {
		HAL_UART_Transmit(&huart2, (uint8_t*)"OK", strlen("OK"), HAL_MAX_DELAY);
		HAL_UART_Transmit(&huart2, (uint8_t*)"\n", strlen("\n"), HAL_MAX_DELAY);
		HAL_UART_Transmit(&huart2, (uint8_t*)"\n", strlen("\n"), HAL_MAX_DELAY);
	}
	else {
		HAL_UART_Transmit(&huart2, (uint8_t*)"not OK", strlen("not OK"), HAL_MAX_DELAY);
		HAL_UART_Transmit(&huart2, (uint8_t*)"\n", strlen("\n"), HAL_MAX_DELAY);
		HAL_UART_Transmit(&huart2, (uint8_t*)"\n", strlen("\n"), HAL_MAX_DELAY);
	}
}

void PrintInfo(const uint8_t* cryptoName, uint32_t dataLength, uint16_t keySize, const uint8_t* hashName)
{
	uint8_t keySizeTab[5];
	uint8_t dataLengthTab[10];

	itoa(keySize, (char*)keySizeTab, 10);
	itoa(dataLength, (char*)dataLengthTab, 10);
	// Algorithm name
	HAL_UART_Transmit(&huart2, cryptoName, strlen((const char *)cryptoName), HAL_MAX_DELAY);
	// Key size
	HAL_UART_Transmit(&huart2, keySizeName, sizeof(keySizeName), HAL_MAX_DELAY);
	HAL_UART_Transmit(&huart2, keySizeTab, strlen((const char *)keySizeTab), HAL_MAX_DELAY);
	HAL_UART_Transmit(&huart2, (uint8_t*)"\n", strlen("\n"), HAL_MAX_DELAY);
	// Data length
	HAL_UART_Transmit(&huart2, dataLengthName, sizeof(dataLengthName), HAL_MAX_DELAY);
	HAL_UART_Transmit(&huart2, dataLengthTab, strlen((const char *)dataLengthTab), HAL_MAX_DELAY);
	HAL_UART_Transmit(&huart2, (uint8_t*)"\n", strlen("\n"), HAL_MAX_DELAY);
	if ( hashName != NULL ) {
		HAL_UART_Transmit(&huart2, hashName, strlen((const char *)hashName), HAL_MAX_DELAY);
		HAL_UART_Transmit(&huart2, (uint8_t*)"\n", strlen("\n"), HAL_MAX_DELAY);
		HAL_UART_Transmit(&huart2, (uint8_t*)"\n", strlen("\n"), HAL_MAX_DELAY);
	}
}

void PrintTime(TIM_HandleTypeDef *htim)
{
	uint8_t time_tab[10];

	itoa(htim->Instance->CNT, (char*)time_tab, 10);

	htim->Instance->CNT = 0;

	HAL_UART_Transmit(&huart2, (uint8_t*)time_tab, strlen((const char *)time_tab), HAL_MAX_DELAY);
	HAL_UART_Transmit(&huart2, (uint8_t*)"\n", strlen("\n"), HAL_MAX_DELAY);

}

void PrintOriginal(const char* name)
{
	HAL_UART_Transmit(&huart2, (uint8_t*)name, strlen(name), HAL_MAX_DELAY);
	HAL_UART_Transmit(&huart2, (uint8_t*)original, strlen((const char *)original), HAL_MAX_DELAY);
	HAL_UART_Transmit(&huart2, (uint8_t*)input, strlen((const char *)input), HAL_MAX_DELAY);
	HAL_UART_Transmit(&huart2, (uint8_t*)"\n", strlen("\n"), HAL_MAX_DELAY);
}
void PrintEncrypted(void)
{
	/*
	HAL_UART_Transmit(&huart2, (uint8_t*)encrypted, strlen((const char *)encrypted), HAL_MAX_DELAY);
	HAL_UART_Transmit(&huart2, (uint8_t*)tmp, strlen((const char *)tmp), HAL_MAX_DELAY);
	HAL_UART_Transmit(&huart2, (uint8_t*)"\n", strlen("\n"), HAL_MAX_DELAY);
	*/
}
void PrintDecrypted(void)
{
	/*
	HAL_UART_Transmit(&huart2, (uint8_t*)decrypted, strlen((const char *)decrypted), HAL_MAX_DELAY);
	HAL_UART_Transmit(&huart2, (uint8_t*)out, strlen((const char *)out), HAL_MAX_DELAY);
	HAL_UART_Transmit(&huart2, (uint8_t*)"\n", strlen("\n"), HAL_MAX_DELAY);
	HAL_UART_Transmit(&huart2, (uint8_t*)"\n", strlen("\n"), HAL_MAX_DELAY);
	*/
}
