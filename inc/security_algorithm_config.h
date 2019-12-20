/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * security_algorithm_config.h - this is the header file for message: SecurityAlgorithmConfig
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#ifndef _SECURITY_ALGORITHM_CONFIG_H_
#define _SECURITY_ALGORITHM_CONFIG_H_

#include "types.h"
#include "contants.h" 				
#include "handle_bits.h"
#include "ciphering_algorithm.h"
#include "integrity_prot_algorithm.h"


typedef struct {
	CipheringAlgorithm_e                                               cipheringAlgorithm;
	BOOLEAN                                                            integrityProtAlgorithm_exist;
	IntegrityProtAlgorithm_e                                           integrityProtAlgorithm;
	/* Extension marker start. */
}SecurityAlgorithmConfig_t;


extern void EncodeSecurityAlgorithmConfig(
	SecurityAlgorithmConfig_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);
extern void DecodeSecurityAlgorithmConfig(
	SecurityAlgorithmConfig_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);

#endif
