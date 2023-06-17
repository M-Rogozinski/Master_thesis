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

EcPrivateKey	ecPrivateKeys[3];
EcPublicKey		ecPublicKeys[3];

EcDomainParameters  ecParams[3];
EcdsaSignature		ecdsaSig[3];

uint8_t seed[64] = {1,2,3,4};

uint8_t sig[4096];

size_t sigLen;

void SignatureTest(void)
{
	for ( uint8_t i = 0; i < 4; i++) {
	}
}

void EcTest(void)
{
	RngInit();

	EcInit();

	EcDSA();
}

void EcInit(void)
{

	ecInitDomainParameters(&ecParams[0]);
	ecLoadDomainParameters(&ecParams[0], &secp256r1Curve);

	ecGenerateKeyPair(&yarrowPrngAlgo, &contextYarrow, &ecParams[0], &ecPrivateKeys[0], &ecPublicKeys[0]);

	ecInitDomainParameters(&ecParams[1]);
	ecLoadDomainParameters(&ecParams[1], &secp384r1Curve);

	ecGenerateKeyPair(&yarrowPrngAlgo, &contextYarrow, &ecParams[1], &ecPrivateKeys[1], &ecPublicKeys[1]);

	ecInitDomainParameters(&ecParams[2]);
	ecLoadDomainParameters(&ecParams[2], &secp521r1Curve);


	ecGenerateKeyPair(&yarrowPrngAlgo, &contextYarrow, &ecParams[2], &ecPrivateKeys[2], &ecPublicKeys[2]);

	ecdsaInitSignature(&ecdsaSig);
}

void EcDSA(void)
{
	for (uint8_t i = 0; i < 3; i++)
	{
		PrintInfo("EcDSA", 2048, asymKeysLengths[i], i);
		HAL_TIM_Base_Start(&htim7);
		ecdsaGenerateSignature(&yarrowPrngAlgo, &contextYarrow, &ecParams[i], &ecPrivateKeys[i], input, 2048, &ecdsaSig[i]);
		HAL_TIM_Base_Stop(&htim7);
		PrintTime(&htim7);

		HAL_TIM_Base_Start(&htim7);
		ecdsaVerifySignature(&ecParams[i], &ecPublicKeys[i], input, 2048, &ecdsaSig[i]);
		HAL_TIM_Base_Stop(&htim7);
		PrintTime(&htim7);
	}
}


void RsaTest(void)
{
	yarrowInit(&contextYarrow);
	yarrowSeed(&contextYarrow, seed, sizeof(seed));

	RsaInit();
	uint32_t size ;
	size = strlen(input);
	uint8_t buf[100];
	itoa(size, buf, 10);
	HAL_UART_Transmit(&huart2, buf, strlen(buf), HAL_MAX_DELAY);
//	RsaPKCS1();
//	RsaPSS();

}

void RsaInit(void)
{
	RsaKeysInit();
}

void RsaPSS(void)
{
	RsaCleanSig();

	for ( uint8_t i = 1; i < 4; i++) {

		PrintInfo(pssName, 2048, asymKeysLengths[i], sha256Name);
		HAL_TIM_Base_Start(&htim7);
		rsassaPssSign(&yarrowPrngAlgo, &contextYarrow, &rsaPrivateKeys[i], &sha256HashAlgo, 20, input, sig, &sigLen);
		HAL_TIM_Base_Stop(&htim7);
		PrintTime(&htim7);
		HAL_TIM_Base_Start(&htim7);
		rsassaPssVerify(&rsaPublicKeys[i], &sha256HashAlgo, 20, input, sig, sigLen);
		HAL_TIM_Base_Stop(&htim7);
		PrintTime(&htim7);

		RsaCleanSig();

		PrintInfo(pssName, 2048, asymKeysLengths[i], sha384Name);
		HAL_TIM_Base_Start(&htim7);
		rsassaPssSign(&yarrowPrngAlgo, &contextYarrow, &rsaPrivateKeys[i], &sha384HashAlgo, 20, input, sig, &sigLen);
		HAL_TIM_Base_Stop(&htim7);
		PrintTime(&htim7);
		HAL_TIM_Base_Start(&htim7);
		rsassaPssVerify(&rsaPublicKeys[i], &sha384HashAlgo, 20, input, sig, sigLen);
		HAL_TIM_Base_Stop(&htim7);
		PrintTime(&htim7);

		RsaCleanSig();

		PrintInfo(pssName, 2048, asymKeysLengths[i], sha512Name);
		HAL_TIM_Base_Start(&htim7);
		rsassaPssSign(&yarrowPrngAlgo, &contextYarrow, &rsaPrivateKeys[i], &sha512HashAlgo, 20, input, sig, &sigLen);
		HAL_TIM_Base_Stop(&htim7);
		PrintTime(&htim7);
		HAL_TIM_Base_Start(&htim7);
		rsassaPssVerify(&rsaPublicKeys[i], &sha512HashAlgo, 20, input, sig, sigLen);
		HAL_TIM_Base_Stop(&htim7);
		PrintTime(&htim7);

		RsaCleanSig();

		PrintInfo(pssName, 2048, asymKeysLengths[i], "sha3_256");
		HAL_TIM_Base_Start(&htim7);
		rsassaPssSign(&yarrowPrngAlgo, &contextYarrow, &rsaPrivateKeys[i], &sha3_256HashAlgo, 20, input, sig, &sigLen);
		HAL_TIM_Base_Stop(&htim7);
		PrintTime(&htim7);
		HAL_TIM_Base_Start(&htim7);
		rsassaPssVerify(&rsaPublicKeys[i], &sha3_256HashAlgo, 20, input, sig, sigLen);
		HAL_TIM_Base_Stop(&htim7);
		PrintTime(&htim7);

		RsaCleanSig();

		PrintInfo(pssName, 2048, asymKeysLengths[i], "sha3_384");
		HAL_TIM_Base_Start(&htim7);
		rsassaPssSign(&yarrowPrngAlgo, &contextYarrow, &rsaPrivateKeys[i], &sha3_384HashAlgo, 20, input, sig, &sigLen);
		HAL_TIM_Base_Stop(&htim7);
		PrintTime(&htim7);
		HAL_TIM_Base_Start(&htim7);
		rsassaPssVerify(&rsaPublicKeys[i], &sha3_384HashAlgo, 20, input, sig, sigLen);
		HAL_TIM_Base_Stop(&htim7);
		PrintTime(&htim7);

		RsaCleanSig();

		PrintInfo(pssName, 2048, asymKeysLengths[i], "sha3_512");
		HAL_TIM_Base_Start(&htim7);
		rsassaPssSign(&yarrowPrngAlgo, &contextYarrow, &rsaPrivateKeys[i], &sha3_512HashAlgo, 20, input, sig, &sigLen);
		HAL_TIM_Base_Stop(&htim7);
		PrintTime(&htim7);
		HAL_TIM_Base_Start(&htim7);
		rsassaPssVerify(&rsaPublicKeys[i], &sha3_512HashAlgo, 20, input, sig, sigLen);
		HAL_TIM_Base_Stop(&htim7);
		PrintTime(&htim7);
	}
}

