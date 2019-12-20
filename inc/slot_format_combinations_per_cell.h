/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * slot_format_combinations_per_cell.h - this is the header file for message: SlotFormatCombinationsPerCell
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#ifndef _SLOT_FORMAT_COMBINATIONS_PER_CELL_H_
#define _SLOT_FORMAT_COMBINATIONS_PER_CELL_H_

#include "types.h"
#include "contants.h" 				
#include "handle_bits.h"
#include "serv_cell_index.h"
#include "subcarrier_spacing.h"
#include "subcarrier_spacing.h"
#include "slot_format_combination.h"


typedef struct {
	uint32                                                             length;
	SlotFormatCombination_t                                            elm[maxNrofSlotFormatCombinationsPerSet];
}SlotFormatCombinationsPerCell_slotFormatCombinations_t;


typedef struct {
	ServCellIndex_t                                                    servingCellId;
	SubcarrierSpacing_e                                                subcarrierSpacing;
	BOOLEAN                                                            subcarrierSpacing2_exist;
	SubcarrierSpacing_e                                                subcarrierSpacing2;
	BOOLEAN                                                            slotFormatCombinations_exist;
	SlotFormatCombinationsPerCell_slotFormatCombinations_t             slotFormatCombinations;
	BOOLEAN                                                            positionInDCI_exist;
	uint32                                                             positionInDCI;
	/* Extension marker start. */
}SlotFormatCombinationsPerCell_t;


extern void EncodeSlotFormatCombinationsPerCell(
	SlotFormatCombinationsPerCell_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);
extern void DecodeSlotFormatCombinationsPerCell(
	SlotFormatCombinationsPerCell_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);

#endif
