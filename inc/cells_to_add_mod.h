/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * cells_to_add_mod.h - this is the header file for message: CellsToAddMod
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#ifndef _CELLS_TO_ADD_MOD_H_
#define _CELLS_TO_ADD_MOD_H_

#include "types.h"
#include "contants.h" 				
#include "handle_bits.h"
#include "phys_cell_id.h"
#include "q_offset_range_list.h"


typedef struct {
	PhysCellId_t                                                       physCellId;
	Q_OffsetRangeList_t                                                cellIndividualOffset;
}CellsToAddMod_t;


extern void EncodeCellsToAddMod(
	CellsToAddMod_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);
extern void DecodeCellsToAddMod(
	CellsToAddMod_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);

#endif
