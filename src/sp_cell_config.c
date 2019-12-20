/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * sp_cell_config.c - codec the message of SpCellConfig
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#include <assert.h>
#include "mem.h"
#include "sp_cell_config.h"


void EncodeSpCellConfig_release(
	SpCellConfig_release_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
}

void EncodeSpCellConfig_rlf_TimersAndConstants(
	SpCellConfig_rlf_TimersAndConstants_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field->type, 1, bits_iter);
	switch (i_encoded_field->type)
	{
	case SPCELLCONFIG_RLF_TIMERSANDCONSTANTS_RELEASE:
		EncodeSpCellConfig_release(&i_encoded_field->a.release, buff, bits_iter, asn_error);
		break;

	case SPCELLCONFIG_RLF_TIMERSANDCONSTANTS_SETUP:
		EncodeRLF_TimersAndConstants(&i_encoded_field->a.setup, buff, bits_iter, asn_error);
		break;

	default:
		break;	}
}

void EncodeSpCellConfig_rlmInSyncOutOfSyncThreshold(
	SpCellConfig_rlmInSyncOutOfSyncThreshold_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 0, bits_iter);
}

void EncodeSpCellConfig(
	SpCellConfig_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	/*flag for extension marker, within extension root. */
	PutBits(buff, 0, 1, bits_iter);
	if(i_encoded_field->servCellIndex_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->reconfigurationWithSync_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->rlf_TimersAndConstants_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->rlmInSyncOutOfSyncThreshold_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->spCellConfigDedicated_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->servCellIndex_exist == TRUE)
	{
		EncodeServCellIndex(&i_encoded_field->servCellIndex, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->reconfigurationWithSync_exist == TRUE)
	{
		EncodeReconfigurationWithSync(&i_encoded_field->reconfigurationWithSync, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->rlf_TimersAndConstants_exist == TRUE)
	{
		EncodeSpCellConfig_rlf_TimersAndConstants(&i_encoded_field->rlf_TimersAndConstants, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->rlmInSyncOutOfSyncThreshold_exist == TRUE)
	{
		EncodeSpCellConfig_rlmInSyncOutOfSyncThreshold(i_encoded_field->rlmInSyncOutOfSyncThreshold, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->spCellConfigDedicated_exist == TRUE)
	{
		EncodeServingCellConfig(&i_encoded_field->spCellConfigDedicated, buff, bits_iter, asn_error);
	}

}

void DecodeSpCellConfig_release(
	SpCellConfig_release_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
}

void DecodeSpCellConfig_rlf_TimersAndConstants(
	SpCellConfig_rlf_TimersAndConstants_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint32    index = 0;

	index = Get_bits(buff, 1, bits_iter);
	o_decoded_field->type = index;
	switch (index)
	{
	case SPCELLCONFIG_RLF_TIMERSANDCONSTANTS_RELEASE:
		DecodeSpCellConfig_release(&o_decoded_field->a.release, buff, bits_iter, asn_error);
		break;

	case SPCELLCONFIG_RLF_TIMERSANDCONSTANTS_SETUP:
		DecodeRLF_TimersAndConstants(&o_decoded_field->a.setup, buff, bits_iter, asn_error);
		break;

	default:
		break;

	}
}

void DecodeSpCellConfig_rlmInSyncOutOfSyncThreshold(
	SpCellConfig_rlmInSyncOutOfSyncThreshold_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = 0;
}

void DecodeSpCellConfig(
	SpCellConfig_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint8    flag = 0;
	uint8    ext_flag = 0;
	uint32    bits_width = 0;
	uint32    preamble_bitmap = 0;
	
	ext_flag = Get_bits(buff, 1, bits_iter);

	o_decoded_field->servCellIndex_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->reconfigurationWithSync_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->rlf_TimersAndConstants_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->rlmInSyncOutOfSyncThreshold_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->spCellConfigDedicated_exist = Get_bits(buff, 1, bits_iter);
	if(o_decoded_field->servCellIndex_exist == TRUE)
	{
		DecodeServCellIndex(&o_decoded_field->servCellIndex, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->reconfigurationWithSync_exist == TRUE)
	{
		DecodeReconfigurationWithSync(&o_decoded_field->reconfigurationWithSync, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->rlf_TimersAndConstants_exist == TRUE)
	{
		DecodeSpCellConfig_rlf_TimersAndConstants(&o_decoded_field->rlf_TimersAndConstants, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->rlmInSyncOutOfSyncThreshold_exist == TRUE)
	{
		DecodeSpCellConfig_rlmInSyncOutOfSyncThreshold(&o_decoded_field->rlmInSyncOutOfSyncThreshold, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->spCellConfigDedicated_exist == TRUE)
	{
		DecodeServingCellConfig(&o_decoded_field->spCellConfigDedicated, buff, bits_iter, asn_error);
	}

	if(ext_flag == 1)
	{
		//need to handle asn error.
	}
}

