/*
 * asym_keys.h
 *
 *  Created on: 28 maj 2023
 *      Author: michal
 */

#ifndef INC_ASYMMETRIC_ASYM_KEYS_H_
#define INC_ASYMMETRIC_ASYM_KEYS_H_

const uint8_t e[] = {0x01, 0x00, 0x01};

//-------------------RSA---1024--------------------------------------------------------
const uint8_t n1[] = {0xBB, 0x6F, 0xE7, 0x94, 0x32, 0xCC, 0x6E, 0xA2, 0xD8, 0xF9, 0x70, 0x67, 0x5A, 0x5A, 0x87, 0xBF, 0xBE, 0x1A, 0xFF,0x0B, 0xE6,
		0x3E, 0x87, 0x9F, 0x2A, 0xFF, 0xB9, 0x36, 0x44, 0xD4, 0xD2, 0xC6, 0xD0, 0x00, 0x43, 0x0D, 0xEC, 0x66, 0xAB, 0xF4, 0x78,0x29, 0xE7, 0x4B, 0x8C,
		0x51, 0x08, 0x62, 0x3A, 0x1C, 0x0E, 0xE8, 0xBE, 0x21, 0x7B, 0x3A, 0xD8, 0xD3, 0x6D, 0x5E, 0xB4, 0xFC, 0xA1, 0xD9};

const uint8_t d1[] = {0x6F, 0x05, 0xEA, 0xD2, 0xF2, 0x7F, 0xFA, 0xEC, 0x84, 0xBE, 0xC3, 0x60, 0xC4, 0xB9, 0x28, 0xFD, 0x5F, 0x3A, 0x98, 0x65, 0xD0,
		0xFC, 0xAA, 0xD2, 0x91, 0xE2, 0xA5, 0x2F, 0x4A, 0xF8, 0x10, 0xDC, 0x63, 0x73, 0x27, 0x8C, 0x00, 0x6A, 0x0A, 0xBB, 0xA2, 0x7D, 0xC8, 0xC6, 0x3B,
		0xF9, 0x7F, 0x7E, 0x66, 0x6E, 0x27, 0xC5, 0x28, 0x4D, 0x7D, 0x3B, 0x1F, 0xFF, 0xE1, 0x6B, 0x7A, 0x87, 0xB5, 0x1D};

const uint8_t p1[] = {0xF3, 0x92, 0x9B, 0x94, 0x35, 0x60, 0x8F, 0x8A, 0x22, 0xC2, 0x08, 0xD8, 0x67, 0x95, 0x27, 0x1D, 0x54, 0xEB, 0xDF, 0xB0, 0x9D, 0xDE,
			0xF5, 0x39, 0xAB, 0x08, 0x3D, 0xA9, 0x12, 0xD4, 0xBD, 0x57};

const uint8_t q1[] = {0xC5, 0x00, 0x16, 0xF8, 0x9D, 0xFF, 0x25, 0x61, 0x34, 0x7E, 0xD1, 0x18, 0x6A, 0x46, 0xE1, 0x50, 0xE2, 0x8B, 0xF2, 0xD0, 0xF5, 0x39,
			0xA1, 0x59, 0x4B, 0xBD, 0x7F, 0xE4, 0x67, 0x46, 0xEC, 0x4F};

const uint8_t dp1[] = {0x9E, 0x7D, 0x43, 0x26, 0xC9, 0x24, 0xAF, 0xC1, 0xDE, 0xA4, 0x0B, 0x45, 0x65, 0x01, 0x34, 0x96, 0x6D, 0x6F, 0x9D, 0xFA, 0x3A, 0x7F,
			0x9D, 0x69, 0x8C, 0xD4, 0xAB, 0xEA, 0x9C, 0x0A, 0x39, 0xB9};

const uint8_t dq1[] = {0xBA, 0x84, 0x00, 0x3B, 0xB9, 0x53, 0x55, 0xAF, 0xB7, 0xC5, 0x0D, 0xF1, 0x40, 0xC6, 0x05, 0x13, 0xD0, 0xBA, 0x51, 0xD6, 0x37, 0x27,
			0x2E, 0x35, 0x5E, 0x39, 0x77, 0x79, 0xE7, 0xB2, 0x45, 0x8F};

const uint8_t qinv1[] = {0x30, 0xB9, 0xE4, 0xF2, 0xAF, 0xA5, 0xAC, 0x67, 0x9F, 0x92, 0x0F, 0xC8, 0x3F, 0x1F, 0x2D, 0xF1, 0xBA, 0xF1, 0x77, 0x9C, 0xF9, 0x89,
			0x44, 0x7F, 0xAB, 0xC2, 0xF5, 0x62, 0x86, 0x57, 0x05, 0x3A};
//-------------------RSA---2048--------------------------------------------------------
const uint8_t n2[] = {0x00, 0xc9, 0x8f, 0x73, 0x4d, 0x92, 0xf2, 0x3f, 0xa6, 0x77, 0xa9, 0x09, 0xc3, 0xc9, 0x86, 0xf8, 0xe5, 0xe5, 0xf3, 0x1f, 0x62,
		0x0a, 0x79, 0xf1, 0x1e, 0x08, 0x17, 0x7a, 0x6f, 0x06, 0x1e, 0xc3, 0x3a, 0xd0, 0xbb, 0x98, 0x45, 0x5a, 0x67, 0xea, 0x22, 0xbd, 0x80, 0xf9, 0xa8,
		0xba, 0x83, 0x53, 0xb7, 0x70, 0x03, 0xe7, 0x85, 0xc3, 0xec, 0x21, 0x25, 0xce, 0x88, 0x73, 0xb1, 0x15, 0xd6, 0x12, 0x2b, 0xc6, 0x4c, 0x0d, 0xe1,
		0x78, 0xba, 0x84, 0x89, 0xf9, 0x83, 0x1b, 0x6c, 0x91, 0xa9, 0xc7, 0xc6, 0x29, 0x04, 0x6c, 0xef, 0x87, 0xc8, 0xbd, 0x4c, 0x16, 0xd5, 0xee, 0x81,
		0xfa, 0xaf, 0x4e, 0x9a, 0x03, 0xd3, 0x28, 0xe2, 0x2f, 0xe7, 0x2e, 0x57, 0x94, 0x1d, 0xc6, 0x7c, 0xce, 0x4c, 0x9b, 0x9d, 0x1e, 0x5d, 0x08, 0xc1,
		0x1e, 0x8c, 0x6f, 0xe4, 0x11, 0x5d, 0x75, 0x69, 0xa3, 0xc0, 0x12, 0x51};


const uint8_t d2[] = {0x0b, 0xa0, 0x1e, 0x82, 0x66, 0xeb, 0x5a, 0x08, 0x7b, 0xf6, 0x5f, 0xfd, 0xce, 0xed, 0xde, 0x05, 0x44, 0x92, 0x15, 0x49, 0x4e,
		0x59, 0x62, 0x32, 0xdd, 0x3c, 0x9d, 0x6f, 0x31, 0xe7, 0x2c, 0x53, 0x84, 0x1e, 0x8d, 0xd5, 0xd2, 0x35, 0x14, 0x28, 0x14, 0xce, 0x0f, 0x98, 0x4f,
		0xc9, 0xab, 0x56, 0x75, 0x3b, 0x84, 0x6b, 0x0e, 0xb5, 0xdb, 0xe3, 0x96, 0x5a, 0x00, 0x72, 0x42, 0x54, 0x2a, 0x90, 0x09, 0x6d, 0xc0, 0xe5, 0x52,
		0x94, 0x16, 0x5b, 0xec, 0x5e, 0x7f, 0xb4, 0x29, 0x38, 0x5c, 0xca, 0xce, 0x3b, 0x0c, 0x91, 0x2e, 0xe1, 0xce, 0x75, 0xc3, 0x36, 0x8d, 0x0b, 0x49,
		0x99, 0x3b, 0x9b, 0x07, 0xfe, 0xbc, 0x3a, 0x35, 0xa3, 0x32, 0xe6, 0x04, 0xea, 0x84, 0xc7, 0x3f, 0xe8, 0x57, 0x08, 0x4f, 0xde, 0x66, 0x34, 0x61,
		0xdc, 0x36, 0x2b, 0x66, 0x36, 0x59, 0xa4, 0x24, 0xdc, 0x98, 0x01};

