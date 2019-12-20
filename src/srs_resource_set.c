/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * srs_resource_set.c - codec the message of SRS-ResourceSet
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#include <assert.h>
#include "mem.h"
#include "srs_resource_set.h"


void EncodeSRS_ResourceSet_srs_ResourceIdList(
	SRS_ResourceSet_srs_ResourceIdList_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field->length - 1, 4, bits_iter);
	for(uint32 i = 0; i < i_encoded_field->length; i++)
	{
		EncodeSRS_ResourceId(&i_encoded_field->elm[i], buff, bits_iter, asn_error);
	}
}

void EncodeSRS_ResourceSet_aperiodic(
	SRS_ResourceSet_aperiodic_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	/*flag for extension marker, within extension root. */
	PutBits(buff, 0, 1, bits_iter);
	if(i_encoded_field->csi_RS_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->slotOffset_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	PutBits(buff, i_encoded_field->aperiodicSRS_ResourceTrigger - 1, 2, bits_iter);

	if(i_encoded_field->csi_RS_exist == TRUE)
	{
		EncodeNZP_CSI_RS_ResourceId(&i_encoded_field->csi_RS, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->slotOffset_exist == TRUE)
	{
		PutBits(buff, i_encoded_field->slotOffset - 1, 5, bits_iter);
	}

}

void EncodeSRS_ResourceSet_semi_persistent(
	SRS_ResourceSet_semi_persistent_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	/*flag for extension marker, within extension root. */
	PutBits(buff, 0, 1, bits_iter);
	if(i_encoded_field->associatedCSI_RS_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->associatedCSI_RS_exist == TRUE)
	{
		EncodeNZP_CSI_RS_ResourceId(&i_encoded_field->associatedCSI_RS, buff, bits_iter, asn_error);
	}

}

void EncodeSRS_ResourceSet_periodic(
	SRS_ResourceSet_periodic_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	/*flag for extension marker, within extension root. */
	PutBits(buff, 0, 1, bits_iter);
	if(i_encoded_field->associatedCSI_RS_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->associatedCSI_RS_exist == TRUE)
	{
		EncodeNZP_CSI_RS_ResourceId(&i_encoded_field->associatedCSI_RS, buff, bits_iter, asn_error);
	}

}

void EncodeSRS_ResourceSet_resourceType(
	SRS_ResourceSet_resourceType_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field->type, 2, bits_iter);
	switch (i_encoded_field->type)
	{
	case SRS_RESOURCESET_RESOURCETYPE_APERIODIC:
		EncodeSRS_ResourceSet_aperiodic(&i_encoded_field->a.aperiodic, buff, bits_iter, asn_error);
		break;

	case SRS_RESOURCESET_RESOURCETYPE_SEMI_PERSISTENT:
		EncodeSRS_ResourceSet_semi_persistent(&i_encoded_field->a.semi_persistent, buff, bits_iter, asn_error);
		break;

	case SRS_RESOURCESET_RESOURCETYPE_PERIODIC:
		EncodeSRS_ResourceSet_periodic(&i_encoded_field->a.periodic, buff, bits_iter, asn_error);
		break;

	default:
		break;	}
}

void EncodeSRS_ResourceSet_usage(
	SRS_ResourceSet_usage_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 2, bits_iter);
}

void EncodeSRS_ResourceSet_pathlossReferenceRS(
	SRS_ResourceSet_pathlossReferenceRS_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field->type, 1, bits_iter);
	switch (i_encoded_field->type)
	{
	case SRS_RESOURCESET_PATHLOSSREFERENCERS_SSB_INDEX:
		EncodeSSB_Index(&i_encoded_field->a.ssb_Index, buff, bits_iter, asn_error);
		break;

	case SRS_RESOURCESET_PATHLOSSREFERENCERS_CSI_RS_INDEX:
		EncodeNZP_CSI_RS_ResourceId(&i_encoded_field->a.csi_RS_Index, buff, bits_iter, asn_error);
		break;

	default:
		break;	}
}

void EncodeSRS_ResourceSet_srs_PowerControlAdjustmentStates(
	SRS_ResourceSet_srs_PowerControlAdjustmentStates_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 1, bits_iter);
}

