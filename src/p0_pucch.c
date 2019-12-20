/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * p0_pucch.c - codec the message of P0-PUCCH
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#include <assert.h>
#include "mem.h"
#include "p0_pucch.h"


void EncodeP0_PUCCH(
	P0_PUCCH_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	EncodeP0_PUCCH_Id(&i_encoded_field->p0_PUCCH_Id, buff, bits_iter, asn_error);

	PutBits(buff, i_encoded_field->p0_PUCCH_Value + 16, 5, bits_iter);

}

void DecodeP0_PUCCH(
	P0_PUCCH_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	DecodeP0_PUCCH_Id(&o_decoded_field->p0_PUCCH_Id, buff, bits_iter, asn_error);
	o_decoded_field->p0_PUCCH_Value = Get_bits(buff, 5, bits_iter) - 16;
}

