/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * slot_format_indicator.c - codec the message of SlotFormatIndicator
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#include <assert.h>
#include "mem.h"
#include "slot_format_indicator.h"


void EncodeSlotFormatIndicator_slotFormatCombToAddModList(
	SlotFormatIndicator_slotFormatCombToAddModList_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field->length - 1, 4, bits_iter);
	for(uint32 i = 0; i < i_encoded_field->length; i++)
	{
		EncodeSlotFormatCombinationsPerCell(&i_encoded_field->elm[i], buff, bits_iter, asn_error);
	}
}

void EncodeSlotFormatIndicator_slotFormatCombToReleaseList(
	SlotFormatIndicator_slotFormatCombToReleaseList_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field->length - 1, 4, bits_iter);
	for(uint32 i = 0; i < i_encoded_field->length; i++)
	{
		EncodeServCellIndex(&i_encoded_field->elm[i], buff, bits_iter, asn_error);
	}
}

void EncodeSlotFormatIndicator(
	SlotFormatIndicator_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	/*flag for extension marker, within extension root. */
	PutBits(buff, 0, 1, bits_iter);
	if(i_encoded_field->slotFormatCombToAddModList_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->slotFormatCombToReleaseList_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	EncodeRNTI_Value(&i_encoded_field->sfi_RNTI, buff, bits_iter, asn_error);

	PutBits(buff, i_encoded_field->dci_PayloadSize - 1, 7, bits_iter);

	if(i_encoded_field->slotFormatCombToAddModList_exist == TRUE)
	{
		EncodeSlotFormatIndicator_slotFormatCombToAddModList(&i_encoded_field->slotFormatCombToAddModList, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->slotFormatCombToReleaseList_exist == TRUE)
	{
		EncodeSlotFormatIndicator_slotFormatCombToReleaseList(&i_encoded_field->slotFormatCombToReleaseList, buff, bits_iter, asn_error);
	}

}

void DecodeSlotFormatIndicator_slotFormatCombToAddModList(
	SlotFormatIndicator_slotFormatCombToAddModList_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint32    count = 0;
	count = Get_bits(buff, 4, bits_iter) + 1;
	o_decoded_field->length = count;

	for(uint32 i = 0; i < count; i++)
	{
		DecodeSlotFormatCombinationsPerCell(&o_decoded_field->elm[i], buff, bits_iter, asn_error);
	}
}

void DecodeSlotFormatIndicator_slotFormatCombToReleaseList(
	SlotFormatIndicator_slotFormatCombToReleaseList_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint32    count = 0;
	count = Get_bits(buff, 4, bits_iter) + 1;
	o_decoded_field->length = count;

	for(uint32 i = 0; i < count; i++)
	{
		DecodeServCellIndex(&o_decoded_field->elm[i], buff, bits_iter, asn_error);
	}
}

void DecodeSlotFormatIndicator(
	SlotFormatIndicator_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint8    flag = 0;
	uint8    ext_flag = 0;
	uint32    bits_width = 0;
	uint32    preamble_bitmap = 0;
	
	ext_flag = Get_bits(buff, 1, bits_iter);

	o_decoded_field->slotFormatCombToAddModList_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->slotFormatCombToReleaseList_exist = Get_bits(buff, 1, bits_iter);
	DecodeRNTI_Value(&o_decoded_field->sfi_RNTI, buff, bits_iter, asn_error);
	o_decoded_field->dci_PayloadSize = Get_bits(buff, 7, bits_iter) + 1;
	if(o_decoded_field->slotFormatCombToAddModList_exist == TRUE)
	{
		DecodeSlotFormatIndicator_slotFormatCombToAddModList(&o_decoded_field->slotFormatCombToAddModList, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->slotFormatCombToReleaseList_exist == TRUE)
	{
		DecodeSlotFormatIndicator_slotFormatCombToReleaseList(&o_decoded_field->slotFormatCombToReleaseList, buff, bits_iter, asn_error);
	}

	if(ext_flag == 1)
	{
		//need to handle asn error.
	}
}

