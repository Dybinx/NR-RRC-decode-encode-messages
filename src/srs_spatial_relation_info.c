/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * srs_spatial_relation_info.c - codec the message of SRS-SpatialRelationInfo
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#include <assert.h>
#include "mem.h"
#include "srs_spatial_relation_info.h"


void EncodeSRS_SpatialRelationInfo_srs(
	SRS_SpatialRelationInfo_srs_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	EncodeSRS_ResourceId(&i_encoded_field->resourceId, buff, bits_iter, asn_error);

	EncodeBWP_Id(&i_encoded_field->uplinkBWP, buff, bits_iter, asn_error);

}

void EncodeSRS_SpatialRelationInfo_referenceSignal(
	SRS_SpatialRelationInfo_referenceSignal_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field->type, 2, bits_iter);
	switch (i_encoded_field->type)
	{
	case SRS_SPATIALRELATIONINFO_REFERENCESIGNAL_SSB_INDEX:
		EncodeSSB_Index(&i_encoded_field->a.ssb_Index, buff, bits_iter, asn_error);
		break;

	case SRS_SPATIALRELATIONINFO_REFERENCESIGNAL_CSI_RS_INDEX:
		EncodeNZP_CSI_RS_ResourceId(&i_encoded_field->a.csi_RS_Index, buff, bits_iter, asn_error);
		break;

	case SRS_SPATIALRELATIONINFO_REFERENCESIGNAL_SRS:
		EncodeSRS_SpatialRelationInfo_srs(&i_encoded_field->a.srs, buff, bits_iter, asn_error);
		break;

	default:
		break;	}
}

void EncodeSRS_SpatialRelationInfo(
	SRS_SpatialRelationInfo_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	if(i_encoded_field->servingCellId_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->servingCellId_exist == TRUE)
	{
		EncodeServCellIndex(&i_encoded_field->servingCellId, buff, bits_iter, asn_error);
	}

	EncodeSRS_SpatialRelationInfo_referenceSignal(&i_encoded_field->referenceSignal, buff, bits_iter, asn_error);

}

void DecodeSRS_SpatialRelationInfo_srs(
	SRS_SpatialRelationInfo_srs_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	DecodeSRS_ResourceId(&o_decoded_field->resourceId, buff, bits_iter, asn_error);
	DecodeBWP_Id(&o_decoded_field->uplinkBWP, buff, bits_iter, asn_error);
}

void DecodeSRS_SpatialRelationInfo_referenceSignal(
	SRS_SpatialRelationInfo_referenceSignal_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint32    index = 0;

	index = Get_bits(buff, 2, bits_iter);
	o_decoded_field->type = index;
	switch (index)
	{
	case SRS_SPATIALRELATIONINFO_REFERENCESIGNAL_SSB_INDEX:
		DecodeSSB_Index(&o_decoded_field->a.ssb_Index, buff, bits_iter, asn_error);
		break;

	case SRS_SPATIALRELATIONINFO_REFERENCESIGNAL_CSI_RS_INDEX:
		DecodeNZP_CSI_RS_ResourceId(&o_decoded_field->a.csi_RS_Index, buff, bits_iter, asn_error);
		break;

	case SRS_SPATIALRELATIONINFO_REFERENCESIGNAL_SRS:
		DecodeSRS_SpatialRelationInfo_srs(&o_decoded_field->a.srs, buff, bits_iter, asn_error);
		break;

	default:
		break;

	}
}

void DecodeSRS_SpatialRelationInfo(
	SRS_SpatialRelationInfo_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	o_decoded_field->servingCellId_exist = Get_bits(buff, 1, bits_iter);
	if(o_decoded_field->servingCellId_exist == TRUE)
	{
		DecodeServCellIndex(&o_decoded_field->servingCellId, buff, bits_iter, asn_error);
	}

	DecodeSRS_SpatialRelationInfo_referenceSignal(&o_decoded_field->referenceSignal, buff, bits_iter, asn_error);
}

