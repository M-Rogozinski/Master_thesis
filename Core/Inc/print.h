/*
 * print.h
 *
 *  Created on: 28 maj 2023
 *      Author: michal
 */

#ifndef INC_PRINT_H_
#define INC_PRINT_H_

extern const uint8_t original[];
extern const uint8_t encrypted[];
extern const uint8_t decrypted[];

extern const uint8_t aesName[];
extern const uint8_t desName[];
extern const uint8_t twoFishName[];
extern const uint8_t blowFishName[];
extern const uint8_t rc4Name[];
extern const uint8_t rc6Name[];

extern const uint8_t rsaName[];
extern const uint8_t pkcsName[];
extern const uint8_t pssName[];

extern const uint8_t sha256Name[];
extern const uint8_t sha384Name[];
extern const uint8_t sha512Name[];

extern const uint16_t asymKeysLengths[];

extern const uint8_t keySizeName[];
extern const uint8_t dataLengthName[];

void PrintOriginal(const char* name);
void PrintEncrypted(void);
void PrintDecrypted(void);
void PrintTime(TIM_HandleTypeDef*);
void PrintInfo(const uint8_t* cryptoName, uint32_t data_length, uint16_t keySize, const uint8_t*);
void PrintCompare(uint32_t, uint8_t* out);


#endif /* INC_PRINT_H_ */
