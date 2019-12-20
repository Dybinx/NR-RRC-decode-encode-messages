/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * cells_to_add_mod.c - codec the message of CellsToAddMod
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#include <assert.h>
#include "mem.h"
#include "cells_to_add_mod.h"


void EncodeCellsToAddMod(
	CellsToAddMod_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	EncodePhysCellId(&i_encoded_field->physCellId, buff, bits_iter, asn_error);

	EncodeQ_OffsetRangeList(&i_encoded_field->cellIndividualOffset, buff, bits_iter, asn_error);

}

void DecodeCellsToAddMod(
	CellsToAddMod_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	DecodePhysCellId(&o_decoded_field->physCellId, buff, bits_iter, asn_error);
	DecodeQ_OffsetRangeList(&o_decoded_field->cellIndividualOffset, buff, bits_iter, asn_error);
}

