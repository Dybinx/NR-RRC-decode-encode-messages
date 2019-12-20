/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * uplink_config.c - codec the message of UplinkConfig
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#include <assert.h>
#include "mem.h"
#include "uplink_config.h"


void EncodeUplinkConfig_uplinkBWP_ToReleaseList(
	UplinkConfig_uplinkBWP_ToReleaseList_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field->length - 1, 2, bits_iter);
	for(uint32 i = 0; i < i_encoded_field->length; i++)
	{
		EncodeBWP_Id(&i_encoded_field->elm[i], buff, bits_iter, asn_error);
	}
}

void EncodeUplinkConfig_uplinkBWP_ToAddModList(
	UplinkConfig_uplinkBWP_ToAddModList_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field->length - 1, 2, bits_iter);
	for(uint32 i = 0; i < i_encoded_field->length; i++)
	{
		EncodeBWP_Uplink(&i_encoded_field->elm[i], buff, bits_iter, asn_error);
	}
}

void EncodeUplinkConfig_release(
	UplinkConfig_release_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
}

void EncodeUplinkConfig_pusch_ServingCellConfig(
	UplinkConfig_pusch_ServingCellConfig_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field->type, 1, bits_iter);
	switch (i_encoded_field->type)
	{
	case UPLINKCONFIG_PUSCH_SERVINGCELLCONFIG_RELEASE:
		EncodeUplinkConfig_release(&i_encoded_field->a.release, buff, bits_iter, asn_error);
		break;

	case UPLINKCONFIG_PUSCH_SERVINGCELLCONFIG_SETUP:
		EncodePUSCH_ServingCellConfig(&i_encoded_field->a.setup, buff, bits_iter, asn_error);
		break;

	default:
		break;	}
}

void EncodeUplinkConfig_release_1(
	UplinkConfig_release_1_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
}

void EncodeUplinkConfig_carrierSwitching(
	UplinkConfig_carrierSwitching_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field->type, 1, bits_iter);
	switch (i_encoded_field->type)
	{
	case UPLINKCONFIG_CARRIERSWITCHING_RELEASE:
		EncodeUplinkConfig_release_1(&i_encoded_field->a.release, buff, bits_iter, asn_error);
		break;

	case UPLINKCONFIG_CARRIERSWITCHING_SETUP:
		EncodeSRS_CarrierSwitching(&i_encoded_field->a.setup, buff, bits_iter, asn_error);
		break;

	default:
		break;	}
}

