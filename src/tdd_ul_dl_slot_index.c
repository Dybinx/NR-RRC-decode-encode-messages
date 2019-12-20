/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * tdd_ul_dl_slot_index.c - codec the message of TDD-UL-DL-SlotIndex
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#include <assert.h>
#include "mem.h"
#include "tdd_ul_dl_slot_index.h"


void EncodeTDD_UL_DL_SlotIndex(
	TDD_UL_DL_SlotIndex_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field->value, 9, bits_iter);
}

void DecodeTDD_UL_DL_SlotIndex(
	TDD_UL_DL_SlotIndex_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	o_decoded_field->value = Get_bits(buff, 9, bits_iter);
}

