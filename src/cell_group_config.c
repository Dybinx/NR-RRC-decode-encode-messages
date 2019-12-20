/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * cell_group_config.c - codec the message of CellGroupConfig
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#include <assert.h>
#include "mem.h"
#include "cell_group_config.h"


void EncodeCellGroupConfig_rlc_BearerToAddModList(
	CellGroupConfig_rlc_BearerToAddModList_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field->length - 1, 5, bits_iter);
	for(uint32 i = 0; i < i_encoded_field->length; i++)
	{
		EncodeRLC_BearerConfig(&i_encoded_field->elm[i], buff, bits_iter, asn_error);
	}
}

void EncodeCellGroupConfig_rlc_BearerToReleaseList(
	CellGroupConfig_rlc_BearerToReleaseList_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field->length - 1, 5, bits_iter);
	for(uint32 i = 0; i < i_encoded_field->length; i++)
	{
		EncodeLogicalChannelIdentity(&i_encoded_field->elm[i], buff, bits_iter, asn_error);
	}
}

void EncodeCellGroupConfig_sCellToAddModList(
	CellGroupConfig_sCellToAddModList_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field->length - 1, 5, bits_iter);
	for(uint32 i = 0; i < i_encoded_field->length; i++)
	{
		EncodeSCellConfig(&i_encoded_field->elm[i], buff, bits_iter, asn_error);
	}
}

void EncodeCellGroupConfig_sCellToReleaseList(
	CellGroupConfig_sCellToReleaseList_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field->length - 1, 5, bits_iter);
	for(uint32 i = 0; i < i_encoded_field->length; i++)
	{
		EncodeSCellIndex(&i_encoded_field->elm[i], buff, bits_iter, asn_error);
	}
}

void EncodeCellGroupConfig(
	CellGroupConfig_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	/*flag for extension marker, within extension root. */
	PutBits(buff, 0, 1, bits_iter);
	if(i_encoded_field->rlc_BearerToAddModList_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->rlc_BearerToReleaseList_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->mac_CellGroupConfig_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->physicalCellGroupConfig_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->spCellConfig_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->sCellToAddModList_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->sCellToReleaseList_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	EncodeCellGroupId(&i_encoded_field->cellGroupId, buff, bits_iter, asn_error);

	if(i_encoded_field->rlc_BearerToAddModList_exist == TRUE)
	{
		EncodeCellGroupConfig_rlc_BearerToAddModList(&i_encoded_field->rlc_BearerToAddModList, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->rlc_BearerToReleaseList_exist == TRUE)
	{
		EncodeCellGroupConfig_rlc_BearerToReleaseList(&i_encoded_field->rlc_BearerToReleaseList, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->mac_CellGroupConfig_exist == TRUE)
	{
		EncodeMAC_CellGroupConfig(&i_encoded_field->mac_CellGroupConfig, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->physicalCellGroupConfig_exist == TRUE)
	{
		EncodePhysicalCellGroupConfig(&i_encoded_field->physicalCellGroupConfig, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->spCellConfig_exist == TRUE)
	{
		EncodeSpCellConfig(&i_encoded_field->spCellConfig, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->sCellToAddModList_exist == TRUE)
	{
		EncodeCellGroupConfig_sCellToAddModList(&i_encoded_field->sCellToAddModList, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->sCellToReleaseList_exist == TRUE)
	{
		EncodeCellGroupConfig_sCellToReleaseList(&i_encoded_field->sCellToReleaseList, buff, bits_iter, asn_error);
	}

}

void DecodeCellGroupConfig_rlc_BearerToAddModList(
	CellGroupConfig_rlc_BearerToAddModList_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint32    count = 0;
	count = Get_bits(buff, 5, bits_iter) + 1;
	o_decoded_field->length = count;

	for(uint32 i = 0; i < count; i++)
	{
		DecodeRLC_BearerConfig(&o_decoded_field->elm[i], buff, bits_iter, asn_error);
	}
}

void DecodeCellGroupConfig_rlc_BearerToReleaseList(
	CellGroupConfig_rlc_BearerToReleaseList_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint32    count = 0;
	count = Get_bits(buff, 5, bits_iter) + 1;
	o_decoded_field->length = count;

	for(uint32 i = 0; i < count; i++)
	{
		DecodeLogicalChannelIdentity(&o_decoded_field->elm[i], buff, bits_iter, asn_error);
	}
}

void DecodeCellGroupConfig_sCellToAddModList(
	CellGroupConfig_sCellToAddModList_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint32    count = 0;
	count = Get_bits(buff, 5, bits_iter) + 1;
	o_decoded_field->length = count;

	for(uint32 i = 0; i < count; i++)
	{
		DecodeSCellConfig(&o_decoded_field->elm[i], buff, bits_iter, asn_error);
	}
}

void DecodeCellGroupConfig_sCellToReleaseList(
	CellGroupConfig_sCellToReleaseList_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint32    count = 0;
	count = Get_bits(buff, 5, bits_iter) + 1;
	o_decoded_field->length = count;

	for(uint32 i = 0; i < count; i++)
	{
		DecodeSCellIndex(&o_decoded_field->elm[i], buff, bits_iter, asn_error);
	}
}

void DecodeCellGroupConfig(
	CellGroupConfig_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint8    flag = 0;
	uint8    ext_flag = 0;
	uint32    bits_width = 0;
	uint32    preamble_bitmap = 0;
	
	ext_flag = Get_bits(buff, 1, bits_iter);

	o_decoded_field->rlc_BearerToAddModList_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->rlc_BearerToReleaseList_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->mac_CellGroupConfig_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->physicalCellGroupConfig_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->spCellConfig_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->sCellToAddModList_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->sCellToReleaseList_exist = Get_bits(buff, 1, bits_iter);
	DecodeCellGroupId(&o_decoded_field->cellGroupId, buff, bits_iter, asn_error);
	if(o_decoded_field->rlc_BearerToAddModList_exist == TRUE)
	{
		DecodeCellGroupConfig_rlc_BearerToAddModList(&o_decoded_field->rlc_BearerToAddModList, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->rlc_BearerToReleaseList_exist == TRUE)
	{
		DecodeCellGroupConfig_rlc_BearerToReleaseList(&o_decoded_field->rlc_BearerToReleaseList, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->mac_CellGroupConfig_exist == TRUE)
	{
		DecodeMAC_CellGroupConfig(&o_decoded_field->mac_CellGroupConfig, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->physicalCellGroupConfig_exist == TRUE)
	{
		DecodePhysicalCellGroupConfig(&o_decoded_field->physicalCellGroupConfig, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->spCellConfig_exist == TRUE)
	{
		DecodeSpCellConfig(&o_decoded_field->spCellConfig, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->sCellToAddModList_exist == TRUE)
	{
		DecodeCellGroupConfig_sCellToAddModList(&o_decoded_field->sCellToAddModList, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->sCellToReleaseList_exist == TRUE)
	{
		DecodeCellGroupConfig_sCellToReleaseList(&o_decoded_field->sCellToReleaseList, buff, bits_iter, asn_error);
	}

	if(ext_flag == 1)
	{
		//need to handle asn error.
	}
}

