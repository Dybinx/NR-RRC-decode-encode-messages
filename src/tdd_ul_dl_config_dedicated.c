/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * tdd_ul_dl_config_dedicated.c - codec the message of TDD-UL-DL-ConfigDedicated
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#include <assert.h>
#include "mem.h"
#include "tdd_ul_dl_config_dedicated.h"


void EncodeTDD_UL_DL_ConfigDedicated_slotSpecificConfigurationsToAddModList(
	TDD_UL_DL_ConfigDedicated_slotSpecificConfigurationsToAddModList_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field->length - 1, 9, bits_iter);
	for(uint32 i = 0; i < i_encoded_field->length; i++)
	{
		EncodeTDD_UL_DL_SlotConfig(&i_encoded_field->elm[i], buff, bits_iter, asn_error);
	}
}

void EncodeTDD_UL_DL_ConfigDedicated_slotSpecificConfigurationsToreleaseList(
	TDD_UL_DL_ConfigDedicated_slotSpecificConfigurationsToreleaseList_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field->length - 1, 9, bits_iter);
	for(uint32 i = 0; i < i_encoded_field->length; i++)
	{
		EncodeTDD_UL_DL_SlotIndex(&i_encoded_field->elm[i], buff, bits_iter, asn_error);
	}
}

void EncodeTDD_UL_DL_ConfigDedicated(
	TDD_UL_DL_ConfigDedicated_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	/*flag for extension marker, within extension root. */
	PutBits(buff, 0, 1, bits_iter);
	if(i_encoded_field->slotSpecificConfigurationsToAddModList_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->slotSpecificConfigurationsToreleaseList_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->slotSpecificConfigurationsToAddModList_exist == TRUE)
	{
		EncodeTDD_UL_DL_ConfigDedicated_slotSpecificConfigurationsToAddModList(&i_encoded_field->slotSpecificConfigurationsToAddModList, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->slotSpecificConfigurationsToreleaseList_exist == TRUE)
	{
		EncodeTDD_UL_DL_ConfigDedicated_slotSpecificConfigurationsToreleaseList(&i_encoded_field->slotSpecificConfigurationsToreleaseList, buff, bits_iter, asn_error);
	}

}

void DecodeTDD_UL_DL_ConfigDedicated_slotSpecificConfigurationsToAddModList(
	TDD_UL_DL_ConfigDedicated_slotSpecificConfigurationsToAddModList_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint32    count = 0;
	count = Get_bits(buff, 9, bits_iter) + 1;
	o_decoded_field->length = count;

	for(uint32 i = 0; i < count; i++)
	{
		DecodeTDD_UL_DL_SlotConfig(&o_decoded_field->elm[i], buff, bits_iter, asn_error);
	}
}

void DecodeTDD_UL_DL_ConfigDedicated_slotSpecificConfigurationsToreleaseList(
	TDD_UL_DL_ConfigDedicated_slotSpecificConfigurationsToreleaseList_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint32    count = 0;
	count = Get_bits(buff, 9, bits_iter) + 1;
	o_decoded_field->length = count;

	for(uint32 i = 0; i < count; i++)
	{
		DecodeTDD_UL_DL_SlotIndex(&o_decoded_field->elm[i], buff, bits_iter, asn_error);
	}
}

void DecodeTDD_UL_DL_ConfigDedicated(
	TDD_UL_DL_ConfigDedicated_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint8    flag = 0;
	uint8    ext_flag = 0;
	uint32    bits_width = 0;
	uint32    preamble_bitmap = 0;
	
	ext_flag = Get_bits(buff, 1, bits_iter);

	o_decoded_field->slotSpecificConfigurationsToAddModList_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->slotSpecificConfigurationsToreleaseList_exist = Get_bits(buff, 1, bits_iter);
	if(o_decoded_field->slotSpecificConfigurationsToAddModList_exist == TRUE)
	{
		DecodeTDD_UL_DL_ConfigDedicated_slotSpecificConfigurationsToAddModList(&o_decoded_field->slotSpecificConfigurationsToAddModList, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->slotSpecificConfigurationsToreleaseList_exist == TRUE)
	{
		DecodeTDD_UL_DL_ConfigDedicated_slotSpecificConfigurationsToreleaseList(&o_decoded_field->slotSpecificConfigurationsToreleaseList, buff, bits_iter, asn_error);
	}

	if(ext_flag == 1)
	{
		//need to handle asn error.
	}
}

