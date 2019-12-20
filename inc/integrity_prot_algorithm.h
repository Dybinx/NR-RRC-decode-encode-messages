/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * integrity_prot_algorithm.h - this is the header file for message: IntegrityProtAlgorithm
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#ifndef _INTEGRITY_PROT_ALGORITHM_H_
#define _INTEGRITY_PROT_ALGORITHM_H_

#include "types.h"
#include "contants.h" 				
#include "handle_bits.h"


typedef enum {
	INTEGRITYPROTALGORITHM_NIA0,
	INTEGRITYPROTALGORITHM_NIA1,
	INTEGRITYPROTALGORITHM_NIA2,
	INTEGRITYPROTALGORITHM_NIA3,
	INTEGRITYPROTALGORITHM_SPARE4,
	INTEGRITYPROTALGORITHM_SPARE3,
	INTEGRITYPROTALGORITHM_SPARE2,
	INTEGRITYPROTALGORITHM_SPARE1,
	/* Extension marker start. */
	INTEGRITYPROTALGORITHM_max = 0x7FFFFFFF
}IntegrityProtAlgorithm_e;


extern void EncodeIntegrityProtAlgorithm(
	IntegrityProtAlgorithm_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);
extern void DecodeIntegrityProtAlgorithm(
	IntegrityProtAlgorithm_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);

#endif