const uint8_t p2[] = {0x00, 0xfe, 0x0a, 0x97, 0x6e, 0x74, 0xcb, 0x84, 0x07, 0x4f, 0xaa, 0xae, 0x7f, 0x00, 0xb1, 0x51, 0x0c, 0x0f, 0x50, 0xe5, 0xea,
		0x56, 0xd2, 0xae, 0xa4, 0xa1, 0x5b, 0x56, 0xf4, 0x03, 0xb2, 0x52, 0xa0, 0x30, 0x7f, 0xdb, 0x9a, 0x25, 0xd9, 0x66, 0xf4, 0xe9, 0x78, 0x0d, 0x88,
		0x2d, 0x4c, 0x71, 0xf5, 0x93, 0x73, 0xa3, 0x92, 0x8f, 0x82, 0xb0, 0x58, 0xe4, 0x73, 0x05, 0x32, 0x01, 0xca, 0xbc, 0x21};

const uint8_t q2[] = {0x00, 0xcb, 0x1d, 0x46, 0x90, 0x09, 0x86, 0xe9, 0xc1, 0x0e, 0x74, 0xba, 0xc4, 0x53, 0xb6, 0x3a, 0x5f, 0x6a, 0x4d, 0xc0, 0x2a,
		0x12, 0x25, 0xa5, 0x08, 0x53, 0xdd, 0xb9, 0x4a, 0xdf, 0xa7, 0xd7, 0x1d, 0x9c, 0x7b, 0xeb, 0xf6, 0xe9, 0xfe, 0x07, 0xc6, 0xe9, 0x75, 0xa8, 0x94,
		0xf4, 0x77, 0x28, 0xcc, 0x30, 0x3f, 0x66, 0x9e, 0x6f, 0x92, 0xd2, 0x43, 0x17, 0x20, 0x16, 0x1c, 0x1a, 0x30, 0x10, 0x31};

const uint8_t dp2[] = {0x7a, 0x39, 0x48, 0x50, 0x39, 0x5b, 0x2d, 0x43, 0x83, 0x3d, 0xe0, 0x44, 0x74, 0x65, 0xdb, 0x53, 0x8d, 0x0e, 0xe3, 0xff, 0x52,
		0x14, 0x7d, 0x37, 0xf1, 0xf6, 0x0b, 0x28, 0xcd, 0x9a, 0x7f, 0x0c, 0x59, 0x29, 0x3a, 0xd3, 0xb8, 0x40, 0x17, 0xbb, 0xdf, 0x94, 0x06, 0x16, 0xad,
		0x8c, 0xa9, 0x0b, 0x79, 0x0c, 0xda, 0xf7, 0x09, 0x9a, 0xdc, 0x13, 0x78, 0x9e, 0x2a, 0x32, 0xbc, 0x0f, 0xf9, 0x61};

const uint8_t dq2[] = {0x00, 0x84, 0xf5, 0x00, 0xff, 0xc0, 0x7c, 0xc3, 0xff, 0x50, 0x0b, 0x31, 0x46, 0xda, 0xd5, 0x6a, 0x98, 0x92, 0xe9, 0x9a, 0x64,
		0xef, 0xc4, 0x1c, 0xa7, 0xba, 0xde, 0x65, 0x30, 0x91, 0xff, 0x38, 0x5d, 0x75, 0xd5, 0xd8, 0xbc, 0xa4, 0xa7, 0x59, 0x47, 0xe8, 0x02, 0xd0, 0xfb,
		0xd0, 0x9b, 0x3f, 0xe5, 0x89, 0x9f, 0xb6, 0xf8, 0xf7, 0x68, 0x50, 0xa3, 0x02, 0x3c, 0x4a, 0xbc, 0xd2, 0x97, 0xab, 0xc1};

const uint8_t qinv2[] = {0x63, 0x5f, 0x41, 0x39, 0xe4, 0x13, 0xba, 0x66, 0x6b, 0xd5, 0x66, 0x5d, 0xd2, 0x15, 0x9e, 0x34, 0x51, 0xb5, 0x20, 0xde, 0x0a,
		0x41, 0xf9, 0x57, 0xde, 0xe6, 0x81, 0x9e, 0x5b, 0x70, 0xe4, 0x88, 0x9f, 0x14, 0xe0, 0x5b, 0x99, 0xe2, 0x01, 0x91, 0x80, 0x3c, 0x9a, 0x9e, 0xc1,
		0xec, 0xdb, 0xa0, 0xde, 0xdb, 0x5a, 0xb7, 0x0e, 0x19, 0x20, 0xdf, 0x6c, 0x3a, 0x78, 0x47, 0xbc, 0x21, 0x3a, 0xf4};

//-------------------RSA---3072--------------------------------------------------------

const uint8_t n3[] = {0x00, 0xb2, 0x30, 0x97, 0xac, 0x32, 0xf6, 0x65, 0xfb, 0x8b, 0xb3, 0xa6, 0x80, 0xb4, 0x8e, 0x87, 0x2f, 0x8e, 0x3f, 0x96, 0x56,
		0xd8, 0xf5, 0x83, 0x1b, 0x68, 0xda, 0x8f, 0x1b, 0xe3, 0xdd, 0x6a, 0x53, 0x2d, 0xd2, 0x57, 0x27, 0x55, 0x7d, 0x89, 0xc7, 0x02, 0xac, 0xf3, 0x47,
		0x69, 0x9a, 0x04, 0x82, 0xec, 0x8f, 0xda, 0x34, 0xe4, 0x1c, 0x9b, 0x37, 0x56, 0x6b, 0x3f, 0x43, 0xcd, 0xd0, 0x47, 0x04, 0x02, 0x71, 0x48, 0x09,
		0xd6, 0x5e, 0xab, 0x23, 0xf9, 0xcb, 0xd6, 0xd5, 0x2d, 0x6a, 0x62, 0xe3, 0x75, 0x21, 0x2f, 0x33, 0xf3, 0x64, 0xfa, 0x4e, 0xa9, 0x17, 0x3b, 0x4d,
		0xba, 0x4d, 0xb5, 0x6d, 0x30, 0x22, 0x58, 0x5f, 0x8c, 0xa7, 0x0b, 0x13, 0xf6, 0x76, 0x9f, 0x26, 0x96, 0x82, 0xbd, 0xd5, 0x38, 0xd4, 0x88, 0xf4,
		0xfb, 0x8f, 0x4b, 0x97, 0xd3, 0xec, 0x57, 0x2d, 0x28, 0x51, 0x92, 0xdb, 0xb5, 0xaf, 0x14, 0x8f, 0x0f, 0x2e, 0x18, 0x65, 0x03, 0x6c, 0xb7, 0x48,
		0x35, 0x3d, 0xd7, 0xad, 0x0e, 0xcd, 0xfa, 0xd2, 0x90, 0x5d, 0xa2, 0xf5, 0x42, 0x5b, 0x90, 0x41, 0xc8, 0x81, 0xf6, 0x40, 0x18, 0x77, 0xfc, 0xd3,
		0xd2, 0x82, 0x69, 0x37, 0xfb, 0x55, 0xa9, 0x15, 0xb2, 0x80, 0xe6, 0xfb, 0x07, 0xe2, 0x17, 0xb4, 0x2e, 0x06, 0x61, 0x2c, 0xa0, 0xf9, 0xba, 0x6a,
		0x8a, 0x69, 0x51, 0xbb, 0x34, 0x68, 0x9f, 0x0b, 0x1c, 0xf2, 0xac, 0xa7, 0x6e, 0xea, 0x4b, 0xb2, 0x3b, 0x1a, 0x2a, 0x9e, 0x3e, 0x92, 0xf6, 0x98,
		0x58, 0xbe, 0x9a, 0x7d, 0x25, 0xb8, 0x66, 0x15, 0x8f, 0x4c, 0x3b, 0x57, 0xfd, 0x90, 0xf8, 0x49, 0x9f, 0x04, 0x53, 0x2a, 0x0e, 0x80, 0xee, 0x3e,
		0xc2, 0x88, 0x56, 0x56, 0x34, 0x3f, 0x47, 0x07, 0x6c, 0x65, 0x0c, 0x82, 0x75, 0x38, 0x49, 0xa4, 0x4b, 0x38, 0x82, 0x56, 0xa2, 0x20, 0x5a, 0x9b,
		0xfe, 0x12, 0x94, 0xca, 0x14, 0x41, 0x57, 0xdd, 0xc3, 0x88, 0xa7, 0x68, 0x2a, 0x2e, 0xf8, 0x0c, 0xcd, 0xe1, 0xdc, 0xd7, 0xdf, 0x06, 0x8b, 0x2d,
		0x05, 0xc0, 0x78, 0xe3, 0x4e, 0xc0, 0xf1, 0x57, 0x34, 0x94, 0x07, 0x9e, 0x48, 0xe1, 0xff, 0x31, 0xc9, 0x58, 0x54, 0x11, 0xce, 0xc0, 0x9a, 0x1b,
		0x47, 0x12, 0x2a, 0xac, 0x07, 0x6a, 0x47, 0x87, 0xdc, 0x13, 0x32, 0x11, 0xb9, 0xd7, 0x80, 0xe6, 0x2d, 0xda, 0x51, 0x02, 0x52, 0xea, 0xc1, 0xc5,
		0xfb, 0xcf, 0xf7, 0x67, 0x9f, 0xc5, 0x2a, 0x4c, 0xa0, 0x2f, 0x66, 0xf5, 0x57, 0xeb, 0x5b, 0x86, 0x29, 0x99, 0x01, 0x28, 0xed, 0xa3, 0xcd, 0x8b,
		0xe5, 0xe0, 0x88, 0x37, 0xdc, 0x3b, 0x78, 0x71, 0x45, 0x01, 0xa6, 0xa8, 0x94, 0x18, 0x0f, 0x3a, 0x21, 0xfd, 0x94, 0x53, 0xd9, 0x8b, 0xf2, 0xb6,
		0xd2, 0xd4, 0x1b, 0xb5};

