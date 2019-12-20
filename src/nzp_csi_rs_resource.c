/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * nzp_csi_rs_resource.c - codec the message of NZP-CSI-RS-Resource
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#include <assert.h>
#include "mem.h"
#include "nzp_csi_rs_resource.h"


void EncodeNZP_CSI_RS_Resource_powerControlOffsetSS(
	NZP_CSI_RS_Resource_powerControlOffsetSS_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 2, bits_iter);
}

void EncodeNZP_CSI_RS_Resource(
	NZP_CSI_RS_Resource_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	/*flag for extension marker, within extension root. */
	PutBits(buff, 0, 1, bits_iter);
	if(i_encoded_field->powerControlOffsetSS_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->periodicityAndOffset_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->qcl_InfoPeriodicCSI_RS_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	EncodeNZP_CSI_RS_ResourceId(&i_encoded_field->nzp_CSI_RS_ResourceId, buff, bits_iter, asn_error);

	EncodeCSI_RS_ResourceMapping(&i_encoded_field->resourceMapping, buff, bits_iter, asn_error);

	PutBits(buff, i_encoded_field->powerControlOffset + 8, 5, bits_iter);

	if(i_encoded_field->powerControlOffsetSS_exist == TRUE)
	{
		EncodeNZP_CSI_RS_Resource_powerControlOffsetSS(i_encoded_field->powerControlOffsetSS, buff, bits_iter, asn_error);
	}

	EncodeScramblingId(&i_encoded_field->scramblingID, buff, bits_iter, asn_error);

	if(i_encoded_field->periodicityAndOffset_exist == TRUE)
	{
		EncodeCSI_ResourcePeriodicityAndOffset(&i_encoded_field->periodicityAndOffset, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->qcl_InfoPeriodicCSI_RS_exist == TRUE)
	{
		EncodeTCI_StateId(&i_encoded_field->qcl_InfoPeriodicCSI_RS, buff, bits_iter, asn_error);
	}

}

void DecodeNZP_CSI_RS_Resource_powerControlOffsetSS(
	NZP_CSI_RS_Resource_powerControlOffsetSS_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = Get_bits(buff, 2, bits_iter);
}

void DecodeNZP_CSI_RS_Resource(
	NZP_CSI_RS_Resource_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint8    flag = 0;
	uint8    ext_flag = 0;
	uint32    bits_width = 0;
	uint32    preamble_bitmap = 0;
	
	ext_flag = Get_bits(buff, 1, bits_iter);

	o_decoded_field->powerControlOffsetSS_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->periodicityAndOffset_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->qcl_InfoPeriodicCSI_RS_exist = Get_bits(buff, 1, bits_iter);
	DecodeNZP_CSI_RS_ResourceId(&o_decoded_field->nzp_CSI_RS_ResourceId, buff, bits_iter, asn_error);
	DecodeCSI_RS_ResourceMapping(&o_decoded_field->resourceMapping, buff, bits_iter, asn_error);
	o_decoded_field->powerControlOffset = Get_bits(buff, 5, bits_iter) - 8;
	if(o_decoded_field->powerControlOffsetSS_exist == TRUE)
	{
		DecodeNZP_CSI_RS_Resource_powerControlOffsetSS(&o_decoded_field->powerControlOffsetSS, buff, bits_iter, asn_error);
	}

	DecodeScramblingId(&o_decoded_field->scramblingID, buff, bits_iter, asn_error);
	if(o_decoded_field->periodicityAndOffset_exist == TRUE)
	{
		DecodeCSI_ResourcePeriodicityAndOffset(&o_decoded_field->periodicityAndOffset, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->qcl_InfoPeriodicCSI_RS_exist == TRUE)
	{
		DecodeTCI_StateId(&o_decoded_field->qcl_InfoPeriodicCSI_RS, buff, bits_iter, asn_error);
	}

	if(ext_flag == 1)
	{
		//need to handle asn error.
	}
}

