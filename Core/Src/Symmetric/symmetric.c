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



AesContext		contextAesTab[3];
TwofishContext	contextTwofishTab[3];
Rc6Context		contextRc6Tab[3];

uint32_t		dataLenTab[3] = {512, 1024, 2048};
uint8_t 		keyLenTab[3] = {16, 24, 32};

const uint8_t key32[32] = { 0xd6, 0x13, 0x1d, 0x51, 0x84, 0x73, 0xbd, 0x05, 0x90, 0x7b, 0xaf, 0xaa, 0xbf, 0xe2, 0x46, 0x54,
								0x9d, 0x22, 0x69, 0x41, 0x8f, 0xfa, 0xe1, 0xa5, 0xf8, 0x06, 0xc9, 0xef, 0x34, 0x9c, 0xf3, 0x78 };


uint8_t tmp[2048];
uint8_t out[2048];

extern const uint8_t input[];


void RC6Test(void)
{
	uint8_t i = 0;

	for(i = 0; i < 3; i++)
	{
		PrintInfo(rc6Name, 0, keyLenTab[i], "KeyExpansion");
		HAL_TIM_Base_Start(&htim2);
		rc6Init(&contextRc6Tab[i], key32, keyLenTab[i]);
		HAL_TIM_Base_Stop(&htim2);
		PrintTime(&htim2);
	}


	for(i = 0; i < 3; i++)
	{
		for(uint8_t j = 0; j < 3; j++)
		{
			CleanTabs();

			PrintInfo(rc6Name, dataLenTab[j], keyLenTab[i], NULL);
			HAL_TIM_Base_Start(&htim2);
			EncryptBuf(rc6EncryptBlock, 16, &contextRc6Tab[i], input, tmp, dataLenTab[j]);
			HAL_TIM_Base_Stop(&htim2);
			PrintTime(&htim2);

			HAL_TIM_Base_Start(&htim2);
			EncryptBuf(rc6DecryptBlock, 16, &contextRc6Tab[i], tmp, out, dataLenTab[j]);
			HAL_TIM_Base_Stop(&htim2);
			PrintTime(&htim2);

			PrintCompare(dataLenTab[j], out);
		}
	}
}

void TwofishTest(void)
{
	uint8_t i = 0;

	for(i = 0; i < 3; i++)
	{
		PrintInfo(twoFishName, 0, keyLenTab[i], "KeyExpansion");
		HAL_TIM_Base_Start(&htim2);
		twofishInit(&contextTwofishTab[i], key32, keyLenTab[i]);
		HAL_TIM_Base_Stop(&htim2);
		PrintTime(&htim2);
	}


	for(i = 0; i < 3; i++)
	{
		for(uint8_t j = 0; j < 3; j++)
		{
			CleanTabs();

			PrintInfo(twoFishName, dataLenTab[j], keyLenTab[i], NULL);
			HAL_TIM_Base_Start(&htim2);
			EncryptBuf(twofishEncryptBlock, 16, &contextTwofishTab[i], input, tmp, dataLenTab[j]);
			HAL_TIM_Base_Stop(&htim2);
			PrintTime(&htim2);

			HAL_TIM_Base_Start(&htim2);
			EncryptBuf(twofishDecryptBlock, 16, &contextTwofishTab[i], tmp, out, dataLenTab[j]);
			HAL_TIM_Base_Stop(&htim2);
			PrintTime(&htim2);

			PrintCompare(dataLenTab[j], out);
		}
	}
}

void AesTest(void)
{
	uint8_t i = 0;


	for(i = 0; i < 3; i++)
	{
		PrintInfo(aesName, 0, keyLenTab[i], "KeyExpansion");
		HAL_TIM_Base_Start(&htim2);
		aesInit(&contextAesTab[i], key32, keyLenTab[i]);
		HAL_TIM_Base_Stop(&htim2);
		PrintTime(&htim2);
	}


	for(i = 0; i < 3; i++)
	{
		for(uint8_t j = 0; j < 3; j++)
		{
			CleanTabs();

			PrintInfo(aesName, dataLenTab[j], keyLenTab[i], NULL);
			HAL_TIM_Base_Start(&htim2);
			EncryptBuf(aesEncryptBlock, 16, &contextAesTab[i], input, tmp, dataLenTab[j]);
			HAL_TIM_Base_Stop(&htim2);
			PrintTime(&htim2);

			HAL_TIM_Base_Start(&htim2);
			EncryptBuf(aesDecryptBlock, 16, &contextAesTab[i], tmp, out, dataLenTab[j]);
			HAL_TIM_Base_Stop(&htim2);
			PrintTime(&htim2);

			PrintCompare(dataLenTab[j], out);
		}
	}
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
