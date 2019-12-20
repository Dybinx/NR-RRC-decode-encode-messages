/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * csi_im_resource.c - codec the message of CSI-IM-Resource
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#include <assert.h>
#include "mem.h"
#include "csi_im_resource.h"


void EncodeCSI_IM_Resource_subcarrierLocation_p0(
	CSI_IM_Resource_subcarrierLocation_p0_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 3, bits_iter);
}

void EncodeCSI_IM_Resource_pattern0(
	CSI_IM_Resource_pattern0_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	EncodeCSI_IM_Resource_subcarrierLocation_p0(i_encoded_field->subcarrierLocation_p0, buff, bits_iter, asn_error);

	PutBits(buff, i_encoded_field->symbolLocation_p0, 4, bits_iter);

}

void EncodeCSI_IM_Resource_subcarrierLocation_p1(
	CSI_IM_Resource_subcarrierLocation_p1_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 2, bits_iter);
}

void EncodeCSI_IM_Resource_pattern1(
	CSI_IM_Resource_pattern1_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	EncodeCSI_IM_Resource_subcarrierLocation_p1(i_encoded_field->subcarrierLocation_p1, buff, bits_iter, asn_error);

	PutBits(buff, i_encoded_field->symbolLocation_p1, 4, bits_iter);

}

void EncodeCSI_IM_Resource_csi_IM_ResourceElementPattern(
	CSI_IM_Resource_csi_IM_ResourceElementPattern_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field->type, 1, bits_iter);
	switch (i_encoded_field->type)
	{
	case CSI_IM_RESOURCE_CSI_IM_RESOURCEELEMENTPATTERN_PATTERN0:
		EncodeCSI_IM_Resource_pattern0(&i_encoded_field->a.pattern0, buff, bits_iter, asn_error);
		break;

	case CSI_IM_RESOURCE_CSI_IM_RESOURCEELEMENTPATTERN_PATTERN1:
		EncodeCSI_IM_Resource_pattern1(&i_encoded_field->a.pattern1, buff, bits_iter, asn_error);
		break;

	default:
		break;	}
}

void EncodeCSI_IM_Resource(
	CSI_IM_Resource_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	/*flag for extension marker, within extension root. */
	PutBits(buff, 0, 1, bits_iter);
	if(i_encoded_field->csi_IM_ResourceElementPattern_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->freqBand_exist == TRUE)
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

	EncodeCSI_IM_ResourceId(&i_encoded_field->csi_IM_ResourceId, buff, bits_iter, asn_error);

	if(i_encoded_field->csi_IM_ResourceElementPattern_exist == TRUE)
	{
		EncodeCSI_IM_Resource_csi_IM_ResourceElementPattern(&i_encoded_field->csi_IM_ResourceElementPattern, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->freqBand_exist == TRUE)
	{
		EncodeCSI_FrequencyOccupation(&i_encoded_field->freqBand, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->periodicityAndOffset_exist == TRUE)
	{
		EncodeCSI_ResourcePeriodicityAndOffset(&i_encoded_field->periodicityAndOffset, buff, bits_iter, asn_error);
	}

}

void DecodeCSI_IM_Resource_subcarrierLocation_p0(
	CSI_IM_Resource_subcarrierLocation_p0_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = Get_bits(buff, 3, bits_iter);
}

void DecodeCSI_IM_Resource_pattern0(
	CSI_IM_Resource_pattern0_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	DecodeCSI_IM_Resource_subcarrierLocation_p0(&o_decoded_field->subcarrierLocation_p0, buff, bits_iter, asn_error);
	o_decoded_field->symbolLocation_p0 = Get_bits(buff, 4, bits_iter);
}

void DecodeCSI_IM_Resource_subcarrierLocation_p1(
	CSI_IM_Resource_subcarrierLocation_p1_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = Get_bits(buff, 2, bits_iter);
}

void DecodeCSI_IM_Resource_pattern1(
	CSI_IM_Resource_pattern1_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	DecodeCSI_IM_Resource_subcarrierLocation_p1(&o_decoded_field->subcarrierLocation_p1, buff, bits_iter, asn_error);
	o_decoded_field->symbolLocation_p1 = Get_bits(buff, 4, bits_iter);
}

void DecodeCSI_IM_Resource_csi_IM_ResourceElementPattern(
	CSI_IM_Resource_csi_IM_ResourceElementPattern_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint32    index = 0;

	index = Get_bits(buff, 1, bits_iter);
	o_decoded_field->type = index;
	switch (index)
	{
	case CSI_IM_RESOURCE_CSI_IM_RESOURCEELEMENTPATTERN_PATTERN0:
		DecodeCSI_IM_Resource_pattern0(&o_decoded_field->a.pattern0, buff, bits_iter, asn_error);
		break;

	case CSI_IM_RESOURCE_CSI_IM_RESOURCEELEMENTPATTERN_PATTERN1:
		DecodeCSI_IM_Resource_pattern1(&o_decoded_field->a.pattern1, buff, bits_iter, asn_error);
		break;

	default:
		break;

	}
}

void DecodeCSI_IM_Resource(
	CSI_IM_Resource_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint8    flag = 0;
	uint8    ext_flag = 0;
	uint32    bits_width = 0;
	uint32    preamble_bitmap = 0;
	
	ext_flag = Get_bits(buff, 1, bits_iter);

	o_decoded_field->csi_IM_ResourceElementPattern_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->freqBand_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->periodicityAndOffset_exist = Get_bits(buff, 1, bits_iter);
	DecodeCSI_IM_ResourceId(&o_decoded_field->csi_IM_ResourceId, buff, bits_iter, asn_error);
	if(o_decoded_field->csi_IM_ResourceElementPattern_exist == TRUE)
	{
		DecodeCSI_IM_Resource_csi_IM_ResourceElementPattern(&o_decoded_field->csi_IM_ResourceElementPattern, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->freqBand_exist == TRUE)
	{
		DecodeCSI_FrequencyOccupation(&o_decoded_field->freqBand, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->periodicityAndOffset_exist == TRUE)
	{
		DecodeCSI_ResourcePeriodicityAndOffset(&o_decoded_field->periodicityAndOffset, buff, bits_iter, asn_error);
	}

	if(ext_flag == 1)
	{
		//need to handle asn error.
	}
}

