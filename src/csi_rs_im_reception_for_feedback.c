/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * csi_rs_im_reception_for_feedback.c - codec the message of CSI-RS-IM-ReceptionForFeedback
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#include <assert.h>
#include "mem.h"
#include "csi_rs_im_reception_for_feedback.h"


void EncodeCSI_RS_IM_ReceptionForFeedback_maxNumberPortsAcrossNZP_CSI_RS_PerCC(
	CSI_RS_IM_ReceptionForFeedback_maxNumberPortsAcrossNZP_CSI_RS_PerCC_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 6, bits_iter);
}

void EncodeCSI_RS_IM_ReceptionForFeedback_maxNumberCS_IM_PerCC(
	CSI_RS_IM_ReceptionForFeedback_maxNumberCS_IM_PerCC_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 3, bits_iter);
}

void EncodeCSI_RS_IM_ReceptionForFeedback_maxNumberSimultaneousCSI_RS_ActBWP_AllCC(
	CSI_RS_IM_ReceptionForFeedback_maxNumberSimultaneousCSI_RS_ActBWP_AllCC_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 6, bits_iter);
}

void EncodeCSI_RS_IM_ReceptionForFeedback_totalNumberPortsSimultaneousCSI_RS_ActBWP_AllCC(
	CSI_RS_IM_ReceptionForFeedback_totalNumberPortsSimultaneousCSI_RS_ActBWP_AllCC_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 6, bits_iter);
}

void EncodeCSI_RS_IM_ReceptionForFeedback(
	CSI_RS_IM_ReceptionForFeedback_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field->maxNumberNZP_CSI_RS_PerCC - 1, 5, bits_iter);

	EncodeCSI_RS_IM_ReceptionForFeedback_maxNumberPortsAcrossNZP_CSI_RS_PerCC(i_encoded_field->maxNumberPortsAcrossNZP_CSI_RS_PerCC, buff, bits_iter, asn_error);

	EncodeCSI_RS_IM_ReceptionForFeedback_maxNumberCS_IM_PerCC(i_encoded_field->maxNumberCS_IM_PerCC, buff, bits_iter, asn_error);

	EncodeCSI_RS_IM_ReceptionForFeedback_maxNumberSimultaneousCSI_RS_ActBWP_AllCC(i_encoded_field->maxNumberSimultaneousCSI_RS_ActBWP_AllCC, buff, bits_iter, asn_error);

	EncodeCSI_RS_IM_ReceptionForFeedback_totalNumberPortsSimultaneousCSI_RS_ActBWP_AllCC(i_encoded_field->totalNumberPortsSimultaneousCSI_RS_ActBWP_AllCC, buff, bits_iter, asn_error);

}

void DecodeCSI_RS_IM_ReceptionForFeedback_maxNumberPortsAcrossNZP_CSI_RS_PerCC(
	CSI_RS_IM_ReceptionForFeedback_maxNumberPortsAcrossNZP_CSI_RS_PerCC_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = Get_bits(buff, 6, bits_iter);
}

void DecodeCSI_RS_IM_ReceptionForFeedback_maxNumberCS_IM_PerCC(
	CSI_RS_IM_ReceptionForFeedback_maxNumberCS_IM_PerCC_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = Get_bits(buff, 3, bits_iter);
}

void DecodeCSI_RS_IM_ReceptionForFeedback_maxNumberSimultaneousCSI_RS_ActBWP_AllCC(
	CSI_RS_IM_ReceptionForFeedback_maxNumberSimultaneousCSI_RS_ActBWP_AllCC_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = Get_bits(buff, 6, bits_iter);
}

void DecodeCSI_RS_IM_ReceptionForFeedback_totalNumberPortsSimultaneousCSI_RS_ActBWP_AllCC(
	CSI_RS_IM_ReceptionForFeedback_totalNumberPortsSimultaneousCSI_RS_ActBWP_AllCC_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = Get_bits(buff, 6, bits_iter);
}

void DecodeCSI_RS_IM_ReceptionForFeedback(
	CSI_RS_IM_ReceptionForFeedback_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	o_decoded_field->maxNumberNZP_CSI_RS_PerCC = Get_bits(buff, 5, bits_iter) + 1;
	DecodeCSI_RS_IM_ReceptionForFeedback_maxNumberPortsAcrossNZP_CSI_RS_PerCC(&o_decoded_field->maxNumberPortsAcrossNZP_CSI_RS_PerCC, buff, bits_iter, asn_error);
	DecodeCSI_RS_IM_ReceptionForFeedback_maxNumberCS_IM_PerCC(&o_decoded_field->maxNumberCS_IM_PerCC, buff, bits_iter, asn_error);
	DecodeCSI_RS_IM_ReceptionForFeedback_maxNumberSimultaneousCSI_RS_ActBWP_AllCC(&o_decoded_field->maxNumberSimultaneousCSI_RS_ActBWP_AllCC, buff, bits_iter, asn_error);
	DecodeCSI_RS_IM_ReceptionForFeedback_totalNumberPortsSimultaneousCSI_RS_ActBWP_AllCC(&o_decoded_field->totalNumberPortsSimultaneousCSI_RS_ActBWP_AllCC, buff, bits_iter, asn_error);
}

