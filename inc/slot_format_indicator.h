/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * slot_format_indicator.h - this is the header file for message: SlotFormatIndicator
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#ifndef _SLOT_FORMAT_INDICATOR_H_
#define _SLOT_FORMAT_INDICATOR_H_

#include "types.h"
#include "contants.h" 				
#include "handle_bits.h"
#include "rnti_value.h"
#include "slot_format_combinations_per_cell.h"
#include "serv_cell_index.h"


typedef struct {
	uint32                                                             length;
	SlotFormatCombinationsPerCell_t                                    elm[maxNrofAggregatedCellsPerCellGroup];
}SlotFormatIndicator_slotFormatCombToAddModList_t;


typedef struct {
	uint32                                                             length;
	ServCellIndex_t                                                    elm[maxNrofAggregatedCellsPerCellGroup];
}SlotFormatIndicator_slotFormatCombToReleaseList_t;


typedef struct {
	RNTI_Value_t                                                       sfi_RNTI;
	uint32                                                             dci_PayloadSize;
	BOOLEAN                                                            slotFormatCombToAddModList_exist;
	SlotFormatIndicator_slotFormatCombToAddModList_t                   slotFormatCombToAddModList;
	BOOLEAN                                                            slotFormatCombToReleaseList_exist;
	SlotFormatIndicator_slotFormatCombToReleaseList_t                  slotFormatCombToReleaseList;
	/* Extension marker start. */
}SlotFormatIndicator_t;


extern void EncodeSlotFormatIndicator(
	SlotFormatIndicator_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);
extern void DecodeSlotFormatIndicator(
	SlotFormatIndicator_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);

#endif