void RsaPKCS1(void)
{
	RsaCleanSig();

	for (uint8_t i = 1; i < 4; i++ ) {

		PrintInfo(pkcsName, 2048, asymKeysLengths[i], sha256Name);
		HAL_TIM_Base_Start(&htim7);
		rsassaPkcs1v15Sign(&rsaPrivateKeys[i], &sha256HashAlgo, input, sig, &sigLen);
		HAL_TIM_Base_Stop(&htim7);
		PrintTime(&htim7);
		HAL_TIM_Base_Start(&htim7);
		rsassaPkcs1v15Verify(&rsaPublicKeys[i], &sha256HashAlgo, input, sig, sigLen);
		HAL_TIM_Base_Stop(&htim7);
		PrintTime(&htim7);

		RsaCleanSig();

		PrintInfo(pkcsName, 2048, asymKeysLengths[i], sha384Name);
		HAL_TIM_Base_Start(&htim7);
		rsassaPkcs1v15Sign(&rsaPrivateKeys[i], &sha384HashAlgo, input, sig, &sigLen);
		HAL_TIM_Base_Stop(&htim7);
		PrintTime(&htim7);
		HAL_TIM_Base_Start(&htim7);
		rsassaPkcs1v15Verify(&rsaPublicKeys[i], &sha384HashAlgo, input, sig, sigLen);
		HAL_TIM_Base_Stop(&htim7);
		PrintTime(&htim7);

		RsaCleanSig();

		PrintInfo(pkcsName, 2048, asymKeysLengths[i], sha512Name);
		rsassaPkcs1v15Sign(&rsaPrivateKeys[i], &sha512HashAlgo, input, sig, &sigLen);
		HAL_TIM_Base_Stop(&htim7);
		PrintTime(&htim7);
		HAL_TIM_Base_Start(&htim7);
		rsassaPkcs1v15Verify(&rsaPublicKeys[i], &sha512HashAlgo, input, sig, sigLen);
		HAL_TIM_Base_Stop(&htim7);
		PrintTime(&htim7);

		PrintInfo(pkcsName, 2048, asymKeysLengths[i], "sha3_256");
		HAL_TIM_Base_Start(&htim7);
		rsassaPkcs1v15Sign(&rsaPrivateKeys[i], &sha3_256HashAlgo, input, sig, &sigLen);
		HAL_TIM_Base_Stop(&htim7);
		PrintTime(&htim7);
		HAL_TIM_Base_Start(&htim7);
		rsassaPkcs1v15Verify(&rsaPublicKeys[i], &sha3_256HashAlgo, input, sig, sigLen);
		HAL_TIM_Base_Stop(&htim7);
		PrintTime(&htim7);

		RsaCleanSig();

		PrintInfo(pkcsName, 2048, asymKeysLengths[i], "sha3_384");
		HAL_TIM_Base_Start(&htim7);
		rsassaPkcs1v15Sign(&rsaPrivateKeys[i], &sha3_384HashAlgo, input, sig, &sigLen);
		HAL_TIM_Base_Stop(&htim7);
		PrintTime(&htim7);
		HAL_TIM_Base_Start(&htim7);
		rsassaPkcs1v15Verify(&rsaPublicKeys[i], &sha3_384HashAlgo, input, sig, sigLen);
		HAL_TIM_Base_Stop(&htim7);
		PrintTime(&htim7);

		RsaCleanSig();

		PrintInfo(pkcsName, 2048, asymKeysLengths[i], "sha3_512");
		rsassaPkcs1v15Sign(&rsaPrivateKeys[i], &sha3_512HashAlgo, input, sig, &sigLen);
		HAL_TIM_Base_Stop(&htim7);
		PrintTime(&htim7);
		HAL_TIM_Base_Start(&htim7);
		rsassaPkcs1v15Verify(&rsaPublicKeys[i], &sha3_512HashAlgo, input, sig, sigLen);
		HAL_TIM_Base_Stop(&htim7);
		PrintTime(&htim7);
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

