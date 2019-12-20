/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * ra_prioritization.h - this is the header file for message: RA-Prioritization
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#ifndef _RA_PRIORITIZATION_H_
#define _RA_PRIORITIZATION_H_

#include "types.h"
#include "contants.h" 				
#include "handle_bits.h"


typedef enum {
	RA_PRIORITIZATION_POWERRAMPINGSTEPHIGHPRIORITY_DB0,
	RA_PRIORITIZATION_POWERRAMPINGSTEPHIGHPRIORITY_DB2,
	RA_PRIORITIZATION_POWERRAMPINGSTEPHIGHPRIORITY_DB4,
	RA_PRIORITIZATION_POWERRAMPINGSTEPHIGHPRIORITY_DB6,
	RA_PRIORITIZATION_POWERRAMPINGSTEPHIGHPRIORITY_max = 0x7FFFFFFF
}RA_Prioritization_powerRampingStepHighPriority_e;


typedef enum {
	RA_PRIORITIZATION_SCALINGFACTORBI_ZERO,
	RA_PRIORITIZATION_SCALINGFACTORBI_DOT25,
	RA_PRIORITIZATION_SCALINGFACTORBI_DOT5,
	RA_PRIORITIZATION_SCALINGFACTORBI_DOT75,
	RA_PRIORITIZATION_SCALINGFACTORBI_max = 0x7FFFFFFF
}RA_Prioritization_scalingFactorBI_e;


typedef struct {
	RA_Prioritization_powerRampingStepHighPriority_e                   powerRampingStepHighPriority;
	BOOLEAN                                                            scalingFactorBI_exist;
	RA_Prioritization_scalingFactorBI_e                                scalingFactorBI;
	/* Extension marker start. */
}RA_Prioritization_t;


extern void EncodeRA_Prioritization(
	RA_Prioritization_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);
extern void DecodeRA_Prioritization(
	RA_Prioritization_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);

#endif
