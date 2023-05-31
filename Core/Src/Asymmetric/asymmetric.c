/*
 * asymmetric.c
 *
 *  Created on: May 24, 2023
 *      Author: michal
 */

#include "Asymmetric/ec.h"
#include "Asymmetric/ecdsa.h"
#include "Asymmetric/rsa.h"
#include "Asymmetric/asymmetric.h"
#include "Asymmetric/asym_keys.h"
#include "rng/yarrow.h"
#include "tim.h"
#include "usart.h"
#include "print.h"


extern const uint8_t input[];


YarrowContext contextYarrow;


RsaPrivateKey	rsaPrivateKeys[4];
RsaPublicKey	rsaPublicKeys[4];

EcPrivateKey	ecPrivateKeys;
EcPublicKey		ecPublicKeys;

EcDomainParameters  ecParams;
EcdsaSignature		ecdsaSig;

uint8_t seed[64] = {1,2,3,4};

uint8_t sig[4096];

size_t sigLen;

void EcTest(void)
{
	RngInit();

	EcInit();

	EcDSA();
}

void EcInit(void)
{
	ecInitDomainParameters(&ecParams);
	ecLoadDomainParameters(&ecParams, &secp112r1Curve);

	ecGenerateKeyPair(&yarrowPrngAlgo, &contextYarrow, &ecParams, &ecPrivateKeys, &ecPublicKeys);

	ecdsaInitSignature(&ecdsaSig);
}

void EcDSA(void)
{
	ecdsaGenerateSignature(&yarrowPrngAlgo, &contextYarrow, &ecParams, &ecPrivateKeys, input, 2048, &ecdsaSig);

	ecdsaVerifySignature(&ecParams, &ecPublicKeys, input, 2048, &ecdsaSig);
}

void RsaTest(void)
{
	RngInit();

	RsaInit();
//	RsaPKCS1();
	RsaPSS();

}

void RsaInit(void)
{
	RsaKeysInit();

}

void RsaPSS(void)
{
	RsaCleanSig();

	for ( uint8_t i = 0; i < 4; i++) {

		PrintInfo(pkcsName, 2048, asymKeysLengths[i], sha256Name);
		HAL_TIM_Base_Start(&htim6);
		rsassaPssSign(&yarrowPrngAlgo, &contextYarrow, &rsaPrivateKeys[i], &sha256HashAlgo, 20, input, sig, &sigLen);
		HAL_TIM_Base_Stop(&htim6);
		PrintTime();
		HAL_TIM_Base_Start(&htim6);
		rsassaPssVerify(&rsaPublicKeys[i], &sha256HashAlgo, 20, input, sig, sigLen);
		HAL_TIM_Base_Stop(&htim6);
		PrintTime();

		PrintInfo(pkcsName, 2048, asymKeysLengths[i], sha384Name);
		HAL_TIM_Base_Start(&htim6);
		rsassaPssSign(&yarrowPrngAlgo, &contextYarrow, &rsaPrivateKeys[i], &sha384HashAlgo, 20, input, sig, &sigLen);
		HAL_TIM_Base_Stop(&htim6);
		PrintTime();
		HAL_TIM_Base_Start(&htim6);
		rsassaPssVerify(&rsaPublicKeys[i], &sha384HashAlgo, 20, input, sig, sigLen);
		HAL_TIM_Base_Stop(&htim6);
		PrintTime();

		PrintInfo(pkcsName, 2048, asymKeysLengths[i], sha512Name);
		HAL_TIM_Base_Start(&htim6);
		rsassaPssSign(&yarrowPrngAlgo, &contextYarrow, &rsaPrivateKeys[i], &sha512HashAlgo, 20, input, sig, &sigLen);
		HAL_TIM_Base_Stop(&htim6);
		PrintTime();
		HAL_TIM_Base_Start(&htim6);
		rsassaPssVerify(&rsaPublicKeys[i], &sha512HashAlgo, 20, input, sig, sigLen);
		HAL_TIM_Base_Stop(&htim6);
		PrintTime();
	}

}

