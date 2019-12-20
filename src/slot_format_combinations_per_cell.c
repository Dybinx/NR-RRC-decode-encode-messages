/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * slot_format_combinations_per_cell.c - codec the message of SlotFormatCombinationsPerCell
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#include <assert.h>
#include "mem.h"
#include "slot_format_combinations_per_cell.h"


void EncodeSlotFormatCombinationsPerCell_slotFormatCombinations(
	SlotFormatCombinationsPerCell_slotFormatCombinations_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field->length - 1, 9, bits_iter);
	for(uint32 i = 0; i < i_encoded_field->length; i++)
	{
		EncodeSlotFormatCombination(&i_encoded_field->elm[i], buff, bits_iter, asn_error);
	}
}

void EncodeSlotFormatCombinationsPerCell(
	SlotFormatCombinationsPerCell_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	/*flag for extension marker, within extension root. */
	PutBits(buff, 0, 1, bits_iter);
	if(i_encoded_field->subcarrierSpacing2_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->slotFormatCombinations_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->positionInDCI_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	EncodeServCellIndex(&i_encoded_field->servingCellId, buff, bits_iter, asn_error);

	EncodeSubcarrierSpacing(i_encoded_field->subcarrierSpacing, buff, bits_iter, asn_error);

	if(i_encoded_field->subcarrierSpacing2_exist == TRUE)
	{
		EncodeSubcarrierSpacing(i_encoded_field->subcarrierSpacing2, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->slotFormatCombinations_exist == TRUE)
	{
		EncodeSlotFormatCombinationsPerCell_slotFormatCombinations(&i_encoded_field->slotFormatCombinations, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->positionInDCI_exist == TRUE)
	{
		PutBits(buff, i_encoded_field->positionInDCI, 7, bits_iter);
	}

}

void DecodeSlotFormatCombinationsPerCell_slotFormatCombinations(
	SlotFormatCombinationsPerCell_slotFormatCombinations_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint32    count = 0;
	count = Get_bits(buff, 9, bits_iter) + 1;
	o_decoded_field->length = count;

	for(uint32 i = 0; i < count; i++)
	{
		DecodeSlotFormatCombination(&o_decoded_field->elm[i], buff, bits_iter, asn_error);
	}
}

void DecodeSlotFormatCombinationsPerCell(
	SlotFormatCombinationsPerCell_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint8    flag = 0;
	uint8    ext_flag = 0;
	uint32    bits_width = 0;
	uint32    preamble_bitmap = 0;
	
	ext_flag = Get_bits(buff, 1, bits_iter);

	o_decoded_field->subcarrierSpacing2_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->slotFormatCombinations_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->positionInDCI_exist = Get_bits(buff, 1, bits_iter);
	DecodeServCellIndex(&o_decoded_field->servingCellId, buff, bits_iter, asn_error);
	DecodeSubcarrierSpacing(&o_decoded_field->subcarrierSpacing, buff, bits_iter, asn_error);
	if(o_decoded_field->subcarrierSpacing2_exist == TRUE)
	{
		DecodeSubcarrierSpacing(&o_decoded_field->subcarrierSpacing2, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->slotFormatCombinations_exist == TRUE)
	{
		DecodeSlotFormatCombinationsPerCell_slotFormatCombinations(&o_decoded_field->slotFormatCombinations, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->positionInDCI_exist == TRUE)
	{
		o_decoded_field->positionInDCI = Get_bits(buff, 7, bits_iter);
	}

	if(ext_flag == 1)
	{
		//need to handle asn error.
	}
}

