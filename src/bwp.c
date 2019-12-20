/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * bwp.c - codec the message of BWP
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#include <assert.h>
#include "mem.h"
#include "bwp.h"


void EncodeBWP_cyclicPrefix(
	BWP_cyclicPrefix_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 0, bits_iter);
}

void EncodeBWP(
	BWP_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	if(i_encoded_field->cyclicPrefix_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	PutBits(buff, i_encoded_field->locationAndBandwidth, 16, bits_iter);

	EncodeSubcarrierSpacing(i_encoded_field->subcarrierSpacing, buff, bits_iter, asn_error);

	if(i_encoded_field->cyclicPrefix_exist == TRUE)
	{
		EncodeBWP_cyclicPrefix(i_encoded_field->cyclicPrefix, buff, bits_iter, asn_error);
	}

}

void DecodeBWP_cyclicPrefix(
	BWP_cyclicPrefix_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = 0;
}

void DecodeBWP(
	BWP_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	o_decoded_field->cyclicPrefix_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->locationAndBandwidth = Get_bits(buff, 16, bits_iter);
	DecodeSubcarrierSpacing(&o_decoded_field->subcarrierSpacing, buff, bits_iter, asn_error);
	if(o_decoded_field->cyclicPrefix_exist == TRUE)
	{
		DecodeBWP_cyclicPrefix(&o_decoded_field->cyclicPrefix, buff, bits_iter, asn_error);
	}

}

