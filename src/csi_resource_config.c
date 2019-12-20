/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * csi_resource_config.c - codec the message of CSI-ResourceConfig
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#include <assert.h>
#include "mem.h"
#include "csi_resource_config.h"


void EncodeCSI_ResourceConfig_nzp_CSI_RS_ResourceSetList(
	CSI_ResourceConfig_nzp_CSI_RS_ResourceSetList_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field->length - 1, 4, bits_iter);
	for(uint32 i = 0; i < i_encoded_field->length; i++)
	{
		EncodeNZP_CSI_RS_ResourceSetId(&i_encoded_field->elm[i], buff, bits_iter, asn_error);
	}
}

void EncodeCSI_ResourceConfig_csi_SSB_ResourceSetList(
	CSI_ResourceConfig_csi_SSB_ResourceSetList_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	for(uint32 i = 0; i < i_encoded_field->length; i++)
	{
		EncodeCSI_SSB_ResourceSetId(&i_encoded_field->elm[i], buff, bits_iter, asn_error);
	}
}

void EncodeCSI_ResourceConfig_nzp_CSI_RS_SSB(
	CSI_ResourceConfig_nzp_CSI_RS_SSB_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	if(i_encoded_field->nzp_CSI_RS_ResourceSetList_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->csi_SSB_ResourceSetList_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->nzp_CSI_RS_ResourceSetList_exist == TRUE)
	{
		EncodeCSI_ResourceConfig_nzp_CSI_RS_ResourceSetList(&i_encoded_field->nzp_CSI_RS_ResourceSetList, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->csi_SSB_ResourceSetList_exist == TRUE)
	{
		EncodeCSI_ResourceConfig_csi_SSB_ResourceSetList(&i_encoded_field->csi_SSB_ResourceSetList, buff, bits_iter, asn_error);
	}

}

void EncodeCSI_ResourceConfig_csi_IM_ResourceSetList(
	CSI_ResourceConfig_csi_IM_ResourceSetList_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field->length - 1, 4, bits_iter);
	for(uint32 i = 0; i < i_encoded_field->length; i++)
	{
		EncodeCSI_IM_ResourceSetId(&i_encoded_field->elm[i], buff, bits_iter, asn_error);
	}
}

void EncodeCSI_ResourceConfig_csi_RS_ResourceSetList(
	CSI_ResourceConfig_csi_RS_ResourceSetList_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field->type, 1, bits_iter);
	switch (i_encoded_field->type)
	{
	case CSI_RESOURCECONFIG_CSI_RS_RESOURCESETLIST_NZP_CSI_RS_SSB:
		EncodeCSI_ResourceConfig_nzp_CSI_RS_SSB(&i_encoded_field->a.nzp_CSI_RS_SSB, buff, bits_iter, asn_error);
		break;

	case CSI_RESOURCECONFIG_CSI_RS_RESOURCESETLIST_CSI_IM_RESOURCESETLIST:
		EncodeCSI_ResourceConfig_csi_IM_ResourceSetList(&i_encoded_field->a.csi_IM_ResourceSetList, buff, bits_iter, asn_error);
		break;

	default:
		break;	}
}

void EncodeCSI_ResourceConfig_resourceType(
	CSI_ResourceConfig_resourceType_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 2, bits_iter);
}

void EncodeCSI_ResourceConfig(
	CSI_ResourceConfig_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	/*flag for extension marker, within extension root. */
	PutBits(buff, 0, 1, bits_iter);
	EncodeCSI_ResourceConfigId(&i_encoded_field->csi_ResourceConfigId, buff, bits_iter, asn_error);

	EncodeCSI_ResourceConfig_csi_RS_ResourceSetList(&i_encoded_field->csi_RS_ResourceSetList, buff, bits_iter, asn_error);

	EncodeBWP_Id(&i_encoded_field->bwp_Id, buff, bits_iter, asn_error);

	EncodeCSI_ResourceConfig_resourceType(i_encoded_field->resourceType, buff, bits_iter, asn_error);

}