const uint8_t d3[] = {0x0e, 0x24, 0x01, 0x62, 0xac, 0x22, 0xab, 0x4c, 0xd9, 0xdf, 0xcb, 0xb1, 0x55, 0x62, 0xd0, 0x2d, 0xeb, 0xc8, 0x76, 0x5f, 0xa0,
		0x55, 0x0f, 0x6e, 0xa5, 0x3f, 0x5e, 0xf1, 0xa9, 0x7f, 0x6b, 0x38, 0xd1, 0x9f, 0x3f, 0xc5, 0x02, 0x7e, 0xf5, 0x68, 0x42, 0x79, 0x43, 0x79, 0xcc,
		0x7d, 0x69, 0x53, 0xe8, 0x7e, 0x5b, 0xf9, 0xd6, 0xe1, 0x16, 0xf2, 0x3e, 0x71, 0xec, 0x07, 0x2f, 0x4b, 0x3d, 0x84, 0xd4, 0x70, 0x1f, 0xf5, 0x8e,
		0x8f, 0xb1, 0xb3, 0x7d, 0x01, 0xcf, 0xa3, 0xd8, 0x38, 0x4e, 0x99, 0x05, 0x5f, 0xb8, 0xf5, 0x68, 0x4b, 0x2a, 0xfa, 0xae, 0x11, 0x86, 0xbb, 0xc5,
		0x87, 0xf5, 0x83, 0x5b, 0x8e, 0xb0, 0xdb, 0xad, 0xa2, 0x48, 0xa4, 0x9b, 0x6a, 0x50, 0xce, 0x9e, 0x4d, 0x74, 0x24, 0xcf, 0xc9, 0xe7, 0x5a, 0x7a,
		0xfc, 0xcf, 0xff, 0x6a, 0xff, 0xcb, 0x9a, 0x97, 0xa3, 0x58, 0x42, 0x5b, 0xa4, 0x85, 0x69, 0xa5, 0x9c, 0x94, 0xae, 0xae, 0x25, 0xba, 0x55, 0x1e,
		0x75, 0xdb, 0x6a, 0x98, 0xe2, 0x56, 0x15, 0x7a, 0xae, 0x6b, 0x9d, 0xb2, 0x02, 0x93, 0xd6, 0x9c, 0x99, 0x05, 0x02, 0x93, 0x79, 0x30, 0xd5, 0x05,
		0xd4, 0xcd, 0x3b, 0xcb, 0x94, 0x17, 0x2d, 0xd3, 0xc8, 0xc5, 0xf6, 0x70, 0x40, 0x36, 0xd3, 0x03, 0x7f, 0x59, 0xc6, 0x7c, 0x64, 0x85, 0x06, 0x2a,
		0x6e, 0x19, 0x8b, 0x08, 0x8b, 0x02, 0x8d, 0x52, 0x1a, 0x16, 0xfb, 0xd7, 0x92, 0xf6, 0x24, 0x31, 0x0e, 0x5f, 0x29, 0x05, 0x12, 0xb1, 0x35, 0x83,
		0x48, 0xbf, 0x08, 0x62, 0x2f, 0x04, 0xa8, 0x9f, 0x69, 0x40, 0x4c, 0xad, 0xa9, 0x59, 0x14, 0x8e, 0xfe, 0x53, 0x51, 0x23, 0x4b, 0x15, 0x5e, 0x43,
		0x5b, 0x84, 0xf0, 0xdf, 0x80, 0xbe, 0x87, 0xe8, 0xad, 0x52, 0xb8, 0x42, 0xca, 0x0b, 0xdb, 0x7b, 0x05, 0x55, 0x41, 0x94, 0x66, 0x29, 0x77, 0xfa,
		0x6a, 0x7c, 0x61, 0xf7, 0xb6, 0x7f, 0xe2, 0x15, 0x18, 0xfd, 0x86, 0x7d, 0x07, 0x59, 0xbb, 0xc4, 0xe4, 0x14, 0xa5, 0x62, 0x35, 0xae, 0x7a, 0x88,
		0xe1, 0xd7, 0x6a, 0x8f, 0x76, 0xa4, 0xcd, 0x16, 0x03, 0xea, 0x27, 0x63, 0x96, 0x07, 0x54, 0x72, 0xa8, 0x74, 0x42, 0x2e, 0xf8, 0x7e, 0xf6, 0xd4,
		0xbf, 0xf9, 0xac, 0xb1, 0xc9, 0x55, 0x49, 0x6f, 0xad, 0xa8, 0x88, 0x7f, 0x61, 0x2f, 0x32, 0x9d, 0xf1, 0x54, 0x09, 0x3e, 0xfe, 0x75, 0xa6, 0xcd,
		0x68, 0xfe, 0x6c, 0x2a, 0x10, 0x2e, 0xe6, 0x0f, 0x1e, 0x57, 0xf0, 0xf9, 0xd7, 0x4f, 0x7b, 0xe0, 0xcb, 0x1c, 0x3c, 0x84, 0xf2, 0xdf, 0x3d, 0x0e,
		0x94, 0x9f, 0xb7, 0x97, 0x4d, 0x8a, 0x99, 0xa3, 0x13, 0xe5, 0xc7, 0x42, 0x18, 0x6c, 0x68, 0xf2, 0x27, 0xfe, 0x6b, 0x25, 0xc3, 0xc9, 0x93, 0xd9,
		0xc9, 0x5a, 0x9b};

const uint8_t p3[] = {0x00, 0xc9, 0xe4, 0x0b, 0xb5, 0x8c, 0xb0, 0x2f, 0x04, 0x0a, 0x1c, 0x20, 0x89, 0x12, 0x00, 0x55, 0x4b, 0x14, 0x54, 0xac, 0x5c,
		0x78, 0xe0, 0xc9, 0x0f, 0xc0, 0x0c, 0x22, 0x50, 0xa0, 0xd5, 0x6e, 0x52, 0xc2, 0x25, 0xfb, 0xe6, 0xfc, 0x70, 0x76, 0xd2, 0x22, 0xdf, 0x4f, 0x05,
		0x90, 0xcf, 0x5f, 0x6f, 0x68, 0x90, 0xa1, 0x53, 0x57, 0x33, 0xd9, 0x59, 0xf2, 0x39, 0xc2, 0xd0, 0x1d, 0xfc, 0x18, 0x91, 0xe0, 0x43, 0x5f, 0x9a,
		0x39, 0x5e, 0x1c, 0xdd, 0x00, 0x28, 0x86, 0xd2, 0x6f, 0x9a, 0x23, 0x8d, 0xc5, 0x83, 0x3b, 0xc5, 0x2f, 0x63, 0xb5, 0xea, 0x29, 0xb3, 0xeb, 0x6b,
		0x6f, 0x6d, 0x74, 0xf1, 0x08, 0xa9, 0xf2, 0xdf, 0x5e, 0x2c, 0x18, 0xd4, 0x1b, 0x80, 0x24, 0x08, 0x40, 0xe6, 0x8b, 0x3c, 0x30, 0x32, 0xbd, 0xbd,
		0x69, 0x4a, 0xf3, 0xbc, 0xaf, 0xcc, 0xd0, 0x6f, 0x57, 0x8b, 0x6b, 0xfb, 0xb6, 0x4a, 0x24, 0x52, 0xcc, 0x92, 0xd5, 0x0e, 0x2f, 0x0f, 0x38, 0xa1,
		0xe3, 0xbb, 0x1d, 0xcc, 0x53, 0x97, 0x20, 0xaa, 0xbc, 0xf2, 0xe6, 0x5e, 0xd1, 0x44, 0x9b, 0x18, 0x9f, 0x4b, 0xc3, 0x90, 0x79, 0x58, 0x85, 0x03,
		0x71, 0x79, 0x4f, 0xc5, 0x50, 0x4e, 0xaa, 0xe1, 0xc9, 0x5a, 0x52, 0x7c, 0x1a, 0x60, 0x39, 0x8e, 0x2f, 0xd9, 0x5b, 0x06, 0x2e, 0xe6, 0x40, 0xbd,
		0xaa, 0x53, 0xc4, 0x4b};

