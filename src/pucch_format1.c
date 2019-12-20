/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * pucch_format1.c - codec the message of PUCCH-format1
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#include <assert.h>
#include "mem.h"
#include "pucch_format1.h"


void EncodePUCCH_format1(
	PUCCH_format1_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field->initialCyclicShift, 4, bits_iter);

	PutBits(buff, i_encoded_field->nrofSymbols - 4, 4, bits_iter);

	PutBits(buff, i_encoded_field->startingSymbolIndex, 4, bits_iter);

	PutBits(buff, i_encoded_field->timeDomainOCC, 3, bits_iter);

}

void DecodePUCCH_format1(
	PUCCH_format1_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	o_decoded_field->initialCyclicShift = Get_bits(buff, 4, bits_iter);
	o_decoded_field->nrofSymbols = Get_bits(buff, 4, bits_iter) + 4;
	o_decoded_field->startingSymbolIndex = Get_bits(buff, 4, bits_iter);
	o_decoded_field->timeDomainOCC = Get_bits(buff, 3, bits_iter);
}

