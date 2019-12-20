/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * type_ii_codebook.c - codec the message of TypeII-Codebook
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#include <assert.h>
#include "mem.h"
#include "type_ii_codebook.h"


void EncodeTypeII_Codebook_maxNumberTxPortsPerResource(
	TypeII_Codebook_maxNumberTxPortsPerResource_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 3, bits_iter);
}

void EncodeTypeII_Codebook_amplitudeScalingType(
	TypeII_Codebook_amplitudeScalingType_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 1, bits_iter);
}

void EncodeTypeII_Codebook_amplitudeSubsetRestriction(
	TypeII_Codebook_amplitudeSubsetRestriction_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 0, bits_iter);
}

void EncodeTypeII_Codebook(
	TypeII_Codebook_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	if(i_encoded_field->amplitudeSubsetRestriction_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	EncodeTypeII_Codebook_maxNumberTxPortsPerResource(i_encoded_field->maxNumberTxPortsPerResource, buff, bits_iter, asn_error);

	PutBits(buff, i_encoded_field->maxNumberResources - 1, 6, bits_iter);

	PutBits(buff, i_encoded_field->totalNumberTxPorts - 2, 8, bits_iter);

	PutBits(buff, i_encoded_field->parameterLx - 2, 2, bits_iter);

	EncodeTypeII_Codebook_amplitudeScalingType(i_encoded_field->amplitudeScalingType, buff, bits_iter, asn_error);

	if(i_encoded_field->amplitudeSubsetRestriction_exist == TRUE)
	{
		EncodeTypeII_Codebook_amplitudeSubsetRestriction(i_encoded_field->amplitudeSubsetRestriction, buff, bits_iter, asn_error);
	}

	PutBits(buff, i_encoded_field->maxNumberCSI_RS_PerResourceSet - 1, 3, bits_iter);

}

void DecodeTypeII_Codebook_maxNumberTxPortsPerResource(
	TypeII_Codebook_maxNumberTxPortsPerResource_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = Get_bits(buff, 3, bits_iter);
}

void DecodeTypeII_Codebook_amplitudeScalingType(
	TypeII_Codebook_amplitudeScalingType_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = Get_bits(buff, 1, bits_iter);
}

void DecodeTypeII_Codebook_amplitudeSubsetRestriction(
	TypeII_Codebook_amplitudeSubsetRestriction_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = 0;
}

void DecodeTypeII_Codebook(
	TypeII_Codebook_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	o_decoded_field->amplitudeSubsetRestriction_exist = Get_bits(buff, 1, bits_iter);
	DecodeTypeII_Codebook_maxNumberTxPortsPerResource(&o_decoded_field->maxNumberTxPortsPerResource, buff, bits_iter, asn_error);
	o_decoded_field->maxNumberResources = Get_bits(buff, 6, bits_iter) + 1;
	o_decoded_field->totalNumberTxPorts = Get_bits(buff, 8, bits_iter) + 2;
	o_decoded_field->parameterLx = Get_bits(buff, 2, bits_iter) + 2;
	DecodeTypeII_Codebook_amplitudeScalingType(&o_decoded_field->amplitudeScalingType, buff, bits_iter, asn_error);
	if(o_decoded_field->amplitudeSubsetRestriction_exist == TRUE)
	{
		DecodeTypeII_Codebook_amplitudeSubsetRestriction(&o_decoded_field->amplitudeSubsetRestriction, buff, bits_iter, asn_error);
	}

	o_decoded_field->maxNumberCSI_RS_PerResourceSet = Get_bits(buff, 3, bits_iter) + 1;
}

