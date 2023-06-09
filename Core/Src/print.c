/*
 * print.c
 *
 *  Created on: 28 maj 2023
 *      Author: michal
 */
#include <stdint.h>
#include "tim.h"
#include "usart.h"

const uint8_t input2048[] = "Lorem ipsum dolor sit amet, consectetuer adipiscing elit. Aenean commodo ligula eget dolor. Aenean massa. Cum sociis natoque penatibus "
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

const uint8_t input1024[] = "Lorem ipsum dolor sit amet, consectetur adipiscing elit. Integer urna quam, condimentum maximus velit nec, placerat vehicula "
		"metus. Ut id augue eget ex mattis semper vitae vel mauris. Nam euismod libero eu facilisis egestas. Aenean volutpat maximus lectus, rutrum "
		"consectetur eros sollicitudin id. Nam vel ligula metus. Donec placerat, elit sed hendrerit mattis, elit erat ultricies purus, imperdiet rhoncus "
		"lectus nibh eget nisl. Pellentesque eu odio ante. Cras fermentum felis lectus, nec hendrerit felis ultrices vitae. Ut quis ligula consequat, "
		"varius metus quis, tincidunt dui. Integer auctor turpis et eros sollicitudin rutrum. Nulla rutrum interdum enim, sed tempor eros cursus id. In "
		"hac habitasse platea dictumst. Quisque in porttitor erat, sit amet accumsan nisi.Pellentesque eget tristique lacus. Nam laoreet non magna nec "
		"luctus. Aliquam ac arcu sed neque pulvinar mollis sit amet vel risus. Interdum et malesuada fames ac ante ipsum primis in faucibus. Ut venenatis "
		"metus id justo viverra sollicitudin gravida.";

const uint8_t input512[] = "Lorem ipsum dolor sit amet, consectetur adipiscing elit. Suspendisse maximus hendrerit mauris et lobortis. Sed fringilla "
		"mauris ut ligula tempor, ut laoreet est congue. Nam magna ex, congue sit amet pulvinar ac, rhoncus sollicitudin tellus. Suspendisse interdum "
		"fringilla blandit. Donec nec rhoncus lorem. Donec faucibus lacus et urna pulvinar faucibus. Suspendisse potenti. Proin nisi arcu, finibus sit "
		"amet leo et, malesuada mattis ante. Nullam fringilla vestibulum neque. Nullam odio nulla, tristique non eu.";

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
	if (memcmp(out, input2048, data_length) == 0) {
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
	uint8_t time_tab[15];

	itoa(htim->Instance->CNT, (char*)time_tab, 10);

	htim->Instance->CNT = 0;

	HAL_UART_Transmit(&huart2, (uint8_t*)time_tab, strlen((const char *)time_tab), HAL_MAX_DELAY);
	HAL_UART_Transmit(&huart2, (uint8_t*)"\n", strlen("\n"), HAL_MAX_DELAY);

}

void PrintOriginal(const char* name)
{
	HAL_UART_Transmit(&huart2, (uint8_t*)name, strlen(name), HAL_MAX_DELAY);
	HAL_UART_Transmit(&huart2, (uint8_t*)original, strlen((const char *)original), HAL_MAX_DELAY);
	HAL_UART_Transmit(&huart2, (uint8_t*)input2048, strlen((const char *)input2048), HAL_MAX_DELAY);
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