void RsaPKCS1(void)
{
	RsaCleanSig();

	for (uint8_t i = 0; i < 3; i++ ) {

		PrintInfo(pkcsName, 2048, asymKeysLengths[i], sha256Name);
		HAL_TIM_Base_Start(&htim6);
		rsassaPkcs1v15Sign(&rsaPrivateKeys[i], &sha256HashAlgo, input, sig, &sigLen);
		HAL_TIM_Base_Stop(&htim6);
		PrintTime();
		HAL_TIM_Base_Start(&htim6);
		rsassaPkcs1v15Verify(&rsaPublicKeys[i], &sha256HashAlgo, input, sig, sigLen);
		HAL_TIM_Base_Stop(&htim6);
		PrintTime();

		RsaCleanSig();

		PrintInfo(pkcsName, 2048, asymKeysLengths[i], sha384Name);
		HAL_TIM_Base_Start(&htim6);
		rsassaPkcs1v15Sign(&rsaPrivateKeys[i], &sha384HashAlgo, input, sig, &sigLen);
		HAL_TIM_Base_Stop(&htim6);
		PrintTime();
		HAL_TIM_Base_Start(&htim6);
		rsassaPkcs1v15Verify(&rsaPublicKeys[i], &sha384HashAlgo, input, sig, sigLen);
		HAL_TIM_Base_Stop(&htim6);
		PrintTime();

		RsaCleanSig();

		PrintInfo(pkcsName, 2048, asymKeysLengths[i], sha512Name);
		rsassaPkcs1v15Sign(&rsaPrivateKeys[i], &sha512HashAlgo, input, sig, &sigLen);
		HAL_TIM_Base_Stop(&htim6);
		PrintTime();
		HAL_TIM_Base_Start(&htim6);
		rsassaPkcs1v15Verify(&rsaPublicKeys[i], &sha512HashAlgo, input, sig, sigLen);
		HAL_TIM_Base_Stop(&htim6);
		PrintTime();
	}
}

void RsaCleanSig(void)
{
	memset(sig, 0, sizeof(sig));
	sigLen = 0;
}

