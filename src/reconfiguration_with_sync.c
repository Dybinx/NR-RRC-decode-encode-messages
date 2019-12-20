/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * reconfiguration_with_sync.c - codec the message of ReconfigurationWithSync
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#include <assert.h>
#include "mem.h"
#include "reconfiguration_with_sync.h"


void EncodeReconfigurationWithSync_t304(
	ReconfigurationWithSync_t304_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 3, bits_iter);
}

void EncodeReconfigurationWithSync_rach_ConfigDedicated(
	ReconfigurationWithSync_rach_ConfigDedicated_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field->type, 1, bits_iter);
	switch (i_encoded_field->type)
	{
	case RECONFIGURATIONWITHSYNC_RACH_CONFIGDEDICATED_UPLINK:
		EncodeRACH_ConfigDedicated(&i_encoded_field->a.uplink, buff, bits_iter, asn_error);
		break;

	case RECONFIGURATIONWITHSYNC_RACH_CONFIGDEDICATED_SUPPLEMENTARYUPLINK:
		EncodeRACH_ConfigDedicated(&i_encoded_field->a.supplementaryUplink, buff, bits_iter, asn_error);
		break;

	default:
		break;	}
}

void EncodeReconfigurationWithSync(
	ReconfigurationWithSync_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	/*flag for extension marker, within extension root. */
	PutBits(buff, 0, 1, bits_iter);
	if(i_encoded_field->spCellConfigCommon_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->rach_ConfigDedicated_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->spCellConfigCommon_exist == TRUE)
	{
		EncodeServingCellConfigCommon(&i_encoded_field->spCellConfigCommon, buff, bits_iter, asn_error);
	}

	EncodeRNTI_Value(&i_encoded_field->newUE_Identity, buff, bits_iter, asn_error);

	EncodeReconfigurationWithSync_t304(i_encoded_field->t304, buff, bits_iter, asn_error);

	if(i_encoded_field->rach_ConfigDedicated_exist == TRUE)
	{
		EncodeReconfigurationWithSync_rach_ConfigDedicated(&i_encoded_field->rach_ConfigDedicated, buff, bits_iter, asn_error);
	}

}

void DecodeReconfigurationWithSync_t304(
	ReconfigurationWithSync_t304_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = Get_bits(buff, 3, bits_iter);
}

void DecodeReconfigurationWithSync_rach_ConfigDedicated(
	ReconfigurationWithSync_rach_ConfigDedicated_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint32    index = 0;

	index = Get_bits(buff, 1, bits_iter);
	o_decoded_field->type = index;
	switch (index)
	{
	case RECONFIGURATIONWITHSYNC_RACH_CONFIGDEDICATED_UPLINK:
		DecodeRACH_ConfigDedicated(&o_decoded_field->a.uplink, buff, bits_iter, asn_error);
		break;

	case RECONFIGURATIONWITHSYNC_RACH_CONFIGDEDICATED_SUPPLEMENTARYUPLINK:
		DecodeRACH_ConfigDedicated(&o_decoded_field->a.supplementaryUplink, buff, bits_iter, asn_error);
		break;

	default:
		break;

	}
}

void DecodeReconfigurationWithSync(
	ReconfigurationWithSync_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint8    flag = 0;
	uint8    ext_flag = 0;
	uint32    bits_width = 0;
	uint32    preamble_bitmap = 0;
	
	ext_flag = Get_bits(buff, 1, bits_iter);

	o_decoded_field->spCellConfigCommon_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->rach_ConfigDedicated_exist = Get_bits(buff, 1, bits_iter);
	if(o_decoded_field->spCellConfigCommon_exist == TRUE)
	{
		DecodeServingCellConfigCommon(&o_decoded_field->spCellConfigCommon, buff, bits_iter, asn_error);
	}

	DecodeRNTI_Value(&o_decoded_field->newUE_Identity, buff, bits_iter, asn_error);
	DecodeReconfigurationWithSync_t304(&o_decoded_field->t304, buff, bits_iter, asn_error);
	if(o_decoded_field->rach_ConfigDedicated_exist == TRUE)
	{
		DecodeReconfigurationWithSync_rach_ConfigDedicated(&o_decoded_field->rach_ConfigDedicated, buff, bits_iter, asn_error);
	}

	if(ext_flag == 1)
	{
		//need to handle asn error.
	}
}