void EncodeSRS_ResourceSet(
	SRS_ResourceSet_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	/*flag for extension marker, within extension root. */
	PutBits(buff, 0, 1, bits_iter);
	if(i_encoded_field->srs_ResourceIdList_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->alpha_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->p0_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->pathlossReferenceRS_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->srs_PowerControlAdjustmentStates_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	EncodeSRS_ResourceSetId(&i_encoded_field->srs_ResourceSetId, buff, bits_iter, asn_error);

	if(i_encoded_field->srs_ResourceIdList_exist == TRUE)
	{
		EncodeSRS_ResourceSet_srs_ResourceIdList(&i_encoded_field->srs_ResourceIdList, buff, bits_iter, asn_error);
	}

	EncodeSRS_ResourceSet_resourceType(&i_encoded_field->resourceType, buff, bits_iter, asn_error);

	EncodeSRS_ResourceSet_usage(i_encoded_field->usage, buff, bits_iter, asn_error);

	if(i_encoded_field->alpha_exist == TRUE)
	{
		EncodeAlpha(i_encoded_field->alpha, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->p0_exist == TRUE)
	{
		PutBits(buff, i_encoded_field->p0 + 202, 8, bits_iter);
	}

	if(i_encoded_field->pathlossReferenceRS_exist == TRUE)
	{
		EncodeSRS_ResourceSet_pathlossReferenceRS(&i_encoded_field->pathlossReferenceRS, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->srs_PowerControlAdjustmentStates_exist == TRUE)
	{
		EncodeSRS_ResourceSet_srs_PowerControlAdjustmentStates(i_encoded_field->srs_PowerControlAdjustmentStates, buff, bits_iter, asn_error);
	}

}

void DecodeSRS_ResourceSet_srs_ResourceIdList(
	SRS_ResourceSet_srs_ResourceIdList_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint32    count = 0;
	count = Get_bits(buff, 4, bits_iter) + 1;
	o_decoded_field->length = count;

	for(uint32 i = 0; i < count; i++)
	{
		DecodeSRS_ResourceId(&o_decoded_field->elm[i], buff, bits_iter, asn_error);
	}
}

void DecodeSRS_ResourceSet_aperiodic(
	SRS_ResourceSet_aperiodic_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint8    flag = 0;
	uint8    ext_flag = 0;
	uint32    bits_width = 0;
	uint32    preamble_bitmap = 0;
	
	ext_flag = Get_bits(buff, 1, bits_iter);

	o_decoded_field->csi_RS_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->slotOffset_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->aperiodicSRS_ResourceTrigger = Get_bits(buff, 2, bits_iter) + 1;
	if(o_decoded_field->csi_RS_exist == TRUE)
	{
		DecodeNZP_CSI_RS_ResourceId(&o_decoded_field->csi_RS, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->slotOffset_exist == TRUE)
	{
		o_decoded_field->slotOffset = Get_bits(buff, 5, bits_iter) + 1;
	}

	if(ext_flag == 1)
	{
		//need to handle asn error.
	}
}

void DecodeSRS_ResourceSet_semi_persistent(
	SRS_ResourceSet_semi_persistent_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint8    flag = 0;
	uint8    ext_flag = 0;
	uint32    bits_width = 0;
	uint32    preamble_bitmap = 0;
	
	ext_flag = Get_bits(buff, 1, bits_iter);

	o_decoded_field->associatedCSI_RS_exist = Get_bits(buff, 1, bits_iter);
	if(o_decoded_field->associatedCSI_RS_exist == TRUE)
	{
		DecodeNZP_CSI_RS_ResourceId(&o_decoded_field->associatedCSI_RS, buff, bits_iter, asn_error);
	}

	if(ext_flag == 1)
	{
		//need to handle asn error.
	}
}

void DecodeSRS_ResourceSet_periodic(
	SRS_ResourceSet_periodic_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint8    flag = 0;
	uint8    ext_flag = 0;
	uint32    bits_width = 0;
	uint32    preamble_bitmap = 0;
	
	ext_flag = Get_bits(buff, 1, bits_iter);

	o_decoded_field->associatedCSI_RS_exist = Get_bits(buff, 1, bits_iter);
	if(o_decoded_field->associatedCSI_RS_exist == TRUE)
	{
		DecodeNZP_CSI_RS_ResourceId(&o_decoded_field->associatedCSI_RS, buff, bits_iter, asn_error);
	}

	if(ext_flag == 1)
	{
		//need to handle asn error.
	}
}

void DecodeSRS_ResourceSet_resourceType(
	SRS_ResourceSet_resourceType_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint32    index = 0;

	index = Get_bits(buff, 2, bits_iter);
	o_decoded_field->type = index;
	switch (index)
	{
	case SRS_RESOURCESET_RESOURCETYPE_APERIODIC:
		DecodeSRS_ResourceSet_aperiodic(&o_decoded_field->a.aperiodic, buff, bits_iter, asn_error);
		break;

	case SRS_RESOURCESET_RESOURCETYPE_SEMI_PERSISTENT:
		DecodeSRS_ResourceSet_semi_persistent(&o_decoded_field->a.semi_persistent, buff, bits_iter, asn_error);
		break;

	case SRS_RESOURCESET_RESOURCETYPE_PERIODIC:
		DecodeSRS_ResourceSet_periodic(&o_decoded_field->a.periodic, buff, bits_iter, asn_error);
		break;

	default:
		break;

	}
}

void DecodeSRS_ResourceSet_usage(
	SRS_ResourceSet_usage_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = Get_bits(buff, 2, bits_iter);
}

void DecodeSRS_ResourceSet_pathlossReferenceRS(
	SRS_ResourceSet_pathlossReferenceRS_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint32    index = 0;

	index = Get_bits(buff, 1, bits_iter);
	o_decoded_field->type = index;
	switch (index)
	{
	case SRS_RESOURCESET_PATHLOSSREFERENCERS_SSB_INDEX:
		DecodeSSB_Index(&o_decoded_field->a.ssb_Index, buff, bits_iter, asn_error);
		break;

	case SRS_RESOURCESET_PATHLOSSREFERENCERS_CSI_RS_INDEX:
		DecodeNZP_CSI_RS_ResourceId(&o_decoded_field->a.csi_RS_Index, buff, bits_iter, asn_error);
		break;

	default:
		break;

	}
}

void DecodeSRS_ResourceSet_srs_PowerControlAdjustmentStates(
	SRS_ResourceSet_srs_PowerControlAdjustmentStates_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = Get_bits(buff, 1, bits_iter);
}

void DecodeSRS_ResourceSet(
	SRS_ResourceSet_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint8    flag = 0;
	uint8    ext_flag = 0;
	uint32    bits_width = 0;
	uint32    preamble_bitmap = 0;
	
	ext_flag = Get_bits(buff, 1, bits_iter);

	o_decoded_field->srs_ResourceIdList_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->alpha_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->p0_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->pathlossReferenceRS_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->srs_PowerControlAdjustmentStates_exist = Get_bits(buff, 1, bits_iter);
	DecodeSRS_ResourceSetId(&o_decoded_field->srs_ResourceSetId, buff, bits_iter, asn_error);
	if(o_decoded_field->srs_ResourceIdList_exist == TRUE)
	{
		DecodeSRS_ResourceSet_srs_ResourceIdList(&o_decoded_field->srs_ResourceIdList, buff, bits_iter, asn_error);
	}

	DecodeSRS_ResourceSet_resourceType(&o_decoded_field->resourceType, buff, bits_iter, asn_error);
	DecodeSRS_ResourceSet_usage(&o_decoded_field->usage, buff, bits_iter, asn_error);
	if(o_decoded_field->alpha_exist == TRUE)
	{
		DecodeAlpha(&o_decoded_field->alpha, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->p0_exist == TRUE)
	{
		o_decoded_field->p0 = Get_bits(buff, 8, bits_iter) - 202;
	}

	if(o_decoded_field->pathlossReferenceRS_exist == TRUE)
	{
		DecodeSRS_ResourceSet_pathlossReferenceRS(&o_decoded_field->pathlossReferenceRS, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->srs_PowerControlAdjustmentStates_exist == TRUE)
	{
		DecodeSRS_ResourceSet_srs_PowerControlAdjustmentStates(&o_decoded_field->srs_PowerControlAdjustmentStates, buff, bits_iter, asn_error);
	}

	if(ext_flag == 1)
	{
		//need to handle asn error.
	}
}

