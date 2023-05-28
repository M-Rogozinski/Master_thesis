/*
 * asymmetric.c
 *
 *  Created on: May 24, 2023
 *      Author: michal
 */

#include "Asymmetric/ec.h"
#include "Asymmetric/rsa.h"
#include "Asymmetric/asymmetric.h"
#include "Asymmetric/asym_keys.h"
#include "rng/yarrow.h"
#include "tim.h"
#include "usart.h"
#include "print.h"


extern const uint8_t input[];


YarrowContext contextYarrow;

RsaPrivateKey	privateKeys[4];
RsaPublicKey	publicKeys[4];

uint8_t seed[64] = {1,2,3,4};

uint8_t sig[4096];

size_t sigLen;



void RsaTest(void)
{
	RsaInit();
	RsaPKCS1();

}

void RsaPKCS1(void)
{
	uint8_t i;
	for ( i = 0; i < 3; i++ ) {

		PrintInfo(rsaName, 2048, asymKeysLengths[i], sha256Name);
		HAL_TIM_Base_Start(&htim6);
		rsassaPkcs1v15Sign(&privateKeys[i], &sha256HashAlgo, input, sig, &sigLen);
		HAL_TIM_Base_Stop(&htim6);
		PrintTime();
		HAL_TIM_Base_Start(&htim6);
		rsassaPkcs1v15Verify(&publicKeys[i], &sha256HashAlgo, input, sig, sigLen);
		HAL_TIM_Base_Stop(&htim6);
		PrintTime();

		RsaCleanSig();

		PrintInfo(rsaName, 2048, asymKeysLengths[i], sha384Name);
		HAL_TIM_Base_Start(&htim6);
		rsassaPkcs1v15Sign(&privateKeys[i], &sha384HashAlgo, input, sig, &sigLen);
		HAL_TIM_Base_Stop(&htim6);
		PrintTime();
		HAL_TIM_Base_Start(&htim6);
		rsassaPkcs1v15Verify(&publicKeys[i], &sha384HashAlgo, input, sig, sigLen);
		HAL_TIM_Base_Stop(&htim6);
		PrintTime();

		RsaCleanSig();

		PrintInfo(rsaName, 2048, asymKeysLengths[i], sha512Name);
		rsassaPkcs1v15Sign(&privateKeys[i], &sha512HashAlgo, input, sig, &sigLen);
		HAL_TIM_Base_Stop(&htim6);
		PrintTime();
		HAL_TIM_Base_Start(&htim6);
		rsassaPkcs1v15Verify(&publicKeys[i], &sha512HashAlgo, input, sig, sigLen);
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
	mpiImport(&privateKeys[0].n, n1, sizeof(n1), MPI_FORMAT_BIG_ENDIAN);
	mpiImport(&privateKeys[0].e, e, sizeof(e), MPI_FORMAT_BIG_ENDIAN);
	mpiImport(&privateKeys[0].d, d1, sizeof(d1), MPI_FORMAT_BIG_ENDIAN);
	mpiImport(&privateKeys[0].p, p1, sizeof(p1), MPI_FORMAT_BIG_ENDIAN);
	mpiImport(&privateKeys[0].q, q1, sizeof(q1), MPI_FORMAT_BIG_ENDIAN);
	mpiImport(&privateKeys[0].dp, dp1, sizeof(dp1), MPI_FORMAT_BIG_ENDIAN);
	mpiImport(&privateKeys[0].dq, dq1, sizeof(dq1), MPI_FORMAT_BIG_ENDIAN);
	mpiImport(&privateKeys[0].qinv, qinv1, sizeof(qinv1), MPI_FORMAT_BIG_ENDIAN);

	mpiImport(&publicKeys[0].n, n1, sizeof(n1), MPI_FORMAT_BIG_ENDIAN);
	mpiImport(&publicKeys[0].e, e, sizeof(e), MPI_FORMAT_BIG_ENDIAN);

	/*------------2048---------------*/
	mpiImport(&privateKeys[1].n, n2, sizeof(n2), MPI_FORMAT_BIG_ENDIAN);
	mpiImport(&privateKeys[1].e, e, sizeof(e), MPI_FORMAT_BIG_ENDIAN);
	mpiImport(&privateKeys[1].d, d2, sizeof(d2), MPI_FORMAT_BIG_ENDIAN);
	mpiImport(&privateKeys[1].p, p2, sizeof(p2), MPI_FORMAT_BIG_ENDIAN);
	mpiImport(&privateKeys[1].q, q2, sizeof(q2), MPI_FORMAT_BIG_ENDIAN);
	mpiImport(&privateKeys[1].dp, dp2, sizeof(dp2), MPI_FORMAT_BIG_ENDIAN);
	mpiImport(&privateKeys[1].dq, dq2, sizeof(dq2), MPI_FORMAT_BIG_ENDIAN);
	mpiImport(&privateKeys[1].qinv, qinv2, sizeof(qinv2), MPI_FORMAT_BIG_ENDIAN);

	mpiImport(&publicKeys[1].n, n2, sizeof(n2), MPI_FORMAT_BIG_ENDIAN);
	mpiImport(&publicKeys[1].e, e, sizeof(e), MPI_FORMAT_BIG_ENDIAN);

	/*------------3072---------------*/
	mpiImport(&privateKeys[2].n, n3, sizeof(n3), MPI_FORMAT_BIG_ENDIAN);
	mpiImport(&privateKeys[2].e, e, sizeof(e), MPI_FORMAT_BIG_ENDIAN);
	mpiImport(&privateKeys[2].d, d3, sizeof(d3), MPI_FORMAT_BIG_ENDIAN);
	mpiImport(&privateKeys[2].p, p3, sizeof(p3), MPI_FORMAT_BIG_ENDIAN);
	mpiImport(&privateKeys[2].q, q3, sizeof(q3), MPI_FORMAT_BIG_ENDIAN);
	mpiImport(&privateKeys[2].dp, dp3, sizeof(dp3), MPI_FORMAT_BIG_ENDIAN);
	mpiImport(&privateKeys[2].dq, dq3, sizeof(dq3), MPI_FORMAT_BIG_ENDIAN);
	mpiImport(&privateKeys[2].qinv, qinv3, sizeof(qinv3), MPI_FORMAT_BIG_ENDIAN);

	mpiImport(&publicKeys[2].n, n3, sizeof(n3), MPI_FORMAT_BIG_ENDIAN);
	mpiImport(&publicKeys[2].e, e, sizeof(e), MPI_FORMAT_BIG_ENDIAN);

	/*------------4096---------------*/
	mpiImport(&privateKeys[3].n, n4, sizeof(n4), MPI_FORMAT_BIG_ENDIAN);
	mpiImport(&privateKeys[3].e, e, sizeof(e), MPI_FORMAT_BIG_ENDIAN);
	mpiImport(&privateKeys[3].d, d4, sizeof(d4), MPI_FORMAT_BIG_ENDIAN);
	mpiImport(&privateKeys[3].p, p4, sizeof(p4), MPI_FORMAT_BIG_ENDIAN);
	mpiImport(&privateKeys[3].q, q4, sizeof(q4), MPI_FORMAT_BIG_ENDIAN);
	mpiImport(&privateKeys[3].dp, dp4, sizeof(dp4), MPI_FORMAT_BIG_ENDIAN);
	mpiImport(&privateKeys[3].dq, dq4, sizeof(dq4), MPI_FORMAT_BIG_ENDIAN);
	mpiImport(&privateKeys[3].qinv, qinv4, sizeof(qinv4), MPI_FORMAT_BIG_ENDIAN);

	mpiImport(&publicKeys[3].n, n4, sizeof(n4), MPI_FORMAT_BIG_ENDIAN);
	mpiImport(&publicKeys[3].e, e, sizeof(e), MPI_FORMAT_BIG_ENDIAN);
}
void RsaInit(void)
{
	RsaKeysInit();

	yarrowInit(&contextYarrow);
	yarrowSeed(&contextYarrow, seed, sizeof(seed));
}
