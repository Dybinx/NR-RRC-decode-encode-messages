/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * slot_format_combination.h - this is the header file for message: SlotFormatCombination
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#ifndef _SLOT_FORMAT_COMBINATION_H_
#define _SLOT_FORMAT_COMBINATION_H_

#include "types.h"
#include "contants.h" 				
#include "handle_bits.h"
#include "slot_format_combination_id.h"


typedef struct {
	uint32                                                             length;
	uint32                                                             elm[maxNrofSlotFormatsPerCombination];
}SlotFormatCombination_slotFormats_t;


typedef struct {
	SlotFormatCombinationId_t                                          slotFormatCombinationId;
	SlotFormatCombination_slotFormats_t                                slotFormats;
}SlotFormatCombination_t;


extern void EncodeSlotFormatCombination(
	SlotFormatCombination_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);
extern void DecodeSlotFormatCombination(
	SlotFormatCombination_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);

#endif