const uint8_t q3[] = {0x00, 0xe1, 0xf2, 0x65, 0x32, 0x34, 0xa9, 0x0c, 0xf6, 0x54, 0xdb, 0xcd, 0x0a, 0x02, 0x57, 0xcd, 0x6e, 0x0f, 0xe1, 0xda, 0x18,
		0x14, 0xe2, 0x17, 0xd3, 0x79, 0x8a, 0x07, 0x9e, 0xc3, 0x90, 0x77, 0xea, 0xe4, 0x3e, 0x2e, 0x60, 0x2f, 0xcb, 0xa7, 0xee, 0x5b, 0x46, 0x3b, 0x53,
		0x2e, 0x56, 0x3b, 0xb8, 0x6e, 0x31, 0xa9, 0x17, 0xa0, 0x35, 0xf6, 0x8f, 0x8d, 0x18, 0x2c, 0x3b, 0x97, 0x7e, 0x25, 0x17, 0x2e, 0x7a, 0x5e, 0x74,
		0x70, 0x52, 0x82, 0x28, 0x95, 0x92, 0x36, 0x3e, 0x11, 0xc3, 0xad, 0x48, 0x8d, 0x28, 0x08, 0xf2, 0x5b, 0xe4, 0xb6, 0xdd, 0xc0, 0x32, 0xa2, 0xe5,
		0x54, 0x72, 0x0f, 0x73, 0xf5, 0x17, 0x7b, 0x3e, 0xb9, 0x31, 0x32, 0x61, 0xe7, 0x38, 0x16, 0x1f, 0xcb, 0xb0, 0x10, 0x52, 0xeb, 0xdb, 0xa9, 0x28,
		0xa5, 0x56, 0x57, 0x8f, 0xb4, 0x40, 0x4e, 0xab, 0xa7, 0xa1, 0x3c, 0x77, 0xb1, 0x59, 0x67, 0x2f, 0x4f, 0xa8, 0xfe, 0xea, 0x6a, 0xc4, 0xf7, 0xd2,
		0x78, 0xa6, 0x7e, 0x0b, 0x56, 0x77, 0x7a, 0xe3, 0xf7, 0xf0, 0x79, 0x80, 0x26, 0x03, 0x44, 0x38, 0x98, 0x78, 0x64, 0x25, 0xa6, 0x31, 0xec, 0xa1,
		0x13, 0x36, 0x40, 0xf1, 0xb8, 0x9a, 0xcb, 0x51, 0xfc, 0x97, 0x5c, 0xf1, 0xb3, 0x8b, 0xc9, 0xc2, 0x09, 0x15, 0x13, 0x6f, 0x92, 0x77, 0x32, 0x0f,
		0x91, 0xcb, 0x9f, 0xff};

const uint8_t dp3[] = {0x02, 0x20, 0x26, 0x87, 0x68, 0xcd, 0xca, 0x10, 0xee, 0xd2, 0x50, 0xfd, 0x60, 0x75, 0x24, 0x70, 0xbf, 0xec, 0x0c, 0x4c, 0x84,
		0xf1, 0x48, 0xec, 0xa3, 0x86, 0xfd, 0x2d, 0x80, 0x23, 0xff, 0x1f, 0x5b, 0xef, 0xee, 0x71, 0x06, 0x23, 0x60, 0xfc, 0xe1, 0x65, 0x1c, 0x7d, 0xe0,
		0x82, 0x6e, 0x6c, 0xcb, 0xdb, 0x09, 0xf7, 0xc8, 0xa9, 0x41, 0x16, 0x93, 0x58, 0x4c, 0x56, 0xc8, 0x9a, 0x08, 0xe0, 0x30, 0x4e, 0x45, 0x49, 0x68,
		0x65, 0x37, 0x44, 0x94, 0x65, 0xd8, 0xd5, 0x8a, 0x5b, 0x43, 0x18, 0x91, 0x05, 0xca, 0xb1, 0x4e, 0xc8, 0x6b, 0xf7, 0xe5, 0x2c, 0x81, 0xc4, 0x05,
		0xce, 0x4f, 0x36, 0xe2, 0x72, 0x77, 0x9e, 0x26, 0x6d, 0xac, 0x6d, 0x3f, 0x44, 0xe0, 0x1c, 0x3e, 0x22, 0xaf, 0x40, 0x98, 0xf9, 0x4f, 0xca, 0x18,
		0xbb, 0xb3, 0x49, 0x3f, 0x48, 0x96, 0xc1, 0x35, 0x58, 0xc0, 0x70, 0x4c, 0x01, 0x07, 0xd4, 0xdf, 0x56, 0x84, 0x6b, 0xbb, 0xcf, 0x1b, 0x37, 0x89,
		0x20, 0x45, 0x36, 0x0b, 0x83, 0x41, 0xd2, 0xca, 0x5e, 0x7c, 0x52, 0x6f, 0x3d, 0x9b, 0xac, 0x6c, 0xb0, 0xed, 0x84, 0x2d, 0xe2, 0xe2, 0xb3, 0xa0,
		0x94, 0x38, 0x64, 0xc9, 0x6d, 0xaa, 0x9a, 0xe9, 0xf5, 0xcb, 0x7c, 0x87, 0x02, 0x90, 0x58, 0x90, 0xe4, 0x66, 0xf2, 0xef, 0xb7, 0x78, 0xe3, 0x06,
		0x52, 0x0f, 0x75};

const uint8_t dq3[] = {0x6d, 0x66, 0x64, 0x41, 0x2e, 0xe6, 0x3b, 0x74, 0x7a, 0x1a, 0x02, 0xe9, 0x39, 0xc1, 0x31, 0xa2, 0x7c, 0xe6, 0x2a, 0x27, 0x46,
		0xd5, 0x42, 0x1c, 0x0e, 0xd9, 0x1a, 0x5f, 0x70, 0xe9, 0x5e, 0x66, 0xc9, 0x24, 0xa2, 0x67, 0xc8, 0x3c, 0x9f, 0x8e, 0xf5, 0x7a, 0xc7, 0xf6, 0xba,
		0x94, 0xde, 0x4d, 0xaa, 0x6d, 0x39, 0x26, 0x4b, 0x58, 0x55, 0x8d, 0xa4, 0x0f, 0x74, 0x3b, 0x56, 0x5a, 0xa9, 0xb2, 0xd3, 0xba, 0x44, 0x49, 0xb4,
		0xa8, 0xfe, 0x84, 0x90, 0x07, 0x3f, 0x64, 0x46, 0x4d, 0xac, 0x75, 0x58, 0x83, 0x6d, 0xf1, 0x8b, 0x34, 0xee, 0xa5, 0xe8, 0x0d, 0x9c, 0x79, 0xd5,
		0xad, 0x74, 0x75, 0xfc, 0xd1, 0xe5, 0xc6, 0xb4, 0xfc, 0x71, 0x1c, 0x9e, 0x4b, 0xb5, 0xca, 0xa7, 0x61, 0x14, 0x46, 0x52, 0x15, 0x05, 0x8e, 0xbc,
		0x9f, 0x55, 0xbe, 0x2a, 0xd4, 0x88, 0x42, 0xec, 0xe3, 0x50, 0xd7, 0xd3, 0x73, 0x2a, 0x56, 0xea, 0x07, 0x35, 0x86, 0x63, 0x34, 0x03, 0x9a, 0x50,
		0xf8, 0xac, 0x46, 0xe9, 0x12, 0xe8, 0xd9, 0xc0, 0x8f, 0x1b, 0x05, 0x45, 0x62, 0x87, 0x81, 0xaf, 0xb1, 0x7b, 0x2c, 0x0f, 0x90, 0x54, 0xb6, 0x99,
		0x0a, 0xc7, 0xdf, 0x42, 0x37, 0x11, 0x03, 0x1d, 0x7e, 0x5c, 0x6e, 0x5b, 0x34, 0xef, 0xf7, 0x97, 0x56, 0x31, 0x16, 0xf0, 0x9f, 0xee, 0x09, 0x43,
		0xda, 0x88, 0x19};

