/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * pucch_config.c - codec the message of PUCCH-Config
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#include <assert.h>
#include "mem.h"
#include "pucch_config.h"


void EncodePUCCH_Config_resourceSetToAddModList(
	PUCCH_Config_resourceSetToAddModList_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field->length - 1, 2, bits_iter);
	for(uint32 i = 0; i < i_encoded_field->length; i++)
	{
		EncodePUCCH_ResourceSet(&i_encoded_field->elm[i], buff, bits_iter, asn_error);
	}
}

void EncodePUCCH_Config_resourceSetToReleaseList(
	PUCCH_Config_resourceSetToReleaseList_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field->length - 1, 2, bits_iter);
	for(uint32 i = 0; i < i_encoded_field->length; i++)
	{
		EncodePUCCH_ResourceSetId(&i_encoded_field->elm[i], buff, bits_iter, asn_error);
	}
}

void EncodePUCCH_Config_resourceToAddModList(
	PUCCH_Config_resourceToAddModList_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field->length - 1, 7, bits_iter);
	for(uint32 i = 0; i < i_encoded_field->length; i++)
	{
		EncodePUCCH_Resource(&i_encoded_field->elm[i], buff, bits_iter, asn_error);
	}
}

void EncodePUCCH_Config_resourceToReleaseList(
	PUCCH_Config_resourceToReleaseList_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field->length - 1, 7, bits_iter);
	for(uint32 i = 0; i < i_encoded_field->length; i++)
	{
		EncodePUCCH_ResourceId(&i_encoded_field->elm[i], buff, bits_iter, asn_error);
	}
}

void EncodePUCCH_Config_release(
	PUCCH_Config_release_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
}

void EncodePUCCH_Config_format1(
	PUCCH_Config_format1_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field->type, 1, bits_iter);
	switch (i_encoded_field->type)
	{
	case PUCCH_CONFIG_FORMAT1_RELEASE:
		EncodePUCCH_Config_release(&i_encoded_field->a.release, buff, bits_iter, asn_error);
		break;

	case PUCCH_CONFIG_FORMAT1_SETUP:
		EncodePUCCH_FormatConfig(&i_encoded_field->a.setup, buff, bits_iter, asn_error);
		break;

	default:
		break;	}
}

void EncodePUCCH_Config_release_1(
	PUCCH_Config_release_1_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
}

void EncodePUCCH_Config_format2(
	PUCCH_Config_format2_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field->type, 1, bits_iter);
	switch (i_encoded_field->type)
	{
	case PUCCH_CONFIG_FORMAT2_RELEASE:
		EncodePUCCH_Config_release_1(&i_encoded_field->a.release, buff, bits_iter, asn_error);
		break;

	case PUCCH_CONFIG_FORMAT2_SETUP:
		EncodePUCCH_FormatConfig(&i_encoded_field->a.setup, buff, bits_iter, asn_error);
		break;

	default:
		break;	}
}

void EncodePUCCH_Config_release_2(
	PUCCH_Config_release_2_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
}

void EncodePUCCH_Config_format3(
	PUCCH_Config_format3_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field->type, 1, bits_iter);
	switch (i_encoded_field->type)
	{
	case PUCCH_CONFIG_FORMAT3_RELEASE:
		EncodePUCCH_Config_release_2(&i_encoded_field->a.release, buff, bits_iter, asn_error);
		break;

	case PUCCH_CONFIG_FORMAT3_SETUP:
		EncodePUCCH_FormatConfig(&i_encoded_field->a.setup, buff, bits_iter, asn_error);
		break;

	default:
		break;	}
}

void EncodePUCCH_Config_release_3(
	PUCCH_Config_release_3_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
}

void EncodePUCCH_Config_format4(
	PUCCH_Config_format4_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field->type, 1, bits_iter);
	switch (i_encoded_field->type)
	{
	case PUCCH_CONFIG_FORMAT4_RELEASE:
		EncodePUCCH_Config_release_3(&i_encoded_field->a.release, buff, bits_iter, asn_error);
		break;

	case PUCCH_CONFIG_FORMAT4_SETUP:
		EncodePUCCH_FormatConfig(&i_encoded_field->a.setup, buff, bits_iter, asn_error);
		break;

	default:
		break;	}
}

