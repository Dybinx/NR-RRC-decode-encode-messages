/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * pucch_format0.c - codec the message of PUCCH-format0
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#include <assert.h>
#include "mem.h"
#include "pucch_format0.h"


void EncodePUCCH_format0(
	PUCCH_format0_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field->initialCyclicShift, 4, bits_iter);

	PutBits(buff, i_encoded_field->nrofSymbols - 1, 1, bits_iter);

	PutBits(buff, i_encoded_field->startingSymbolIndex, 4, bits_iter);

}

void DecodePUCCH_format0(
	PUCCH_format0_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	o_decoded_field->initialCyclicShift = Get_bits(buff, 4, bits_iter);
	o_decoded_field->nrofSymbols = Get_bits(buff, 1, bits_iter) + 1;
	o_decoded_field->startingSymbolIndex = Get_bits(buff, 4, bits_iter);
}