const uint8_t qinv3[] = {0x63, 0x81, 0x1d, 0x10, 0x9c, 0xee, 0xf8, 0xdd, 0xa1, 0x11, 0xd2, 0xc1, 0x5e, 0x59, 0xbf, 0xd3, 0xe7, 0xb6, 0xa5, 0xa7, 0x2d,
		0x5c, 0x29, 0x50, 0x1c, 0x84, 0x03, 0xdd, 0x87, 0xfe, 0xf4, 0xb7, 0x59, 0x7d, 0xb7, 0xc7, 0x15, 0xc5, 0xaa, 0xe3, 0x32, 0x49, 0xbe, 0x38, 0x99,
		0x5a, 0xa5, 0xe4, 0xd5, 0xc2, 0xfc, 0x73, 0x72, 0xbb, 0x15, 0xfc, 0xf6, 0xf5, 0x4c, 0x97, 0xfd, 0x8f, 0xed, 0x99, 0xfd, 0xe7, 0xc3, 0x8a, 0x6c,
		0xbc, 0xec, 0x82, 0xbf, 0x98, 0xf8, 0xe3, 0xdf, 0x44, 0x59, 0xda, 0x4e, 0x76, 0xa6, 0xbc, 0x5b, 0xb6, 0x57, 0xba, 0x8c, 0xf0, 0x65, 0x1e, 0xb5,
		0x7b, 0x54, 0x21, 0x01, 0xee, 0x01, 0x20, 0xbb, 0xaa, 0xef, 0xd4, 0xb6, 0x88, 0xb5, 0xca, 0x55, 0x26, 0x55, 0x89, 0xd2, 0x8d, 0x1f, 0x44, 0xe0,
		0x32, 0xc8, 0x3d, 0x8a, 0xf2, 0x07, 0xba, 0x9e, 0x4b, 0xeb, 0x03, 0x15, 0xb1, 0x35, 0x27, 0xac, 0xed, 0x65, 0x12, 0xc2, 0x66, 0x0b, 0xf9, 0x80,
		0x46, 0x19, 0xd3, 0x28, 0x0c, 0x2a, 0xa7, 0x2c, 0xfa, 0x7e, 0x8f, 0x0a, 0x88, 0xda, 0x30, 0x94, 0xd2, 0xc5, 0x86, 0xd5, 0xae, 0x3a, 0x43, 0x86,
		0xbb, 0x5d, 0x15, 0x84, 0xfd, 0x84, 0x7c, 0x1b, 0x92, 0x71, 0x09, 0xd9, 0xa1, 0x5e, 0x60, 0x91, 0xb1, 0xeb, 0x04, 0x05, 0xf5, 0xc7, 0xf7, 0x61,
		0x46, 0xff, 0x05};


//-------------------RSA---4086--------------------------------------------------------

const uint8_t n4[] = {0x32, 0xc9, 0x4f, 0x3c, 0x04, 0x64, 0x1f, 0x00, 0xcb, 0xe3, 0xb8, 0x7c, 0xcd, 0xd1, 0x94, 0x7a, 0x3e, 0x5d, 0xab, 0x2a,
		0x17, 0x3a, 0x88, 0xf8, 0xf0, 0xbc, 0x20, 0x8d, 0xc9, 0x3a, 0x39, 0xcb, 0xe9, 0x18, 0x3e, 0x8e, 0xbf, 0x90, 0x73, 0xb8, 0xc6, 0xe7, 0x1e,
		0x74, 0xc7, 0xc8, 0x4b, 0x7a, 0xa1, 0x80, 0xd1, 0xcb, 0x89, 0x0d, 0x49, 0x74, 0x47, 0x83, 0xee, 0x92, 0xcc, 0x83, 0x6f, 0x97, 0x6c, 0x4c,
		0x97, 0x2f, 0x42, 0x0c, 0x97, 0x10, 0x95, 0xe3, 0x8f, 0x79, 0x34, 0x0d, 0xe1, 0x39, 0xc1, 0xcb, 0xed, 0xe8, 0x50, 0x2a, 0x5c, 0xe4, 0xbd,
		0x77, 0x32, 0x70, 0x9a, 0x85, 0xa3, 0xbe, 0x4d, 0x35, 0x3d, 0x9f, 0x32, 0x7b, 0x49, 0xbe, 0x87, 0xa2, 0x7c, 0xfe, 0x72, 0x72, 0x9e, 0xc4,
		0x61, 0xae, 0xc3, 0x89, 0xb8, 0x60, 0xfb, 0xef, 0x53, 0x61, 0x90, 0x6c, 0x2e, 0x1f, 0x11, 0x6f, 0xac, 0x00, 0x29, 0xea, 0xbb, 0x55, 0xf9,
		0xd6, 0xdd, 0xbc, 0x15, 0xd6, 0x03, 0xab, 0x0b, 0x95, 0xf6, 0x45, 0x8f, 0xf6, 0xb0, 0x5d, 0xbd, 0x96, 0xb4, 0xb0, 0xce, 0x32, 0xfc, 0x7e,
		0xb4, 0x70, 0x9d, 0x24, 0x91, 0xf2, 0xd2, 0x0d, 0x4b, 0x0a, 0xfb, 0x1e, 0x2d, 0xaa, 0x2b, 0x6b, 0x35, 0x3f, 0xba, 0x54, 0xe0, 0x17, 0x71,
		0x06, 0x70, 0x4c, 0xa2, 0x5f, 0xcf, 0xb6, 0x82, 0xd1, 0xb1, 0x6e, 0x8a, 0xe7, 0x5b, 0x5f, 0x9c, 0x89, 0xcf, 0x24, 0xe6, 0xf4, 0x83, 0xa6,
		0x83, 0x4b, 0x74, 0x0c, 0x17, 0x63, 0x61, 0x44, 0x32, 0xf6, 0xca, 0x66, 0x9d, 0xff, 0xb9, 0x1f, 0x5b, 0x84, 0xda, 0xb0, 0x2e, 0x29, 0xfb,
		0x8f, 0x13, 0x52, 0x9b, 0x3b, 0xb7, 0x6d, 0xce, 0x5c, 0x7a, 0x32, 0xa0, 0xce, 0xf1, 0xc5, 0x5c, 0x6f, 0x62, 0x67, 0x1b, 0x05, 0xdc, 0x5c,
		0x0b, 0x0e, 0x93, 0x6f, 0x15, 0x7d, 0x02, 0xb9, 0xfb, 0x77, 0xb7, 0x6b, 0xe2, 0x94, 0x9b, 0xc3, 0xca, 0xd3, 0x9d, 0x04, 0x38, 0x2d, 0x73,
		0xd9, 0x52, 0xc1, 0x42, 0x30, 0x64, 0xcc, 0x03, 0x21, 0x26, 0xa2, 0xdb, 0x8d, 0x2f, 0x9c, 0x3c, 0x41, 0x71, 0x3a, 0x6f, 0xe9, 0x3e, 0x1c,
		0xab, 0x3c, 0x1e, 0xe1, 0x86, 0x75, 0xb3, 0x8b, 0x35, 0x28, 0x11, 0x52, 0x60, 0x0d, 0x09, 0x72, 0xea, 0xc7, 0xc5, 0xb2, 0x8a, 0x39, 0x09,
		0xb1, 0xba, 0xa7, 0x09, 0x52, 0x9f, 0x7f, 0x21, 0x37, 0x4a, 0x35, 0x60, 0xf3, 0xb0, 0xd5, 0xd0, 0x64, 0x1e, 0x54, 0x0a, 0xc1, 0x8c, 0x56,
		0x6e, 0x77, 0x3a, 0x0d, 0xa9, 0x5e, 0xcf, 0x0b, 0x48, 0x4c, 0x94, 0x1b, 0x83, 0x9d, 0x37, 0xee, 0x36, 0x3c, 0x33, 0x2e, 0xab, 0xa2, 0x75,
		0x0b, 0xd5, 0xf7, 0xe5, 0xbe, 0x48, 0x5c, 0x54, 0xbf, 0xdb, 0xc9, 0xa0, 0xe6, 0x0d, 0x80, 0x31, 0x04, 0x47, 0x8e, 0x9a, 0xc8, 0xd2, 0xb8,
		0xc8, 0x77, 0xe2, 0x9b, 0x85, 0xff, 0x68, 0x70, 0x87, 0x93, 0x45, 0xe5, 0xf3, 0x8a, 0xc3, 0x94, 0x9d, 0x14, 0x5f, 0xcc, 0x8f, 0x78, 0xad,
		0x14, 0x00, 0x53, 0xa9, 0xe4, 0x57, 0xfb, 0x44, 0xc0, 0xeb, 0xd8, 0xaf, 0x9b, 0xb3, 0x27, 0xcb, 0xd0, 0xf5, 0x6c, 0x02, 0xa3, 0xb5, 0xdf,
		0xd8, 0x16, 0xd3, 0x3f, 0x14, 0xb8, 0xa4, 0x71, 0x92, 0x34, 0x9f, 0xaf, 0x44, 0x15, 0xca, 0x06, 0xeb, 0xb6, 0x9d, 0xf8, 0x13, 0x6d, 0x55,
		0xa6, 0x6b, 0xee, 0x89, 0x5d, 0xaf, 0x5b, 0x3b, 0x98, 0xc5, 0xc3, 0x20, 0xe4, 0x3e, 0xc1, 0x4a, 0x7a, 0x38, 0xa1, 0x5d, 0x51, 0x8f, 0xb9,
		0x5b, 0x95, 0x8f, 0x5d, 0xaa, 0xdc, 0xdc, 0x7c, 0xbd, 0x35, 0x72, 0xa9, 0x01, 0x78, 0xcf, 0x1d, 0xf5, 0x38, 0x4f, 0x22, 0x58, 0xbd, 0x28,
		0x0e, 0x4d, 0xc2, 0x1d, 0xf2, 0x43, 0xdf, 0x65};