void EncodePUCCH_Config_schedulingRequestResourceToAddModList(
	PUCCH_Config_schedulingRequestResourceToAddModList_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field->length - 1, 3, bits_iter);
	for(uint32 i = 0; i < i_encoded_field->length; i++)
	{
		EncodeSchedulingRequestResourceConfig(&i_encoded_field->elm[i], buff, bits_iter, asn_error);
	}
}

void EncodePUCCH_Config_schedulingRequestResourceToReleaseList(
	PUCCH_Config_schedulingRequestResourceToReleaseList_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field->length - 1, 3, bits_iter);
	for(uint32 i = 0; i < i_encoded_field->length; i++)
	{
		EncodeSchedulingRequestResourceId(&i_encoded_field->elm[i], buff, bits_iter, asn_error);
	}
}

void EncodePUCCH_Config_multi_CSI_PUCCH_ResourceList(
	PUCCH_Config_multi_CSI_PUCCH_ResourceList_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field->length - 1, 1, bits_iter);
	for(uint32 i = 0; i < i_encoded_field->length; i++)
	{
		EncodePUCCH_ResourceId(&i_encoded_field->elm[i], buff, bits_iter, asn_error);
	}
}

void EncodePUCCH_Config_dl_DataToUL_ACK(
	PUCCH_Config_dl_DataToUL_ACK_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field->length - 1, 3, bits_iter);
	for(uint32 i = 0; i < i_encoded_field->length; i++)
	{
		PutBits(buff, i_encoded_field->elm[i], 4, bits_iter);
	}
}

void EncodePUCCH_Config_spatialRelationInfoToAddModList(
	PUCCH_Config_spatialRelationInfoToAddModList_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field->length - 1, 3, bits_iter);
	for(uint32 i = 0; i < i_encoded_field->length; i++)
	{
		EncodePUCCH_SpatialRelationInfo(&i_encoded_field->elm[i], buff, bits_iter, asn_error);
	}
}

void EncodePUCCH_Config_spatialRelationInfoToReleaseList(
	PUCCH_Config_spatialRelationInfoToReleaseList_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field->length - 1, 3, bits_iter);
	for(uint32 i = 0; i < i_encoded_field->length; i++)
	{
		EncodePUCCH_SpatialRelationInfoId(&i_encoded_field->elm[i], buff, bits_iter, asn_error);
	}
}

