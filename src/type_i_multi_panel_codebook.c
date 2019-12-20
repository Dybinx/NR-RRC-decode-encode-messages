/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * type_i_multi_panel_codebook.c - codec the message of TypeI-MultiPanelCodebook
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#include <assert.h>
#include "mem.h"
#include "type_i_multi_panel_codebook.h"


void EncodeTypeI_MultiPanelCodebook_maxNumberTxPortsPerResource(
	TypeI_MultiPanelCodebook_maxNumberTxPortsPerResource_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 2, bits_iter);
}

void EncodeTypeI_MultiPanelCodebook_supportedCodebookMode(
	TypeI_MultiPanelCodebook_supportedCodebookMode_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 2, bits_iter);
}

void EncodeTypeI_MultiPanelCodebook_supportedNumberPanels(
	TypeI_MultiPanelCodebook_supportedNumberPanels_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 1, bits_iter);
}

void EncodeTypeI_MultiPanelCodebook(
	TypeI_MultiPanelCodebook_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	EncodeTypeI_MultiPanelCodebook_maxNumberTxPortsPerResource(i_encoded_field->maxNumberTxPortsPerResource, buff, bits_iter, asn_error);

	PutBits(buff, i_encoded_field->maxNumberResources - 1, 6, bits_iter);

	PutBits(buff, i_encoded_field->totalNumberTxPorts - 2, 8, bits_iter);

	EncodeTypeI_MultiPanelCodebook_supportedCodebookMode(i_encoded_field->supportedCodebookMode, buff, bits_iter, asn_error);

	EncodeTypeI_MultiPanelCodebook_supportedNumberPanels(i_encoded_field->supportedNumberPanels, buff, bits_iter, asn_error);

	PutBits(buff, i_encoded_field->maxNumberCSI_RS_PerResourceSet - 1, 3, bits_iter);

}

void DecodeTypeI_MultiPanelCodebook_maxNumberTxPortsPerResource(
	TypeI_MultiPanelCodebook_maxNumberTxPortsPerResource_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = Get_bits(buff, 2, bits_iter);
}

void DecodeTypeI_MultiPanelCodebook_supportedCodebookMode(
	TypeI_MultiPanelCodebook_supportedCodebookMode_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = Get_bits(buff, 2, bits_iter);
}

void DecodeTypeI_MultiPanelCodebook_supportedNumberPanels(
	TypeI_MultiPanelCodebook_supportedNumberPanels_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = Get_bits(buff, 1, bits_iter);
}

void DecodeTypeI_MultiPanelCodebook(
	TypeI_MultiPanelCodebook_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	DecodeTypeI_MultiPanelCodebook_maxNumberTxPortsPerResource(&o_decoded_field->maxNumberTxPortsPerResource, buff, bits_iter, asn_error);
	o_decoded_field->maxNumberResources = Get_bits(buff, 6, bits_iter) + 1;
	o_decoded_field->totalNumberTxPorts = Get_bits(buff, 8, bits_iter) + 2;
	DecodeTypeI_MultiPanelCodebook_supportedCodebookMode(&o_decoded_field->supportedCodebookMode, buff, bits_iter, asn_error);
	DecodeTypeI_MultiPanelCodebook_supportedNumberPanels(&o_decoded_field->supportedNumberPanels, buff, bits_iter, asn_error);
	o_decoded_field->maxNumberCSI_RS_PerResourceSet = Get_bits(buff, 3, bits_iter) + 1;
}

