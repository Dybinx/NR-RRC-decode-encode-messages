/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * supported_bandwidth.c - codec the message of SupportedBandwidth
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#include <assert.h>
#include "mem.h"
#include "supported_bandwidth.h"


void EncodeSupportedBandwidth_fr1(
	SupportedBandwidth_fr1_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 4, bits_iter);
}

void EncodeSupportedBandwidth_fr2(
	SupportedBandwidth_fr2_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 2, bits_iter);
}

void EncodeSupportedBandwidth(
	SupportedBandwidth_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field->type, 1, bits_iter);
	switch (i_encoded_field->type)
	{
	case SUPPORTEDBANDWIDTH_FR1:
		EncodeSupportedBandwidth_fr1(i_encoded_field->a.fr1, buff, bits_iter, asn_error);
		break;

	case SUPPORTEDBANDWIDTH_FR2:
		EncodeSupportedBandwidth_fr2(i_encoded_field->a.fr2, buff, bits_iter, asn_error);
		break;

	default:
		break;	}
}

void DecodeSupportedBandwidth_fr1(
	SupportedBandwidth_fr1_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = Get_bits(buff, 4, bits_iter);
}

void DecodeSupportedBandwidth_fr2(
	SupportedBandwidth_fr2_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = Get_bits(buff, 2, bits_iter);
}

void DecodeSupportedBandwidth(
	SupportedBandwidth_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint32    index = 0;

	index = Get_bits(buff, 1, bits_iter);
	o_decoded_field->type = index;
	switch (index)
	{
	case SUPPORTEDBANDWIDTH_FR1:
		DecodeSupportedBandwidth_fr1(&o_decoded_field->a.fr1, buff, bits_iter, asn_error);
		break;

	case SUPPORTEDBANDWIDTH_FR2:
		DecodeSupportedBandwidth_fr2(&o_decoded_field->a.fr2, buff, bits_iter, asn_error);
		break;

	default:
		break;

	}
}