const uint8_t d4[] = {0x01, 0x55, 0xbe, 0xa4, 0xc5, 0x38, 0xc7, 0x2d, 0x2e, 0x2e, 0xd3, 0x85, 0x49, 0xa3, 0xb3, 0x53, 0x6d, 0xf0, 0x3d, 0xb4, 0xe2,
		0xdc, 0xc1, 0xb2, 0x49, 0x76, 0xfd, 0xce, 0xbc, 0x4b, 0x5b, 0x84, 0x3b, 0x4c, 0x4d, 0x2d, 0xfe, 0x10, 0x68, 0xa4, 0xf8, 0x15, 0x7b, 0x27, 0x76,
		0xae, 0x3d, 0x23, 0x01, 0x66, 0x71, 0x72, 0xa2, 0xd7, 0x9b, 0xe6, 0xad, 0x3a, 0x8f, 0xe5, 0x81, 0x45, 0x5d, 0xd9, 0x8d, 0x19, 0xe0, 0xf4, 0xcd,
		0x0c, 0xfd, 0x00, 0xe2, 0x9a, 0x68, 0xb0, 0x61, 0x93, 0x3b, 0xd3, 0x03, 0x7f, 0xbe, 0x1b, 0xd7, 0xd4, 0xef, 0xe6, 0xd3, 0x54, 0x1e, 0xc4, 0xa1,
		0xa0, 0x81, 0xa8, 0x04, 0x3f, 0x87, 0x59, 0xcd, 0x3f, 0x3b, 0x0b, 0xac, 0x65, 0x09, 0x04, 0x11, 0xde, 0x11, 0x6e, 0x4d, 0x63, 0x05, 0x4b, 0x74,
		0x1d, 0x43, 0x2c, 0xb7, 0x49, 0xb3, 0xe7, 0x79, 0x64, 0x37, 0xab, 0xc7, 0xc9, 0xa3, 0xfb, 0x17, 0x91, 0x85, 0xa5, 0x05, 0x8f, 0x11, 0x6e, 0x89,
		0x5f, 0x7a, 0xf3, 0xd0, 0xd5, 0x63, 0x43, 0x5e, 0x14, 0xc3, 0x61, 0xad, 0x68, 0xe3, 0x02, 0xa9, 0x6b, 0x15, 0xdd, 0xca, 0x98, 0xfb, 0x7d, 0x21,
		0x28, 0x58, 0x4b, 0x4c, 0x43, 0xd9, 0x7a, 0x1a, 0x4a, 0x11, 0xcc, 0x40, 0x5e, 0xf0, 0x1a, 0x58, 0x4e, 0x38, 0x5a, 0xcb, 0x54, 0x84, 0x11, 0x38,
		0x14, 0x6a, 0xfa, 0xe2, 0x36, 0x7d, 0x4b, 0x0b, 0x6c, 0xfe, 0x94, 0xe9, 0xbd, 0x38, 0xf8, 0xac, 0xda, 0xd4, 0x37, 0x67, 0xd0, 0xa4, 0xed, 0xe0,
		0xa9, 0x11, 0x5e, 0x41, 0x28, 0xf2, 0x4f, 0x70, 0xb3, 0x12, 0xa1, 0xd9, 0x94, 0xcb, 0x97, 0xfc, 0x84, 0xb4, 0xaf, 0xe2, 0x7d, 0x1b, 0x14, 0xdd,
		0xe1, 0x6c, 0x23, 0x59, 0xc2, 0x3b, 0xa6, 0x71, 0xdf, 0xb9, 0x46, 0x1e, 0x2a, 0x0d, 0x35, 0xaf, 0x8a, 0x6b, 0xf5, 0xcd, 0x40, 0x28, 0xc1, 0xa8,
		0x19, 0x29, 0x22, 0x70, 0x0b, 0xe4, 0x13, 0x55, 0xf7, 0x59, 0x57, 0x8a, 0xbb, 0x33, 0x7f, 0x7c, 0x85, 0xdb, 0xfb, 0x9a, 0xc7, 0xb5, 0x8b, 0x60,
		0x8b, 0x7f, 0x90, 0xfe, 0x4d, 0xe1, 0x12, 0x68, 0x61, 0x2c, 0x23, 0xe5, 0x5e, 0xfb, 0x84, 0x80, 0x2f, 0x73, 0x44, 0x2e, 0x79, 0x1f, 0x0b, 0x92,
		0xf9, 0xac, 0x31, 0x77, 0x8c, 0x4b, 0x64, 0xab, 0x05, 0xb6, 0x58, 0xc2, 0xd2, 0x14, 0x2f, 0x1c, 0xff, 0x50, 0x70, 0x96, 0xba, 0x5a, 0x6d, 0x8e,
		0x2a, 0x36, 0x03, 0xdc, 0x8d, 0x88, 0x32, 0x91, 0x4b, 0x29, 0xb5, 0x10, 0xc2, 0x0b, 0x91, 0x6e, 0x38, 0x5c, 0x31, 0x37, 0xe1, 0x22, 0x06, 0x03,
		0xc9, 0x52, 0x8d, 0x51, 0x58, 0xb2, 0x20, 0xe4, 0xc8, 0x1a, 0xcc, 0xfe, 0x78, 0xf1, 0x22, 0x8b, 0x91, 0xf0, 0x19, 0x82, 0x4d, 0x23, 0xa2, 0x1f,
		0x7f, 0x16, 0x5d, 0xdc, 0x1f, 0x64, 0xc2, 0xf6, 0xf8, 0x31, 0x72, 0xac, 0xae, 0x71, 0xe0, 0xad, 0x06, 0xe4, 0x02, 0x24, 0xed, 0x13, 0xfb, 0x65,
		0xda, 0x2a, 0x8b, 0x10, 0xd4, 0x68, 0x51, 0xe7, 0x9e, 0x82, 0x9d, 0x74, 0x9c, 0x3a, 0x5f, 0x3b, 0xd1, 0x8f, 0x36, 0xa8, 0x8f, 0x98, 0x5c, 0xc1,
		0x23, 0xc8, 0x46, 0xf0, 0x91, 0x80, 0x9f, 0xbf, 0x02, 0xb9, 0xc6, 0xf9, 0x31, 0x39, 0x49, 0x3e, 0x32, 0x83, 0x9f, 0xd8, 0x84, 0xb3, 0x5a, 0x1c,
		0x57, 0xde, 0x38, 0x83, 0x01, 0xc6, 0x57, 0x71, 0x1f, 0x09, 0x46, 0x0a, 0x9c, 0xb0, 0x40, 0x44, 0x32, 0xdc, 0x60, 0xc1, 0xd5, 0x05, 0xbe, 0x29,
		0xe7, 0x4d, 0xa5, 0xfa, 0xcd, 0x57, 0x01, 0xb5, 0x5a, 0xcd, 0x51, 0xd6, 0x39, 0x24, 0x12, 0xa8, 0xa3, 0xd0, 0xb2, 0x13, 0x71, 0x0e, 0x03, 0xb9,
		0x50, 0x14, 0xb2, 0xde, 0xa9, 0x7a, 0x7c, 0xd6, 0x28, 0x01};

