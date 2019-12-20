/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * ra_prioritization.c - codec the message of RA-Prioritization
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#include <assert.h>
#include "mem.h"
#include "ra_prioritization.h"


void EncodeRA_Prioritization_powerRampingStepHighPriority(
	RA_Prioritization_powerRampingStepHighPriority_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 2, bits_iter);
}

void EncodeRA_Prioritization_scalingFactorBI(
	RA_Prioritization_scalingFactorBI_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 2, bits_iter);
}

void EncodeRA_Prioritization(
	RA_Prioritization_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	/*flag for extension marker, within extension root. */
	PutBits(buff, 0, 1, bits_iter);
	if(i_encoded_field->scalingFactorBI_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	EncodeRA_Prioritization_powerRampingStepHighPriority(i_encoded_field->powerRampingStepHighPriority, buff, bits_iter, asn_error);

	if(i_encoded_field->scalingFactorBI_exist == TRUE)
	{
		EncodeRA_Prioritization_scalingFactorBI(i_encoded_field->scalingFactorBI, buff, bits_iter, asn_error);
	}

}

void DecodeRA_Prioritization_powerRampingStepHighPriority(
	RA_Prioritization_powerRampingStepHighPriority_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = Get_bits(buff, 2, bits_iter);
}

void DecodeRA_Prioritization_scalingFactorBI(
	RA_Prioritization_scalingFactorBI_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = Get_bits(buff, 2, bits_iter);
}

void DecodeRA_Prioritization(
	RA_Prioritization_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint8    flag = 0;
	uint8    ext_flag = 0;
	uint32    bits_width = 0;
	uint32    preamble_bitmap = 0;
	
	ext_flag = Get_bits(buff, 1, bits_iter);

	o_decoded_field->scalingFactorBI_exist = Get_bits(buff, 1, bits_iter);
	DecodeRA_Prioritization_powerRampingStepHighPriority(&o_decoded_field->powerRampingStepHighPriority, buff, bits_iter, asn_error);
	if(o_decoded_field->scalingFactorBI_exist == TRUE)
	{
		DecodeRA_Prioritization_scalingFactorBI(&o_decoded_field->scalingFactorBI, buff, bits_iter, asn_error);
	}

	if(ext_flag == 1)
	{
		//need to handle asn error.
	}
}