void DecodeCSI_ResourceConfig_nzp_CSI_RS_ResourceSetList(
	CSI_ResourceConfig_nzp_CSI_RS_ResourceSetList_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint32    count = 0;
	count = Get_bits(buff, 4, bits_iter) + 1;
	o_decoded_field->length = count;

	for(uint32 i = 0; i < count; i++)
	{
		DecodeNZP_CSI_RS_ResourceSetId(&o_decoded_field->elm[i], buff, bits_iter, asn_error);
	}
}

void DecodeCSI_ResourceConfig_csi_SSB_ResourceSetList(
	CSI_ResourceConfig_csi_SSB_ResourceSetList_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint32    count = 0;
	count = 1;
	o_decoded_field->length = count;

	for(uint32 i = 0; i < count; i++)
	{
		DecodeCSI_SSB_ResourceSetId(&o_decoded_field->elm[i], buff, bits_iter, asn_error);
	}
}

void DecodeCSI_ResourceConfig_nzp_CSI_RS_SSB(
	CSI_ResourceConfig_nzp_CSI_RS_SSB_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	o_decoded_field->nzp_CSI_RS_ResourceSetList_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->csi_SSB_ResourceSetList_exist = Get_bits(buff, 1, bits_iter);
	if(o_decoded_field->nzp_CSI_RS_ResourceSetList_exist == TRUE)
	{
		DecodeCSI_ResourceConfig_nzp_CSI_RS_ResourceSetList(&o_decoded_field->nzp_CSI_RS_ResourceSetList, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->csi_SSB_ResourceSetList_exist == TRUE)
	{
		DecodeCSI_ResourceConfig_csi_SSB_ResourceSetList(&o_decoded_field->csi_SSB_ResourceSetList, buff, bits_iter, asn_error);
	}

}

void DecodeCSI_ResourceConfig_csi_IM_ResourceSetList(
	CSI_ResourceConfig_csi_IM_ResourceSetList_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint32    count = 0;
	count = Get_bits(buff, 4, bits_iter) + 1;
	o_decoded_field->length = count;

	for(uint32 i = 0; i < count; i++)
	{
		DecodeCSI_IM_ResourceSetId(&o_decoded_field->elm[i], buff, bits_iter, asn_error);
	}
}

void DecodeCSI_ResourceConfig_csi_RS_ResourceSetList(
	CSI_ResourceConfig_csi_RS_ResourceSetList_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint32    index = 0;

	index = Get_bits(buff, 1, bits_iter);
	o_decoded_field->type = index;
	switch (index)
	{
	case CSI_RESOURCECONFIG_CSI_RS_RESOURCESETLIST_NZP_CSI_RS_SSB:
		DecodeCSI_ResourceConfig_nzp_CSI_RS_SSB(&o_decoded_field->a.nzp_CSI_RS_SSB, buff, bits_iter, asn_error);
		break;

	case CSI_RESOURCECONFIG_CSI_RS_RESOURCESETLIST_CSI_IM_RESOURCESETLIST:
		DecodeCSI_ResourceConfig_csi_IM_ResourceSetList(&o_decoded_field->a.csi_IM_ResourceSetList, buff, bits_iter, asn_error);
		break;

	default:
		break;

	}
}

void DecodeCSI_ResourceConfig_resourceType(
	CSI_ResourceConfig_resourceType_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = Get_bits(buff, 2, bits_iter);
}

void DecodeCSI_ResourceConfig(
	CSI_ResourceConfig_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint8    flag = 0;
	uint8    ext_flag = 0;
	uint32    bits_width = 0;
	uint32    preamble_bitmap = 0;
	
	ext_flag = Get_bits(buff, 1, bits_iter);

	DecodeCSI_ResourceConfigId(&o_decoded_field->csi_ResourceConfigId, buff, bits_iter, asn_error);
	DecodeCSI_ResourceConfig_csi_RS_ResourceSetList(&o_decoded_field->csi_RS_ResourceSetList, buff, bits_iter, asn_error);
	DecodeBWP_Id(&o_decoded_field->bwp_Id, buff, bits_iter, asn_error);
	DecodeCSI_ResourceConfig_resourceType(&o_decoded_field->resourceType, buff, bits_iter, asn_error);
	if(ext_flag == 1)
	{
		//need to handle asn error.
	}
}