const uint8_t p4[] = {0x07, 0x74, 0x11, 0xeb, 0xd5, 0xf0, 0x53, 0x11, 0x81, 0xea, 0x0d, 0xfe, 0xcf, 0x29, 0xdf, 0xa9, 0xd4, 0x05, 0xab, 0x4a, 0x6c,
		0xc1, 0xdb, 0x2b, 0x64, 0x83, 0x56, 0xd0, 0xfa, 0x94, 0xbf, 0xbe, 0x37, 0x3f, 0x6f, 0xc4, 0x86, 0x65, 0x13, 0xbb, 0x37, 0x6d, 0x56, 0x3e, 0xc0,
		0x9a, 0xae, 0x0c, 0x4c, 0x1b, 0x55, 0x80, 0xec, 0xd8, 0x99, 0x6b, 0xa4, 0x7a, 0x16, 0x13, 0xf8, 0xf8, 0x8a, 0x32, 0xd0, 0xa6, 0x33, 0x47, 0x17,
		0x0b, 0x03, 0xec, 0x07, 0xb9, 0x24, 0xf2, 0x8b, 0x79, 0xbe, 0xef, 0x6d, 0x73, 0xef, 0xe7, 0xb8, 0x5c, 0xed, 0xac, 0x4e, 0xf4, 0xc5, 0x2d, 0x78,
		0xdf, 0x3d, 0xec, 0x41, 0x78, 0x5e, 0x08, 0x02, 0x97, 0x68, 0x05, 0x70, 0xf4, 0xc8, 0xeb, 0xd1, 0x38, 0x5e, 0xdd, 0xf7, 0x50, 0x2f, 0xff, 0x43,
		0x1e, 0x17, 0xf5, 0x99, 0xa9, 0x2a, 0x40, 0xca, 0x37, 0xa6, 0x13, 0x22, 0xa5, 0xf1, 0x2c, 0x26, 0xb5, 0xe8, 0x8a, 0xf3, 0x41, 0x88, 0x4c, 0x2f,
		0x72, 0x4f, 0xea, 0x27, 0xf8, 0xf9, 0xef, 0x41, 0xf4, 0x58, 0x20, 0xd3, 0x3f, 0xb8, 0x1b, 0x6d, 0x95, 0x7e, 0x1a, 0xc3, 0x0f, 0x08, 0xe9, 0xac,
		0xfc, 0xbd, 0xde, 0x3f, 0x18, 0x42, 0x8e, 0xcb, 0xab, 0x78, 0xb5, 0xdf, 0xfe, 0x5b, 0x62, 0x90, 0xe8, 0x06, 0x2a, 0xd3, 0xc7, 0x86, 0xe0, 0x88,
		0x75, 0x7c, 0xc2, 0x97, 0xd9, 0xf1, 0x57, 0x00, 0x7c, 0x0e, 0xa2, 0xf4, 0x96, 0x30, 0x67, 0xa6, 0xd9, 0x7c, 0xb8, 0x57, 0x37, 0x6e, 0x40, 0x67,
		0x48, 0x85, 0x24, 0x9a, 0x0a, 0xfa, 0xe1, 0x42, 0xce, 0x49, 0x99, 0x0a, 0x31, 0xe1, 0x64, 0x1e, 0xe3, 0x6b, 0xd1, 0x74, 0xaf, 0x98, 0x97, 0x31,
		0xd4, 0x24, 0x43, 0x54, 0x30, 0xb4, 0x10, 0x03, 0x1c, 0x03, 0xdd, 0x7d, 0x58, 0x7b, 0x31, 0x12, 0xc4, 0xca, 0xa1};

const uint8_t q4[] = {0x06, 0xd0, 0x58, 0xb4, 0x37, 0x72, 0x45, 0x04, 0x73, 0x9b, 0xc4, 0x3e, 0x43, 0x27, 0xd8, 0x92, 0x7a, 0x1c, 0xee, 0x18, 0xf8,
		0x8f, 0x63, 0xcf, 0xc6, 0x65, 0x24, 0xa3, 0xa9, 0xbf, 0xd6, 0x25, 0x09, 0x5d, 0xae, 0x1a, 0x09, 0x07, 0x21, 0xb8, 0x09, 0x79, 0xb4, 0x9a, 0xa8,
		0x4b, 0xe2, 0xe1, 0x5b, 0x5f, 0xf8, 0x2f, 0x01, 0x5d, 0x75, 0x53, 0x3c, 0x0d, 0x29, 0xba, 0x4c, 0xd3, 0x82, 0x40, 0x84, 0x92, 0x71, 0xec, 0xda,
		0xb6, 0x00, 0xbd, 0x85, 0xaf, 0x24, 0x12, 0xe0, 0xfe, 0x74, 0x92, 0xc9, 0x1b, 0x85, 0x82, 0xec, 0x08, 0xe9, 0x1a, 0xe4, 0x23, 0xbb, 0x28, 0xf4,
		0x55, 0x61, 0x9b, 0x9c, 0x56, 0x0a, 0x79, 0xbf, 0xce, 0x97, 0x7a, 0x4f, 0x06, 0x06, 0x1f, 0xe0, 0xda, 0xa5, 0x1a, 0xe9, 0x03, 0xa2, 0x28, 0x7b,
		0x30, 0x71, 0x10, 0x13, 0xde, 0xf7, 0xf2, 0x12, 0x3d, 0x59, 0x5e, 0xe1, 0xad, 0xeb, 0x55, 0x60, 0xc6, 0x66, 0x76, 0x89, 0xa2, 0x9d, 0x5e, 0x2b,
		0x0d, 0xcc, 0x51, 0xae, 0x62, 0x82, 0x08, 0x2a, 0x5c, 0x9d, 0x46, 0xea, 0x25, 0xd3, 0x06, 0x03, 0x28, 0x32, 0x5a, 0xa0, 0x9b, 0x85, 0x21, 0xe5,
		0x0b, 0x84, 0xf7, 0xc4, 0xdc, 0x8a, 0xbf, 0x8b, 0x67, 0xfc, 0xff, 0x15, 0x9f, 0x47, 0x41, 0x07, 0x29, 0x77, 0xce, 0x4c, 0x3f, 0x8f, 0xf9, 0x08,
		0x93, 0x72, 0x6e, 0xe9, 0x82, 0x08, 0xb8, 0x8d, 0xc1, 0xb7, 0x85, 0xd0, 0x8a, 0x6a, 0x52, 0xf5, 0xbc, 0x63, 0xc7, 0x7f, 0xdf, 0x4d, 0x5d, 0x63,
		0xe6, 0xf7, 0x30, 0x99, 0xa4, 0xe1, 0x49, 0x6c, 0x15, 0xbf, 0x82, 0x94, 0x8b, 0x7d, 0x36, 0x7b, 0x8e, 0x1a, 0x41, 0x6c, 0xf9, 0xc0, 0x93, 0xf7,
		0x44, 0xf0, 0x16, 0x67, 0xaa, 0xb0, 0x6a, 0x00, 0xd2, 0xbf, 0x22, 0x7f, 0xd0, 0x91, 0xa6, 0xfb, 0x24, 0x02, 0x45};

const uint8_t dp4[] = {0x05, 0xae, 0x8e, 0x1a, 0xe2, 0xb4, 0x9a, 0x1e, 0xb6, 0x92, 0xde, 0xa8, 0x68, 0xf4, 0xda, 0xf4, 0x74, 0x14, 0xfe, 0x47, 0x76,
		0x31, 0x32, 0x0b, 0x1a, 0x4c, 0xa5, 0x5a, 0x1a, 0x2c, 0x5b, 0x1f, 0x7e, 0xae, 0x75, 0x5d, 0xb3, 0xb6, 0x4a, 0x1c, 0x66, 0x5c, 0x8b, 0x6a, 0xbb,
		0x19, 0x2f, 0xa5, 0x60, 0x3f, 0x56, 0x27, 0x3a, 0x66, 0xc4, 0x4e, 0x32, 0xcc, 0x7f, 0x18, 0x2a, 0xac, 0x0d, 0x6e, 0x3f, 0x70, 0xf3, 0x96, 0x36,
		0x12, 0xc7, 0xa2, 0x9f, 0x20, 0x9c, 0xf1, 0xe9, 0x31, 0x9e, 0x44, 0x97, 0x83, 0xd2, 0x57, 0x2b, 0x4c, 0x6c, 0x42, 0xf6, 0xcd, 0xd1, 0xa2, 0xa0,
		0x8a, 0x4e, 0x82, 0x54, 0x46, 0x96, 0x28, 0x35, 0x11, 0x86, 0xd2, 0xdf, 0x11, 0x3c, 0x39, 0xc8, 0xfc, 0xd8, 0x15, 0x0d, 0xfb, 0xab, 0x1b, 0x44,
		0xe7, 0x24, 0x0c, 0xae, 0x5f, 0x2f, 0x3e, 0xc4, 0xe9, 0x37, 0x49, 0x4f, 0x18, 0x81, 0x89, 0xce, 0xd8, 0xcd, 0xb5, 0x5f, 0x4b, 0x8d, 0xc3, 0xc6,
		0x47, 0xb6, 0x74, 0x22, 0x94, 0xc2, 0xb3, 0x89, 0xeb, 0xe3, 0x62, 0xe2, 0xa7, 0xa8, 0x8a, 0x00, 0x37, 0xfe, 0x32, 0x18, 0x90, 0xd5, 0x92, 0x8d,
		0xb4, 0xfe, 0x68, 0xf6, 0x60, 0x60, 0x1c, 0xcb, 0x56, 0xa4, 0x66, 0xc1, 0xa2, 0xfd, 0xb7, 0x5e, 0x10, 0x02, 0xe3, 0x93, 0x1e, 0x7f, 0xcb, 0x9b,
		0x3b, 0x35, 0x28, 0x82, 0xea, 0x39, 0xf8, 0xc0, 0xfd, 0xd1, 0x8a, 0x98, 0x3a, 0x06, 0x1c, 0x7e, 0x2d, 0x3d, 0xce, 0xa9, 0x6e, 0x30, 0x36, 0x18,
		0x86, 0x48, 0x39, 0x66, 0xd5, 0x07, 0xfb, 0xc1, 0x19, 0xd1, 0x31, 0x41, 0x7c, 0x54, 0xfe, 0x26, 0x2d, 0xe8, 0x7b, 0x7c, 0x20, 0x80, 0x8a, 0x82,
		0x09, 0xde, 0xbb, 0x14, 0xeb, 0x2b, 0xd9, 0x29, 0x05, 0xaa, 0x4c, 0xa6, 0xc9, 0x54, 0xe0, 0x4c, 0x16, 0x89, 0x01};