void EncodePUCCH_Config(
	PUCCH_Config_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	/*flag for extension marker, within extension root. */
	PutBits(buff, 0, 1, bits_iter);
	if(i_encoded_field->resourceSetToAddModList_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->resourceSetToReleaseList_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->resourceToAddModList_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->resourceToReleaseList_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->format1_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->format2_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->format3_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->format4_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->schedulingRequestResourceToAddModList_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->schedulingRequestResourceToReleaseList_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->multi_CSI_PUCCH_ResourceList_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->dl_DataToUL_ACK_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->spatialRelationInfoToAddModList_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->spatialRelationInfoToReleaseList_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->pucch_PowerControl_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->resourceSetToAddModList_exist == TRUE)
	{
		EncodePUCCH_Config_resourceSetToAddModList(&i_encoded_field->resourceSetToAddModList, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->resourceSetToReleaseList_exist == TRUE)
	{
		EncodePUCCH_Config_resourceSetToReleaseList(&i_encoded_field->resourceSetToReleaseList, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->resourceToAddModList_exist == TRUE)
	{
		EncodePUCCH_Config_resourceToAddModList(&i_encoded_field->resourceToAddModList, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->resourceToReleaseList_exist == TRUE)
	{
		EncodePUCCH_Config_resourceToReleaseList(&i_encoded_field->resourceToReleaseList, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->format1_exist == TRUE)
	{
		EncodePUCCH_Config_format1(&i_encoded_field->format1, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->format2_exist == TRUE)
	{
		EncodePUCCH_Config_format2(&i_encoded_field->format2, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->format3_exist == TRUE)
	{
		EncodePUCCH_Config_format3(&i_encoded_field->format3, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->format4_exist == TRUE)
	{
		EncodePUCCH_Config_format4(&i_encoded_field->format4, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->schedulingRequestResourceToAddModList_exist == TRUE)
	{
		EncodePUCCH_Config_schedulingRequestResourceToAddModList(&i_encoded_field->schedulingRequestResourceToAddModList, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->schedulingRequestResourceToReleaseList_exist == TRUE)
	{
		EncodePUCCH_Config_schedulingRequestResourceToReleaseList(&i_encoded_field->schedulingRequestResourceToReleaseList, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->multi_CSI_PUCCH_ResourceList_exist == TRUE)
	{
		EncodePUCCH_Config_multi_CSI_PUCCH_ResourceList(&i_encoded_field->multi_CSI_PUCCH_ResourceList, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->dl_DataToUL_ACK_exist == TRUE)
	{
		EncodePUCCH_Config_dl_DataToUL_ACK(&i_encoded_field->dl_DataToUL_ACK, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->spatialRelationInfoToAddModList_exist == TRUE)
	{
		EncodePUCCH_Config_spatialRelationInfoToAddModList(&i_encoded_field->spatialRelationInfoToAddModList, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->spatialRelationInfoToReleaseList_exist == TRUE)
	{
		EncodePUCCH_Config_spatialRelationInfoToReleaseList(&i_encoded_field->spatialRelationInfoToReleaseList, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->pucch_PowerControl_exist == TRUE)
	{
		EncodePUCCH_PowerControl(&i_encoded_field->pucch_PowerControl, buff, bits_iter, asn_error);
	}

}

void DecodePUCCH_Config_resourceSetToAddModList(
	PUCCH_Config_resourceSetToAddModList_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint32    count = 0;
	count = Get_bits(buff, 2, bits_iter) + 1;
	o_decoded_field->length = count;

	for(uint32 i = 0; i < count; i++)
	{
		DecodePUCCH_ResourceSet(&o_decoded_field->elm[i], buff, bits_iter, asn_error);
	}
}

void DecodePUCCH_Config_resourceSetToReleaseList(
	PUCCH_Config_resourceSetToReleaseList_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint32    count = 0;
	count = Get_bits(buff, 2, bits_iter) + 1;
	o_decoded_field->length = count;

	for(uint32 i = 0; i < count; i++)
	{
		DecodePUCCH_ResourceSetId(&o_decoded_field->elm[i], buff, bits_iter, asn_error);
	}
}

void DecodePUCCH_Config_resourceToAddModList(
	PUCCH_Config_resourceToAddModList_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint32    count = 0;
	count = Get_bits(buff, 7, bits_iter) + 1;
	o_decoded_field->length = count;

	for(uint32 i = 0; i < count; i++)
	{
		DecodePUCCH_Resource(&o_decoded_field->elm[i], buff, bits_iter, asn_error);
	}
}

void DecodePUCCH_Config_resourceToReleaseList(
	PUCCH_Config_resourceToReleaseList_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint32    count = 0;
	count = Get_bits(buff, 7, bits_iter) + 1;
	o_decoded_field->length = count;

	for(uint32 i = 0; i < count; i++)
	{
		DecodePUCCH_ResourceId(&o_decoded_field->elm[i], buff, bits_iter, asn_error);
	}
}

void DecodePUCCH_Config_release(
	PUCCH_Config_release_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
}

void DecodePUCCH_Config_format1(
	PUCCH_Config_format1_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint32    index = 0;

	index = Get_bits(buff, 1, bits_iter);
	o_decoded_field->type = index;
	switch (index)
	{
	case PUCCH_CONFIG_FORMAT1_RELEASE:
		DecodePUCCH_Config_release(&o_decoded_field->a.release, buff, bits_iter, asn_error);
		break;

	case PUCCH_CONFIG_FORMAT1_SETUP:
		DecodePUCCH_FormatConfig(&o_decoded_field->a.setup, buff, bits_iter, asn_error);
		break;

	default:
		break;

	}
}

void DecodePUCCH_Config_release_1(
	PUCCH_Config_release_1_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
}

void DecodePUCCH_Config_format2(
	PUCCH_Config_format2_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint32    index = 0;

	index = Get_bits(buff, 1, bits_iter);
	o_decoded_field->type = index;
	switch (index)
	{
	case PUCCH_CONFIG_FORMAT2_RELEASE:
		DecodePUCCH_Config_release_1(&o_decoded_field->a.release, buff, bits_iter, asn_error);
		break;

	case PUCCH_CONFIG_FORMAT2_SETUP:
		DecodePUCCH_FormatConfig(&o_decoded_field->a.setup, buff, bits_iter, asn_error);
		break;

	default:
		break;

	}
}

void DecodePUCCH_Config_release_2(
	PUCCH_Config_release_2_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
}

void DecodePUCCH_Config_format3(
	PUCCH_Config_format3_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint32    index = 0;

	index = Get_bits(buff, 1, bits_iter);
	o_decoded_field->type = index;
	switch (index)
	{
	case PUCCH_CONFIG_FORMAT3_RELEASE:
		DecodePUCCH_Config_release_2(&o_decoded_field->a.release, buff, bits_iter, asn_error);
		break;

	case PUCCH_CONFIG_FORMAT3_SETUP:
		DecodePUCCH_FormatConfig(&o_decoded_field->a.setup, buff, bits_iter, asn_error);
		break;

	default:
		break;

	}
}

void DecodePUCCH_Config_release_3(
	PUCCH_Config_release_3_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
}

void DecodePUCCH_Config_format4(
	PUCCH_Config_format4_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint32    index = 0;

	index = Get_bits(buff, 1, bits_iter);
	o_decoded_field->type = index;
	switch (index)
	{
	case PUCCH_CONFIG_FORMAT4_RELEASE:
		DecodePUCCH_Config_release_3(&o_decoded_field->a.release, buff, bits_iter, asn_error);
		break;

	case PUCCH_CONFIG_FORMAT4_SETUP:
		DecodePUCCH_FormatConfig(&o_decoded_field->a.setup, buff, bits_iter, asn_error);
		break;

	default:
		break;

	}
}

void DecodePUCCH_Config_schedulingRequestResourceToAddModList(
	PUCCH_Config_schedulingRequestResourceToAddModList_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint32    count = 0;
	count = Get_bits(buff, 3, bits_iter) + 1;
	o_decoded_field->length = count;

	for(uint32 i = 0; i < count; i++)
	{
		DecodeSchedulingRequestResourceConfig(&o_decoded_field->elm[i], buff, bits_iter, asn_error);
	}
}

void DecodePUCCH_Config_schedulingRequestResourceToReleaseList(
	PUCCH_Config_schedulingRequestResourceToReleaseList_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint32    count = 0;
	count = Get_bits(buff, 3, bits_iter) + 1;
	o_decoded_field->length = count;

	for(uint32 i = 0; i < count; i++)
	{
		DecodeSchedulingRequestResourceId(&o_decoded_field->elm[i], buff, bits_iter, asn_error);
	}
}

void DecodePUCCH_Config_multi_CSI_PUCCH_ResourceList(
	PUCCH_Config_multi_CSI_PUCCH_ResourceList_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint32    count = 0;
	count = Get_bits(buff, 1, bits_iter) + 1;
	o_decoded_field->length = count;

	for(uint32 i = 0; i < count; i++)
	{
		DecodePUCCH_ResourceId(&o_decoded_field->elm[i], buff, bits_iter, asn_error);
	}
}

void DecodePUCCH_Config_dl_DataToUL_ACK(
	PUCCH_Config_dl_DataToUL_ACK_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint32    count = 0;
	count = Get_bits(buff, 3, bits_iter) + 1;
	o_decoded_field->length = count;

	for(uint32 i = 0; i < count; i++)
	{
		o_decoded_field->elm[i] = Get_bits(buff, 4, bits_iter);
	}
}

void DecodePUCCH_Config_spatialRelationInfoToAddModList(
	PUCCH_Config_spatialRelationInfoToAddModList_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint32    count = 0;
	count = Get_bits(buff, 3, bits_iter) + 1;
	o_decoded_field->length = count;

	for(uint32 i = 0; i < count; i++)
	{
		DecodePUCCH_SpatialRelationInfo(&o_decoded_field->elm[i], buff, bits_iter, asn_error);
	}
}

void DecodePUCCH_Config_spatialRelationInfoToReleaseList(
	PUCCH_Config_spatialRelationInfoToReleaseList_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint32    count = 0;
	count = Get_bits(buff, 3, bits_iter) + 1;
	o_decoded_field->length = count;

	for(uint32 i = 0; i < count; i++)
	{
		DecodePUCCH_SpatialRelationInfoId(&o_decoded_field->elm[i], buff, bits_iter, asn_error);
	}
}

void DecodePUCCH_Config(
	PUCCH_Config_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint8    flag = 0;
	uint8    ext_flag = 0;
	uint32    bits_width = 0;
	uint32    preamble_bitmap = 0;
	
	ext_flag = Get_bits(buff, 1, bits_iter);

	o_decoded_field->resourceSetToAddModList_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->resourceSetToReleaseList_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->resourceToAddModList_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->resourceToReleaseList_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->format1_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->format2_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->format3_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->format4_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->schedulingRequestResourceToAddModList_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->schedulingRequestResourceToReleaseList_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->multi_CSI_PUCCH_ResourceList_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->dl_DataToUL_ACK_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->spatialRelationInfoToAddModList_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->spatialRelationInfoToReleaseList_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->pucch_PowerControl_exist = Get_bits(buff, 1, bits_iter);
	if(o_decoded_field->resourceSetToAddModList_exist == TRUE)
	{
		DecodePUCCH_Config_resourceSetToAddModList(&o_decoded_field->resourceSetToAddModList, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->resourceSetToReleaseList_exist == TRUE)
	{
		DecodePUCCH_Config_resourceSetToReleaseList(&o_decoded_field->resourceSetToReleaseList, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->resourceToAddModList_exist == TRUE)
	{
		DecodePUCCH_Config_resourceToAddModList(&o_decoded_field->resourceToAddModList, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->resourceToReleaseList_exist == TRUE)
	{
		DecodePUCCH_Config_resourceToReleaseList(&o_decoded_field->resourceToReleaseList, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->format1_exist == TRUE)
	{
		DecodePUCCH_Config_format1(&o_decoded_field->format1, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->format2_exist == TRUE)
	{
		DecodePUCCH_Config_format2(&o_decoded_field->format2, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->format3_exist == TRUE)
	{
		DecodePUCCH_Config_format3(&o_decoded_field->format3, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->format4_exist == TRUE)
	{
		DecodePUCCH_Config_format4(&o_decoded_field->format4, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->schedulingRequestResourceToAddModList_exist == TRUE)
	{
		DecodePUCCH_Config_schedulingRequestResourceToAddModList(&o_decoded_field->schedulingRequestResourceToAddModList, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->schedulingRequestResourceToReleaseList_exist == TRUE)
	{
		DecodePUCCH_Config_schedulingRequestResourceToReleaseList(&o_decoded_field->schedulingRequestResourceToReleaseList, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->multi_CSI_PUCCH_ResourceList_exist == TRUE)
	{
		DecodePUCCH_Config_multi_CSI_PUCCH_ResourceList(&o_decoded_field->multi_CSI_PUCCH_ResourceList, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->dl_DataToUL_ACK_exist == TRUE)
	{
		DecodePUCCH_Config_dl_DataToUL_ACK(&o_decoded_field->dl_DataToUL_ACK, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->spatialRelationInfoToAddModList_exist == TRUE)
	{
		DecodePUCCH_Config_spatialRelationInfoToAddModList(&o_decoded_field->spatialRelationInfoToAddModList, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->spatialRelationInfoToReleaseList_exist == TRUE)
	{
		DecodePUCCH_Config_spatialRelationInfoToReleaseList(&o_decoded_field->spatialRelationInfoToReleaseList, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->pucch_PowerControl_exist == TRUE)
	{
		DecodePUCCH_PowerControl(&o_decoded_field->pucch_PowerControl, buff, bits_iter, asn_error);
	}

	if(ext_flag == 1)
	{
		//need to handle asn error.
	}
}

