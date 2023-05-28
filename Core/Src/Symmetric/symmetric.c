/*
 * symmetric.c
 *
 *  Created on: 22 maj 2023
 *      Author: michal
 */

#include "symmetric/symmetric.h"
#include "symmetric/aes.h"
#include "symmetric/des3.h"
#include "symmetric/blowfish.h"
#include "symmetric/twofish.h"
#include "symmetric/rc6.h"
#include "tim.h"
#include "usart.h"
#include "print.h"


BlowfishContext contextBlowfish;
TwofishContext	contextTwofish;
Des3Context		contextDes3;
Rc6Context		contextRc6;

AesContext 		contextAes16;
AesContext 		contextAes24;
AesContext 		contextAes32;

const uint8_t key32[32] = { 0xd6, 0x13, 0x1d, 0x51, 0x84, 0x73, 0xbd, 0x05, 0x90, 0x7b, 0xaf, 0xaa, 0xbf, 0xe2, 0x46, 0x54,
								0x9d, 0x22, 0x69, 0x41, 0x8f, 0xfa, 0xe1, 0xa5, 0xf8, 0x06, 0xc9, 0xef, 0x34, 0x9c, 0xf3, 0x78 };

uint8_t tmp[2048];
uint8_t out[2048];

extern const uint8_t input[];



void AesTest(void)
{
	aesInit(&contextAes16, key32, 16);
	aesInit(&contextAes24, key32, 24);
	aesInit(&contextAes32, key32, 32);

	Results(AES16, 1024);
	Results(AES24, 1024);
	Results(AES32, 1024);

	Results(AES16, 2048);
	Results(AES24, 2048);
	Results(AES32, 2048);
}

void EncryptBuf(void (*func)(void*, const uint8_t*, uint8_t* ), uint8_t block_size,
				void *context, const uint8_t *input, uint8_t *output, uint32_t data_length)
{

	for (uint32_t i = 0; i < data_length; i++){
		if (i % block_size == 0) {
			func(context, &input[i], &output[i]);
		}
	}
}
void CleanTabs(void)
{
	memset(tmp, '\0', sizeof(tmp));
	memset(out, '\0', sizeof(out));
}



void Results (uint8_t crypto, uint32_t data_length)
{
	CleanTabs();

	switch(crypto){

		case AES16:
			PrintInfo(aesName, data_length, 16, NULL);
			HAL_TIM_Base_Start(&htim6);
			EncryptBuf(aesEncryptBlock, 16, &contextAes16, input, tmp, data_length);
			HAL_TIM_Base_Stop(&htim6);
			PrintTime();

			HAL_TIM_Base_Start(&htim6);
			EncryptBuf(aesDecryptBlock, 16, &contextAes16, tmp, out, data_length);
			HAL_TIM_Base_Stop(&htim6);
			PrintTime();

			PrintCompare(data_length, out);

			break;

		case AES24:
			PrintInfo(aesName, data_length, 24, NULL);
			HAL_TIM_Base_Start(&htim6);
			EncryptBuf(aesEncryptBlock, 16, &contextAes24, input, tmp, data_length);
			HAL_TIM_Base_Stop(&htim6);
			PrintTime();

			HAL_TIM_Base_Start(&htim6);
			EncryptBuf(aesDecryptBlock, 16, &contextAes24, tmp, out, data_length);
			HAL_TIM_Base_Stop(&htim6);
			PrintTime();

			PrintCompare(data_length, out);

			break;

		case AES32:
			PrintInfo(aesName, data_length, 32, NULL);
			HAL_TIM_Base_Start(&htim6);
			EncryptBuf(aesEncryptBlock, 16, &contextAes32, input, tmp, data_length);
			HAL_TIM_Base_Stop(&htim6);
			PrintTime();

			HAL_TIM_Base_Start(&htim6);
			EncryptBuf(aesDecryptBlock, 16, &contextAes32, tmp, out, data_length);
			HAL_TIM_Base_Stop(&htim6);
			PrintTime();

			PrintCompare(data_length, out);

			break;
/*
		case BLOWFISH:
			HAL_UART_Transmit(&huart2, (uint8_t*)blowFishName, strlen(blowFishName), HAL_MAX_DELAY);

			HAL_TIM_Base_Start(&htim6);
			EncryptBuf(blowfishEncryptBlock, 8, &contextBlowfish, input1024, tmp, sizeof(input1024));
			HAL_TIM_Base_Stop(&htim6);
			PrintTime();

			HAL_TIM_Base_Start(&htim6);
			EncryptBuf(blowfishDecryptBlock, 8, &contextBlowfish, tmp, out, sizeof(input1024));
			HAL_TIM_Base_Stop(&htim6);
			PrintTime();

			PrintCompare(input1024, out);
			break;

		case TWOFISH:
			HAL_UART_Transmit(&huart2, (uint8_t*)twoFishName, strlen(twoFishName), HAL_MAX_DELAY);

			HAL_TIM_Base_Start(&htim6);
			EncryptBuf(twofishEncryptBlock, 16, &contextTwofish, input1024, tmp, sizeof(input1024));
			HAL_TIM_Base_Stop(&htim6);
			PrintTime();

			HAL_TIM_Base_Start(&htim6);
			EncryptBuf(twofishDecryptBlock, 16, &contextTwofish, tmp, out, sizeof(input1024));
			HAL_TIM_Base_Stop(&htim6);
			PrintTime();

			PrintCompare(input1024, out);
			break;

		case TRIDES:
			HAL_UART_Transmit(&huart2, (uint8_t*)desName, strlen(desName), HAL_MAX_DELAY);

			HAL_TIM_Base_Start(&htim6);
			EncryptBuf(des3EncryptBlock, 8, &contextDes3, input1024, tmp, sizeof(input1024));
			HAL_TIM_Base_Stop(&htim6);
			PrintTime();

			HAL_TIM_Base_Start(&htim6);
			EncryptBuf(des3DecryptBlock, 8, &contextDes3, tmp, out, sizeof(input1024));
			HAL_TIM_Base_Stop(&htim6);
			PrintTime();

			PrintCompare(input1024, out);
			break;

		case RC6:
			HAL_UART_Transmit(&huart2, (uint8_t*)rc6Name, strlen(rc6Name), HAL_MAX_DELAY);

			HAL_TIM_Base_Start(&htim6);
			EncryptBuf(rc6EncryptBlock, 16, &contextRc6, input1024, tmp, sizeof(input1024));
			HAL_TIM_Base_Stop(&htim6);
			PrintTime();

			HAL_TIM_Base_Start(&htim6);
			EncryptBuf(rc6DecryptBlock, 16, &contextRc6, tmp, out, sizeof(input1024));
			HAL_TIM_Base_Stop(&htim6);
			PrintTime();
			PrintCompare(input1024, out);

			break;
*/
		default:
			HAL_UART_Transmit(&huart2, (uint8_t*)"Incorrect algorithm's name.", strlen("Incorrect algorithm's name."), HAL_MAX_DELAY);
	}
}
