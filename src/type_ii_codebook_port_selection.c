/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * type_ii_codebook_port_selection.c - codec the message of TypeII-CodebookPortSelection
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#include <assert.h>
#include "mem.h"
#include "type_ii_codebook_port_selection.h"


void EncodeTypeII_CodebookPortSelection_maxNumberTxPortsPerResource(
	TypeII_CodebookPortSelection_maxNumberTxPortsPerResource_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 3, bits_iter);
}

void EncodeTypeII_CodebookPortSelection_amplitudeScalingType(
	TypeII_CodebookPortSelection_amplitudeScalingType_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 1, bits_iter);
}

void EncodeTypeII_CodebookPortSelection(
	TypeII_CodebookPortSelection_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	EncodeTypeII_CodebookPortSelection_maxNumberTxPortsPerResource(i_encoded_field->maxNumberTxPortsPerResource, buff, bits_iter, asn_error);

	PutBits(buff, i_encoded_field->maxNumberResources - 1, 6, bits_iter);

	PutBits(buff, i_encoded_field->totalNumberTxPorts - 2, 8, bits_iter);

	PutBits(buff, i_encoded_field->parameterLx - 2, 2, bits_iter);

	EncodeTypeII_CodebookPortSelection_amplitudeScalingType(i_encoded_field->amplitudeScalingType, buff, bits_iter, asn_error);

	PutBits(buff, i_encoded_field->maxNumberCSI_RS_PerResourceSet - 1, 3, bits_iter);

}

void DecodeTypeII_CodebookPortSelection_maxNumberTxPortsPerResource(
	TypeII_CodebookPortSelection_maxNumberTxPortsPerResource_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = Get_bits(buff, 3, bits_iter);
}

void DecodeTypeII_CodebookPortSelection_amplitudeScalingType(
	TypeII_CodebookPortSelection_amplitudeScalingType_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = Get_bits(buff, 1, bits_iter);
}

void DecodeTypeII_CodebookPortSelection(
	TypeII_CodebookPortSelection_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	DecodeTypeII_CodebookPortSelection_maxNumberTxPortsPerResource(&o_decoded_field->maxNumberTxPortsPerResource, buff, bits_iter, asn_error);
	o_decoded_field->maxNumberResources = Get_bits(buff, 6, bits_iter) + 1;
	o_decoded_field->totalNumberTxPorts = Get_bits(buff, 8, bits_iter) + 2;
	o_decoded_field->parameterLx = Get_bits(buff, 2, bits_iter) + 2;
	DecodeTypeII_CodebookPortSelection_amplitudeScalingType(&o_decoded_field->amplitudeScalingType, buff, bits_iter, asn_error);
	o_decoded_field->maxNumberCSI_RS_PerResourceSet = Get_bits(buff, 3, bits_iter) + 1;
}

