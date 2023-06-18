/*
 * asymmetric.h
 *
 *  Created on: May 24, 2023
 *      Author: michal
 */

#ifndef INC_ASYMMETRIC_ASYMMETRIC_H_
#define INC_ASYMMETRIC_ASYMMETRIC_H_

void RsaKeysInit(void);
void RsaInit(void);
void RsaTest(void);
void RsaCleanSig(void);
void RsaPKCS1(void);
void RsaPKCS1Size(void);
void RsaPSS(void);
void RsaPSSSize(void);

void EcTest(void);
void EcInit(void);
void EcDSA(void);
void EcDSASize(void);

void RngInit(void);

#endif /* INC_ASYMMETRIC_ASYMMETRIC_H_ */
