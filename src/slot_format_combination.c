/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * slot_format_combination.c - codec the message of SlotFormatCombination
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#include <assert.h>
#include "mem.h"
#include "slot_format_combination.h"


void EncodeSlotFormatCombination_slotFormats(
	SlotFormatCombination_slotFormats_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field->length - 1, 8, bits_iter);
	for(uint32 i = 0; i < i_encoded_field->length; i++)
	{
		PutBits(buff, i_encoded_field->elm[i], 8, bits_iter);
	}
}

void EncodeSlotFormatCombination(
	SlotFormatCombination_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	EncodeSlotFormatCombinationId(&i_encoded_field->slotFormatCombinationId, buff, bits_iter, asn_error);

	EncodeSlotFormatCombination_slotFormats(&i_encoded_field->slotFormats, buff, bits_iter, asn_error);

}

void DecodeSlotFormatCombination_slotFormats(
	SlotFormatCombination_slotFormats_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint32    count = 0;
	count = Get_bits(buff, 8, bits_iter) + 1;
	o_decoded_field->length = count;

	for(uint32 i = 0; i < count; i++)
	{
		o_decoded_field->elm[i] = Get_bits(buff, 8, bits_iter);
	}
}

void DecodeSlotFormatCombination(
	SlotFormatCombination_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	DecodeSlotFormatCombinationId(&o_decoded_field->slotFormatCombinationId, buff, bits_iter, asn_error);
	DecodeSlotFormatCombination_slotFormats(&o_decoded_field->slotFormats, buff, bits_iter, asn_error);
}

