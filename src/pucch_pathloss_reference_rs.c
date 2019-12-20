/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * pucch_pathloss_reference_rs.c - codec the message of PUCCH-PathlossReferenceRS
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#include <assert.h>
#include "mem.h"
#include "pucch_pathloss_reference_rs.h"


void EncodePUCCH_PathlossReferenceRS_referenceSignal(
	PUCCH_PathlossReferenceRS_referenceSignal_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field->type, 1, bits_iter);
	switch (i_encoded_field->type)
	{
	case PUCCH_PATHLOSSREFERENCERS_REFERENCESIGNAL_SSB_INDEX:
		EncodeSSB_Index(&i_encoded_field->a.ssb_Index, buff, bits_iter, asn_error);
		break;

	case PUCCH_PATHLOSSREFERENCERS_REFERENCESIGNAL_CSI_RS_INDEX:
		EncodeNZP_CSI_RS_ResourceId(&i_encoded_field->a.csi_RS_Index, buff, bits_iter, asn_error);
		break;

	default:
		break;	}
}

void EncodePUCCH_PathlossReferenceRS(
	PUCCH_PathlossReferenceRS_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	EncodePUCCH_PathlossReferenceRS_Id(&i_encoded_field->pucch_PathlossReferenceRS_Id, buff, bits_iter, asn_error);

	EncodePUCCH_PathlossReferenceRS_referenceSignal(&i_encoded_field->referenceSignal, buff, bits_iter, asn_error);

}

void DecodePUCCH_PathlossReferenceRS_referenceSignal(
	PUCCH_PathlossReferenceRS_referenceSignal_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint32    index = 0;

	index = Get_bits(buff, 1, bits_iter);
	o_decoded_field->type = index;
	switch (index)
	{
	case PUCCH_PATHLOSSREFERENCERS_REFERENCESIGNAL_SSB_INDEX:
		DecodeSSB_Index(&o_decoded_field->a.ssb_Index, buff, bits_iter, asn_error);
		break;

	case PUCCH_PATHLOSSREFERENCERS_REFERENCESIGNAL_CSI_RS_INDEX:
		DecodeNZP_CSI_RS_ResourceId(&o_decoded_field->a.csi_RS_Index, buff, bits_iter, asn_error);
		break;

	default:
		break;

	}
}

void DecodePUCCH_PathlossReferenceRS(
	PUCCH_PathlossReferenceRS_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	DecodePUCCH_PathlossReferenceRS_Id(&o_decoded_field->pucch_PathlossReferenceRS_Id, buff, bits_iter, asn_error);
	DecodePUCCH_PathlossReferenceRS_referenceSignal(&o_decoded_field->referenceSignal, buff, bits_iter, asn_error);
}

