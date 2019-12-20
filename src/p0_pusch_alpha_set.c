/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * p0_pusch_alpha_set.c - codec the message of P0-PUSCH-AlphaSet
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#include <assert.h>
#include "mem.h"
#include "p0_pusch_alpha_set.h"


void EncodeP0_PUSCH_AlphaSet(
	P0_PUSCH_AlphaSet_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	if(i_encoded_field->p0_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->alpha_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	EncodeP0_PUSCH_AlphaSetId(&i_encoded_field->p0_PUSCH_AlphaSetId, buff, bits_iter, asn_error);

	if(i_encoded_field->p0_exist == TRUE)
	{
		PutBits(buff, i_encoded_field->p0 + 16, 5, bits_iter);
	}

	if(i_encoded_field->alpha_exist == TRUE)
	{
		EncodeAlpha(i_encoded_field->alpha, buff, bits_iter, asn_error);
	}

}

void DecodeP0_PUSCH_AlphaSet(
	P0_PUSCH_AlphaSet_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	o_decoded_field->p0_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->alpha_exist = Get_bits(buff, 1, bits_iter);
	DecodeP0_PUSCH_AlphaSetId(&o_decoded_field->p0_PUSCH_AlphaSetId, buff, bits_iter, asn_error);
	if(o_decoded_field->p0_exist == TRUE)
	{
		o_decoded_field->p0 = Get_bits(buff, 5, bits_iter) - 16;
	}

	if(o_decoded_field->alpha_exist == TRUE)
	{
		DecodeAlpha(&o_decoded_field->alpha, buff, bits_iter, asn_error);
	}

}

