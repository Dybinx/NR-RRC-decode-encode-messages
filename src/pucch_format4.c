/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * pucch_format4.c - codec the message of PUCCH-format4
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#include <assert.h>
#include "mem.h"
#include "pucch_format4.h"


void EncodePUCCH_format4_occ_Length(
	PUCCH_format4_occ_Length_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 1, bits_iter);
}

void EncodePUCCH_format4_occ_Index(
	PUCCH_format4_occ_Index_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 2, bits_iter);
}

void EncodePUCCH_format4(
	PUCCH_format4_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field->nrofSymbols - 4, 4, bits_iter);

	EncodePUCCH_format4_occ_Length(i_encoded_field->occ_Length, buff, bits_iter, asn_error);

	EncodePUCCH_format4_occ_Index(i_encoded_field->occ_Index, buff, bits_iter, asn_error);

	PutBits(buff, i_encoded_field->startingSymbolIndex, 4, bits_iter);

}

void DecodePUCCH_format4_occ_Length(
	PUCCH_format4_occ_Length_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = Get_bits(buff, 1, bits_iter);
}

void DecodePUCCH_format4_occ_Index(
	PUCCH_format4_occ_Index_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = Get_bits(buff, 2, bits_iter);
}

void DecodePUCCH_format4(
	PUCCH_format4_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	o_decoded_field->nrofSymbols = Get_bits(buff, 4, bits_iter) + 4;
	DecodePUCCH_format4_occ_Length(&o_decoded_field->occ_Length, buff, bits_iter, asn_error);
	DecodePUCCH_format4_occ_Index(&o_decoded_field->occ_Index, buff, bits_iter, asn_error);
	o_decoded_field->startingSymbolIndex = Get_bits(buff, 4, bits_iter);
}

