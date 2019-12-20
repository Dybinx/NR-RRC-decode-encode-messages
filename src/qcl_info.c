/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * qcl_info.c - codec the message of QCL-Info
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#include <assert.h>
#include "mem.h"
#include "qcl_info.h"


void EncodeQCL_Info_referenceSignal(
	QCL_Info_referenceSignal_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field->type, 1, bits_iter);
	switch (i_encoded_field->type)
	{
	case QCL_INFO_REFERENCESIGNAL_CSI_RS:
		EncodeNZP_CSI_RS_ResourceId(&i_encoded_field->a.csi_rs, buff, bits_iter, asn_error);
		break;

	case QCL_INFO_REFERENCESIGNAL_SSB:
		EncodeSSB_Index(&i_encoded_field->a.ssb, buff, bits_iter, asn_error);
		break;

	default:
		break;	}
}

void EncodeQCL_Info_qcl_Type(
	QCL_Info_qcl_Type_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 2, bits_iter);
}

void EncodeQCL_Info(
	QCL_Info_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	/*flag for extension marker, within extension root. */
	PutBits(buff, 0, 1, bits_iter);
	if(i_encoded_field->cell_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->bwp_Id_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->cell_exist == TRUE)
	{
		EncodeServCellIndex(&i_encoded_field->cell, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->bwp_Id_exist == TRUE)
	{
		EncodeBWP_Id(&i_encoded_field->bwp_Id, buff, bits_iter, asn_error);
	}

	EncodeQCL_Info_referenceSignal(&i_encoded_field->referenceSignal, buff, bits_iter, asn_error);

	EncodeQCL_Info_qcl_Type(i_encoded_field->qcl_Type, buff, bits_iter, asn_error);

}

void DecodeQCL_Info_referenceSignal(
	QCL_Info_referenceSignal_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint32    index = 0;

	index = Get_bits(buff, 1, bits_iter);
	o_decoded_field->type = index;
	switch (index)
	{
	case QCL_INFO_REFERENCESIGNAL_CSI_RS:
		DecodeNZP_CSI_RS_ResourceId(&o_decoded_field->a.csi_rs, buff, bits_iter, asn_error);
		break;

	case QCL_INFO_REFERENCESIGNAL_SSB:
		DecodeSSB_Index(&o_decoded_field->a.ssb, buff, bits_iter, asn_error);
		break;

	default:
		break;

	}
}

void DecodeQCL_Info_qcl_Type(
	QCL_Info_qcl_Type_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = Get_bits(buff, 2, bits_iter);
}

void DecodeQCL_Info(
	QCL_Info_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint8    flag = 0;
	uint8    ext_flag = 0;
	uint32    bits_width = 0;
	uint32    preamble_bitmap = 0;
	
	ext_flag = Get_bits(buff, 1, bits_iter);

	o_decoded_field->cell_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->bwp_Id_exist = Get_bits(buff, 1, bits_iter);
	if(o_decoded_field->cell_exist == TRUE)
	{
		DecodeServCellIndex(&o_decoded_field->cell, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->bwp_Id_exist == TRUE)
	{
		DecodeBWP_Id(&o_decoded_field->bwp_Id, buff, bits_iter, asn_error);
	}

	DecodeQCL_Info_referenceSignal(&o_decoded_field->referenceSignal, buff, bits_iter, asn_error);
	DecodeQCL_Info_qcl_Type(&o_decoded_field->qcl_Type, buff, bits_iter, asn_error);
	if(ext_flag == 1)
	{
		//need to handle asn error.
	}
}