void EncodeUplinkConfig(
	UplinkConfig_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	/*flag for extension marker, within extension root. */
	PutBits(buff, 0, 1, bits_iter);
	if(i_encoded_field->initialUplinkBWP_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->uplinkBWP_ToReleaseList_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->uplinkBWP_ToAddModList_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->firstActiveUplinkBWP_Id_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->pusch_ServingCellConfig_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->carrierSwitching_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->initialUplinkBWP_exist == TRUE)
	{
		EncodeBWP_UplinkDedicated(&i_encoded_field->initialUplinkBWP, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->uplinkBWP_ToReleaseList_exist == TRUE)
	{
		EncodeUplinkConfig_uplinkBWP_ToReleaseList(&i_encoded_field->uplinkBWP_ToReleaseList, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->uplinkBWP_ToAddModList_exist == TRUE)
	{
		EncodeUplinkConfig_uplinkBWP_ToAddModList(&i_encoded_field->uplinkBWP_ToAddModList, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->firstActiveUplinkBWP_Id_exist == TRUE)
	{
		EncodeBWP_Id(&i_encoded_field->firstActiveUplinkBWP_Id, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->pusch_ServingCellConfig_exist == TRUE)
	{
		EncodeUplinkConfig_pusch_ServingCellConfig(&i_encoded_field->pusch_ServingCellConfig, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->carrierSwitching_exist == TRUE)
	{
		EncodeUplinkConfig_carrierSwitching(&i_encoded_field->carrierSwitching, buff, bits_iter, asn_error);
	}

}

void DecodeUplinkConfig_uplinkBWP_ToReleaseList(
	UplinkConfig_uplinkBWP_ToReleaseList_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint32    count = 0;
	count = Get_bits(buff, 2, bits_iter) + 1;
	o_decoded_field->length = count;

	for(uint32 i = 0; i < count; i++)
	{
		DecodeBWP_Id(&o_decoded_field->elm[i], buff, bits_iter, asn_error);
	}
}

void DecodeUplinkConfig_uplinkBWP_ToAddModList(
	UplinkConfig_uplinkBWP_ToAddModList_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint32    count = 0;
	count = Get_bits(buff, 2, bits_iter) + 1;
	o_decoded_field->length = count;

	for(uint32 i = 0; i < count; i++)
	{
		DecodeBWP_Uplink(&o_decoded_field->elm[i], buff, bits_iter, asn_error);
	}
}

void DecodeUplinkConfig_release(
	UplinkConfig_release_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
}

void DecodeUplinkConfig_pusch_ServingCellConfig(
	UplinkConfig_pusch_ServingCellConfig_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint32    index = 0;

	index = Get_bits(buff, 1, bits_iter);
	o_decoded_field->type = index;
	switch (index)
	{
	case UPLINKCONFIG_PUSCH_SERVINGCELLCONFIG_RELEASE:
		DecodeUplinkConfig_release(&o_decoded_field->a.release, buff, bits_iter, asn_error);
		break;

	case UPLINKCONFIG_PUSCH_SERVINGCELLCONFIG_SETUP:
		DecodePUSCH_ServingCellConfig(&o_decoded_field->a.setup, buff, bits_iter, asn_error);
		break;

	default:
		break;

	}
}

void DecodeUplinkConfig_release_1(
	UplinkConfig_release_1_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
}

void DecodeUplinkConfig_carrierSwitching(
	UplinkConfig_carrierSwitching_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint32    index = 0;

	index = Get_bits(buff, 1, bits_iter);
	o_decoded_field->type = index;
	switch (index)
	{
	case UPLINKCONFIG_CARRIERSWITCHING_RELEASE:
		DecodeUplinkConfig_release_1(&o_decoded_field->a.release, buff, bits_iter, asn_error);
		break;

	case UPLINKCONFIG_CARRIERSWITCHING_SETUP:
		DecodeSRS_CarrierSwitching(&o_decoded_field->a.setup, buff, bits_iter, asn_error);
		break;

	default:
		break;

	}
}

void DecodeUplinkConfig(
	UplinkConfig_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint8    flag = 0;
	uint8    ext_flag = 0;
	uint32    bits_width = 0;
	uint32    preamble_bitmap = 0;
	
	ext_flag = Get_bits(buff, 1, bits_iter);

	o_decoded_field->initialUplinkBWP_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->uplinkBWP_ToReleaseList_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->uplinkBWP_ToAddModList_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->firstActiveUplinkBWP_Id_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->pusch_ServingCellConfig_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->carrierSwitching_exist = Get_bits(buff, 1, bits_iter);
	if(o_decoded_field->initialUplinkBWP_exist == TRUE)
	{
		DecodeBWP_UplinkDedicated(&o_decoded_field->initialUplinkBWP, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->uplinkBWP_ToReleaseList_exist == TRUE)
	{
		DecodeUplinkConfig_uplinkBWP_ToReleaseList(&o_decoded_field->uplinkBWP_ToReleaseList, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->uplinkBWP_ToAddModList_exist == TRUE)
	{
		DecodeUplinkConfig_uplinkBWP_ToAddModList(&o_decoded_field->uplinkBWP_ToAddModList, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->firstActiveUplinkBWP_Id_exist == TRUE)
	{
		DecodeBWP_Id(&o_decoded_field->firstActiveUplinkBWP_Id, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->pusch_ServingCellConfig_exist == TRUE)
	{
		DecodeUplinkConfig_pusch_ServingCellConfig(&o_decoded_field->pusch_ServingCellConfig, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->carrierSwitching_exist == TRUE)
	{
		DecodeUplinkConfig_carrierSwitching(&o_decoded_field->carrierSwitching, buff, bits_iter, asn_error);
	}

	if(ext_flag == 1)
	{
		//need to handle asn error.
	}
}