const uint8_t dq4[] = {0x02, 0xdf, 0x5a, 0x45, 0xbf, 0x0a, 0x21, 0x26, 0x5b, 0x46, 0x53, 0x58, 0x9c, 0x1e, 0xf4, 0x21, 0xeb, 0xf0, 0xbe, 0x3f, 0x30,
		0xa9, 0xe2, 0x3d, 0xf9, 0x39, 0x32, 0x54, 0xfc, 0x7e, 0xae, 0xdc, 0x36, 0x32, 0x93, 0xee, 0xcd, 0xd7, 0x7f, 0xd3, 0x81, 0xcb, 0x18, 0xe4, 0x0a,
		0x06, 0xd3, 0xc2, 0x85, 0x2e, 0xd4, 0x05, 0x9c, 0xe1, 0xb5, 0x50, 0x3d, 0x84, 0x9f, 0x0e, 0xb6, 0xcc, 0x83, 0xa0, 0x87, 0x42, 0xe5, 0x5c, 0x20,
		0x67, 0x91, 0xb0, 0x53, 0xe7, 0x1d, 0xa2, 0x07, 0xcf, 0xbd, 0x7d, 0x13, 0xe2, 0xd2, 0x49, 0xfb, 0x0f, 0x56, 0x95, 0xcb, 0x8f, 0x74, 0x9b, 0x33,
		0x45, 0xbb, 0x3c, 0x4a, 0x8f, 0xcb, 0x22, 0xc0, 0x45, 0x6b, 0x7e, 0x58, 0x4a, 0x05, 0xd2, 0xf2, 0x8b, 0xba, 0x06, 0xba, 0x2c, 0x99, 0xf3, 0xce,
		0xdb, 0x01, 0x0e, 0xf2, 0x11, 0x91, 0x1d, 0x2f, 0xab, 0x45, 0x3d, 0xc6, 0x8d, 0xf7, 0x23, 0xab, 0x04, 0x78, 0xb5, 0x88, 0x18, 0x51, 0x97, 0x1d,
		0x37, 0x57, 0xe7, 0x27, 0x48, 0xc7, 0xe0, 0x81, 0x5b, 0x41, 0xc2, 0x5f, 0x7b, 0x4a, 0x96, 0xc2, 0x45, 0xf3, 0xd4, 0x58, 0xd8, 0xb7, 0x2b, 0x2e,
		0xcf, 0xc8, 0x62, 0x5b, 0x4f, 0x4d, 0xfe, 0xa9, 0xda, 0x50, 0xc1, 0x88, 0x6f, 0xf9, 0x2d, 0xe4, 0xc3, 0x0a, 0x8a, 0xa1, 0x82, 0x3a, 0x43, 0x95,
		0xe5, 0xf2, 0xdb, 0xe6, 0xfc, 0xb6, 0x88, 0x76, 0xda, 0x2f, 0x6f, 0xee, 0x16, 0x2b, 0xf4, 0x85, 0x3b, 0xc2, 0x24, 0x9c, 0x37, 0x9a, 0xf9, 0xbf,
		0xdf, 0xe2, 0x5d, 0x4e, 0xa8, 0x3f, 0x81, 0x20, 0x5b, 0x9a, 0xbc, 0x85, 0xba, 0xb8, 0x32, 0x7b, 0xab, 0xd0, 0x4d, 0xbc, 0x8f, 0x1d, 0x2c, 0x43,
		0x95, 0x80, 0x51, 0x31, 0xaa, 0xb7, 0x6c, 0x38, 0xa4, 0x9f, 0x86, 0xff, 0xb3, 0x01, 0x74, 0x0f, 0x73, 0x82, 0xb1};

const uint8_t qinv4[] = {0x02, 0xcf, 0x7f, 0x53, 0x9c, 0x7f, 0xed, 0xfc, 0xae, 0xce, 0xdd, 0xb0, 0x24, 0xa2, 0x7e, 0x41, 0xca, 0x63, 0x67, 0x58, 0xee,
		0x9d, 0xea, 0xf0, 0x1c, 0xaf, 0xef, 0x01, 0xce, 0x40, 0x07, 0x03, 0xf2, 0x9e, 0x88, 0x1f, 0x37, 0xdf, 0xa3, 0x5f, 0x5e, 0x9a, 0x08, 0x06, 0xdc,
		0x2f, 0xfc, 0xbb, 0x5e, 0xf2, 0x0a, 0xde, 0xf3, 0x09, 0x0a, 0xbe, 0xf2, 0xb4, 0x84, 0xc5, 0xd1, 0x4e, 0xa9, 0x83, 0x25, 0x4a, 0xe5, 0x4c, 0xc8,
		0x2a, 0x12, 0x2f, 0x4b, 0x60, 0x73, 0x29, 0x4e, 0xa9, 0xa6, 0xd6, 0x38, 0x36, 0x84, 0xf7, 0xcb, 0x27, 0xd5, 0xdb, 0x5e, 0xc1, 0x39, 0x78, 0x3a,
		0x06, 0xc0, 0xcb, 0x75, 0xd8, 0x6d, 0x11, 0x3d, 0x70, 0x9d, 0x8f, 0x71, 0x6e, 0x69, 0x61, 0x47, 0xb0, 0x1b, 0xbc, 0x3c, 0xea, 0xea, 0xc9, 0x00,
		0x34, 0xca, 0xe1, 0x97, 0xcf, 0x9d, 0x6e, 0x8b, 0x54, 0x57, 0xcf, 0x26, 0xd4, 0x39, 0x3b, 0x70, 0xc0, 0x7d, 0x6a, 0x52, 0x85, 0x75, 0x3d, 0x1d,
		0x35, 0x2c, 0xaa, 0x95, 0xea, 0xb4, 0x1a, 0xb9, 0xfe, 0x91, 0xfe, 0x88, 0x6e, 0xee, 0x5e, 0xcd, 0xbd, 0x7a, 0x32, 0x3d, 0xf7, 0x28, 0xe0, 0x0d,
		0xfb, 0xeb, 0x71, 0xae, 0x10, 0x09, 0x26, 0xbd, 0x2f, 0xbe, 0xce, 0xc5, 0x34, 0xb2, 0x7a, 0xd6, 0x27, 0x43, 0x8a, 0x96, 0x96, 0x23, 0x51, 0xf6,
		0xfa, 0x7c, 0xf3, 0x67, 0x36, 0x86, 0xbb, 0xa5, 0x15, 0x8a, 0x02, 0x5f, 0x59, 0x43, 0x75, 0x85, 0xe7, 0xdb, 0xd4, 0xe5, 0xa4, 0x52, 0x58, 0x88,
		0xd9, 0xf3, 0x16, 0x41, 0x93, 0x5a, 0xd4, 0xa5, 0x6f, 0xe3, 0x74, 0xb7, 0xa6, 0xbc, 0x7c, 0xe1, 0xaa, 0x8d, 0x09, 0x31, 0xa1, 0x76, 0x5e, 0x5c,
		0xb6, 0x8d, 0x97, 0x06, 0x59, 0x84, 0x5f, 0x94, 0x22, 0x58, 0x4b, 0x88, 0x7f, 0x5b, 0x98, 0x17, 0x38, 0xb6, 0x51};
#endif /* INC_ASYMMETRIC_ASYM_KEYS_H_ */