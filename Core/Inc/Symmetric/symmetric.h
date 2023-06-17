/*
 * symmetric.h
 *
 *  Created on: 22 maj 2023
 *      Author: michal
 */

#ifndef INC_SYMMETRIC_SYMMETRIC_H_
#define INC_SYMMETRIC_SYMMETRIC_H_

#include <stdint.h>


void RC6Test(void);
void TwofishTest(void);
void AesTest(void);
void EncryptBuf(void (*func)(void*, const uint8_t*, uint8_t* ), uint8_t block_size, void *context, const uint8_t *input, uint8_t *output, uint32_t input_len);
void CleanTabs(void);



#endif /* INC_SYMMETRIC_SYMMETRIC_H_ */