void RsaKeysInit(void)
{
	/*------------1024---------------*/
	mpiImport(&rsaPrivateKeys[0].n, n1, sizeof(n1), MPI_FORMAT_BIG_ENDIAN);
	mpiImport(&rsaPrivateKeys[0].e, e, sizeof(e), MPI_FORMAT_BIG_ENDIAN);
	mpiImport(&rsaPrivateKeys[0].d, d1, sizeof(d1), MPI_FORMAT_BIG_ENDIAN);
	mpiImport(&rsaPrivateKeys[0].p, p1, sizeof(p1), MPI_FORMAT_BIG_ENDIAN);
	mpiImport(&rsaPrivateKeys[0].q, q1, sizeof(q1), MPI_FORMAT_BIG_ENDIAN);
	mpiImport(&rsaPrivateKeys[0].dp, dp1, sizeof(dp1), MPI_FORMAT_BIG_ENDIAN);
	mpiImport(&rsaPrivateKeys[0].dq, dq1, sizeof(dq1), MPI_FORMAT_BIG_ENDIAN);
	mpiImport(&rsaPrivateKeys[0].qinv, qinv1, sizeof(qinv1), MPI_FORMAT_BIG_ENDIAN);

	mpiImport(&rsaPublicKeys[0].n, n1, sizeof(n1), MPI_FORMAT_BIG_ENDIAN);
	mpiImport(&rsaPublicKeys[0].e, e, sizeof(e), MPI_FORMAT_BIG_ENDIAN);

	/*------------2048---------------*/
	mpiImport(&rsaPrivateKeys[1].n, n2, sizeof(n2), MPI_FORMAT_BIG_ENDIAN);
	mpiImport(&rsaPrivateKeys[1].e, e, sizeof(e), MPI_FORMAT_BIG_ENDIAN);
	mpiImport(&rsaPrivateKeys[1].d, d2, sizeof(d2), MPI_FORMAT_BIG_ENDIAN);
	mpiImport(&rsaPrivateKeys[1].p, p2, sizeof(p2), MPI_FORMAT_BIG_ENDIAN);
	mpiImport(&rsaPrivateKeys[1].q, q2, sizeof(q2), MPI_FORMAT_BIG_ENDIAN);
	mpiImport(&rsaPrivateKeys[1].dp, dp2, sizeof(dp2), MPI_FORMAT_BIG_ENDIAN);
	mpiImport(&rsaPrivateKeys[1].dq, dq2, sizeof(dq2), MPI_FORMAT_BIG_ENDIAN);
	mpiImport(&rsaPrivateKeys[1].qinv, qinv2, sizeof(qinv2), MPI_FORMAT_BIG_ENDIAN);

	mpiImport(&rsaPublicKeys[1].n, n2, sizeof(n2), MPI_FORMAT_BIG_ENDIAN);
	mpiImport(&rsaPublicKeys[1].e, e, sizeof(e), MPI_FORMAT_BIG_ENDIAN);

	/*------------3072---------------*/
	mpiImport(&rsaPrivateKeys[2].n, n3, sizeof(n3), MPI_FORMAT_BIG_ENDIAN);
	mpiImport(&rsaPrivateKeys[2].e, e, sizeof(e), MPI_FORMAT_BIG_ENDIAN);
	mpiImport(&rsaPrivateKeys[2].d, d3, sizeof(d3), MPI_FORMAT_BIG_ENDIAN);
	mpiImport(&rsaPrivateKeys[2].p, p3, sizeof(p3), MPI_FORMAT_BIG_ENDIAN);
	mpiImport(&rsaPrivateKeys[2].q, q3, sizeof(q3), MPI_FORMAT_BIG_ENDIAN);
	mpiImport(&rsaPrivateKeys[2].dp, dp3, sizeof(dp3), MPI_FORMAT_BIG_ENDIAN);
	mpiImport(&rsaPrivateKeys[2].dq, dq3, sizeof(dq3), MPI_FORMAT_BIG_ENDIAN);
	mpiImport(&rsaPrivateKeys[2].qinv, qinv3, sizeof(qinv3), MPI_FORMAT_BIG_ENDIAN);

	mpiImport(&rsaPublicKeys[2].n, n3, sizeof(n3), MPI_FORMAT_BIG_ENDIAN);
	mpiImport(&rsaPublicKeys[2].e, e, sizeof(e), MPI_FORMAT_BIG_ENDIAN);

	/*------------4096---------------*/
	mpiImport(&rsaPrivateKeys[3].n, n4, sizeof(n4), MPI_FORMAT_BIG_ENDIAN);
	mpiImport(&rsaPrivateKeys[3].e, e, sizeof(e), MPI_FORMAT_BIG_ENDIAN);
	mpiImport(&rsaPrivateKeys[3].d, d4, sizeof(d4), MPI_FORMAT_BIG_ENDIAN);
	mpiImport(&rsaPrivateKeys[3].p, p4, sizeof(p4), MPI_FORMAT_BIG_ENDIAN);
	mpiImport(&rsaPrivateKeys[3].q, q4, sizeof(q4), MPI_FORMAT_BIG_ENDIAN);
	mpiImport(&rsaPrivateKeys[3].dp, dp4, sizeof(dp4), MPI_FORMAT_BIG_ENDIAN);
	mpiImport(&rsaPrivateKeys[3].dq, dq4, sizeof(dq4), MPI_FORMAT_BIG_ENDIAN);
	mpiImport(&rsaPrivateKeys[3].qinv, qinv4, sizeof(qinv4), MPI_FORMAT_BIG_ENDIAN);

	mpiImport(&rsaPublicKeys[3].n, n4, sizeof(n4), MPI_FORMAT_BIG_ENDIAN);
	mpiImport(&rsaPublicKeys[3].e, e, sizeof(e), MPI_FORMAT_BIG_ENDIAN);
}
void RngInit(void)
{
	yarrowInit(&contextYarrow);
	yarrowSeed(&contextYarrow, seed, sizeof(seed));
}

