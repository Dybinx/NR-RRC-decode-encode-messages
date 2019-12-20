/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * ciphering_algorithm.h - this is the header file for message: CipheringAlgorithm
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#ifndef _CIPHERING_ALGORITHM_H_
#define _CIPHERING_ALGORITHM_H_

#include "types.h"
#include "contants.h" 				
#include "handle_bits.h"


typedef enum {
	CIPHERINGALGORITHM_NEA0,
	CIPHERINGALGORITHM_NEA1,
	CIPHERINGALGORITHM_NEA2,
	CIPHERINGALGORITHM_NEA3,
	CIPHERINGALGORITHM_SPARE4,
	CIPHERINGALGORITHM_SPARE3,
	CIPHERINGALGORITHM_SPARE2,
	CIPHERINGALGORITHM_SPARE1,
	/* Extension marker start. */
	CIPHERINGALGORITHM_max = 0x7FFFFFFF
}CipheringAlgorithm_e;


extern void EncodeCipheringAlgorithm(
	CipheringAlgorithm_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);
extern void DecodeCipheringAlgorithm(
	CipheringAlgorithm_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);

#endif
