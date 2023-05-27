/*
 * asymmetric.c
 *
 *  Created on: May 24, 2023
 *      Author: michal
 */

#include "Asymmetric/ec.h"
#include "Asymmetric/rsa.h"
#include "Asymmetric/asymmetric.h"
#include "rng/yarrow.h"

extern const uint8_t input[];

const uint8_t n[] = {0xBB, 0x6F, 0xE7, 0x94, 0x32, 0xCC, 0x6E, 0xA2, 0xD8, 0xF9, 0x70, 0x67, 0x5A, 0x5A, 0x87, 0xBF, 0xBE, 0x1A, 0xFF,
		0x0B, 0xE6, 0x3E, 0x87, 0x9F, 0x2A, 0xFF, 0xB9, 0x36, 0x44, 0xD4, 0xD2, 0xC6, 0xD0, 0x00, 0x43, 0x0D, 0xEC, 0x66, 0xAB, 0xF4, 0x78,
		0x29, 0xE7, 0x4B, 0x8C, 0x51, 0x08, 0x62, 0x3A, 0x1C, 0x0E, 0xE8, 0xBE, 0x21, 0x7B, 0x3A, 0xD8, 0xD3, 0x6D, 0x5E, 0xB4, 0xFC, 0xA1, 0xD9};

const uint8_t e[] = {0x01, 0x00, 0x01};

const uint8_t d[] = {0x6F, 0x05, 0xEA, 0xD2, 0xF2, 0x7F, 0xFA, 0xEC, 0x84, 0xBE, 0xC3, 0x60, 0xC4, 0xB9, 0x28, 0xFD, 0x5F, 0x3A, 0x98, 0x65, 0xD0,
			0xFC, 0xAA, 0xD2, 0x91, 0xE2, 0xA5, 0x2F, 0x4A, 0xF8, 0x10, 0xDC, 0x63, 0x73, 0x27, 0x8C, 0x00, 0x6A, 0x0A, 0xBB, 0xA2, 0x7D, 0xC8, 0xC6,
			0x3B, 0xF9, 0x7F, 0x7E, 0x66, 0x6E, 0x27, 0xC5, 0x28, 0x4D, 0x7D, 0x3B, 0x1F, 0xFF, 0xE1, 0x6B, 0x7A, 0x87, 0xB5, 0x1D};

const uint8_t p[] = {0xF3, 0x92, 0x9B, 0x94, 0x35, 0x60, 0x8F, 0x8A, 0x22, 0xC2, 0x08, 0xD8, 0x67, 0x95, 0x27, 0x1D, 0x54, 0xEB, 0xDF, 0xB0, 0x9D, 0xDE,
			0xF5, 0x39, 0xAB, 0x08, 0x3D, 0xA9, 0x12, 0xD4, 0xBD, 0x57};

const uint8_t q[] = {0xC5, 0x00, 0x16, 0xF8, 0x9D, 0xFF, 0x25, 0x61, 0x34, 0x7E, 0xD1, 0x18, 0x6A, 0x46, 0xE1, 0x50, 0xE2, 0x8B, 0xF2, 0xD0, 0xF5, 0x39,
			0xA1, 0x59, 0x4B, 0xBD, 0x7F, 0xE4, 0x67, 0x46, 0xEC, 0x4F};

const uint8_t dp[] = {0x9E, 0x7D, 0x43, 0x26, 0xC9, 0x24, 0xAF, 0xC1, 0xDE, 0xA4, 0x0B, 0x45, 0x65, 0x01, 0x34, 0x96, 0x6D, 0x6F, 0x9D, 0xFA, 0x3A, 0x7F,
			0x9D, 0x69, 0x8C, 0xD4, 0xAB, 0xEA, 0x9C, 0x0A, 0x39, 0xB9};

const uint8_t dq[] = {0xBA, 0x84, 0x00, 0x3B, 0xB9, 0x53, 0x55, 0xAF, 0xB7, 0xC5, 0x0D, 0xF1, 0x40, 0xC6, 0x05, 0x13, 0xD0, 0xBA, 0x51, 0xD6, 0x37, 0x27,
			0x2E, 0x35, 0x5E, 0x39, 0x77, 0x79, 0xE7, 0xB2, 0x45, 0x8F};

const uint8_t qinv[] = {0x30, 0xB9, 0xE4, 0xF2, 0xAF, 0xA5, 0xAC, 0x67, 0x9F, 0x92, 0x0F, 0xC8, 0x3F, 0x1F, 0x2D, 0xF1, 0xBA, 0xF1, 0x77, 0x9C, 0xF9, 0x89,
			0x44, 0x7F, 0xAB, 0xC2, 0xF5, 0x62, 0x86, 0x57, 0x05, 0x3A};

YarrowContext contextYarrow;

RsaPrivateKey	privateKey;
RsaPublicKey	publicKey;

uint8_t seed[64] = {1,2,3,4};

uint8_t sig[2048];

size_t sigLen;



void RsaTest(void)
{
	RsaInit();

	RsaPKCS1();

}

void RsaPKCS1(void)
{


//	rsassaPkcs1v15Sign(&privateKey, &whirlpoolHashAlgo, input, sig, &sigLen);
//	rsassaPkcs1v15Verify(&publicKey, &whirlpoolHashAlgo, input, sig, sigLen);

	RsaCleanSig();

	rsassaPkcs1v15Sign(&privateKey, &sha256HashAlgo, input, sig, &sigLen);
	rsassaPkcs1v15Verify(&publicKey, &sha256HashAlgo, input, sig, sigLen);

	RsaCleanSig();

	rsassaPkcs1v15Sign(&privateKey, &sha384HashAlgo, input, sig, &sigLen);
	rsassaPkcs1v15Verify(&publicKey, &sha384HashAlgo, input, sig, sigLen);

	RsaCleanSig();


	rsassaPkcs1v15Sign(&privateKey, &sha512HashAlgo, input, sig, &sigLen);
	rsassaPkcs1v15Verify(&publicKey, &sha512HashAlgo, input, sig, sigLen);

}

void RsaCleanSig(void)
{
	memset(sig, 0, sizeof(sig));
	sigLen = 0;
}

void RsaKeysInit(void)
{
	mpiImport(&privateKey.n, n, sizeof(n), MPI_FORMAT_BIG_ENDIAN);
	mpiImport(&privateKey.e, e, sizeof(e), MPI_FORMAT_BIG_ENDIAN);
	mpiImport(&privateKey.d, d, sizeof(d), MPI_FORMAT_BIG_ENDIAN);
	mpiImport(&privateKey.p, p, sizeof(p), MPI_FORMAT_BIG_ENDIAN);
	mpiImport(&privateKey.q, q, sizeof(q), MPI_FORMAT_BIG_ENDIAN);
	mpiImport(&privateKey.dp, dp, sizeof(dp), MPI_FORMAT_BIG_ENDIAN);
	mpiImport(&privateKey.dq, dq, sizeof(dq), MPI_FORMAT_BIG_ENDIAN);
	mpiImport(&privateKey.qinv, qinv, sizeof(qinv), MPI_FORMAT_BIG_ENDIAN);

	mpiImport(&publicKey.n, n, sizeof(n), MPI_FORMAT_BIG_ENDIAN);
	mpiImport(&publicKey.e, e, sizeof(e), MPI_FORMAT_BIG_ENDIAN);
}
void RsaInit(void)
{
	RsaKeysInit();

	yarrowInit(&contextYarrow);
	yarrowSeed(&contextYarrow, seed, sizeof(seed));
}