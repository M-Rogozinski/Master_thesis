/*
 * symmetric.h
 *
 *  Created on: 22 maj 2023
 *      Author: michal
 */

#ifndef INC_SYMMETRIC_SYMMETRIC_H_
#define INC_SYMMETRIC_SYMMETRIC_H_

#include <stdint.h>

#define AES16		1
#define AES24		2
#define AES32		3

#define TRIDES
#define BLOWFISH
#define TWOFISH
#define RC4
#define RC6

void AesTest(void);
void EncryptBuf(void (*func)(void*, const uint8_t*, uint8_t* ), uint8_t block_size, void *context, const uint8_t *input, uint8_t *output, uint32_t input_len);
void CleanTabs(void);
void Results (uint8_t, uint32_t);



#endif /* INC_SYMMETRIC_SYMMETRIC_H_ */
