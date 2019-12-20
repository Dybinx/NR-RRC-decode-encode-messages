/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * beam_management_ssb_csi_rs.c - codec the message of BeamManagementSSB-CSI-RS
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#include <assert.h>
#include "mem.h"
#include "beam_management_ssb_csi_rs.h"


void EncodeBeamManagementSSB_CSI_RS_maxNumberSSB_CSI_RS_ResourceOneTx(
	BeamManagementSSB_CSI_RS_maxNumberSSB_CSI_RS_ResourceOneTx_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 2, bits_iter);
}

void EncodeBeamManagementSSB_CSI_RS_maxNumberSSB_CSI_RS_ResourceTwoTx(
	BeamManagementSSB_CSI_RS_maxNumberSSB_CSI_RS_ResourceTwoTx_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 3, bits_iter);
}

void EncodeBeamManagementSSB_CSI_RS_supportedCSI_RS_Density(
	BeamManagementSSB_CSI_RS_supportedCSI_RS_Density_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 2, bits_iter);
}

void EncodeBeamManagementSSB_CSI_RS(
	BeamManagementSSB_CSI_RS_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	EncodeBeamManagementSSB_CSI_RS_maxNumberSSB_CSI_RS_ResourceOneTx(i_encoded_field->maxNumberSSB_CSI_RS_ResourceOneTx, buff, bits_iter, asn_error);

	EncodeBeamManagementSSB_CSI_RS_maxNumberSSB_CSI_RS_ResourceTwoTx(i_encoded_field->maxNumberSSB_CSI_RS_ResourceTwoTx, buff, bits_iter, asn_error);

	EncodeBeamManagementSSB_CSI_RS_supportedCSI_RS_Density(i_encoded_field->supportedCSI_RS_Density, buff, bits_iter, asn_error);

}

void DecodeBeamManagementSSB_CSI_RS_maxNumberSSB_CSI_RS_ResourceOneTx(
	BeamManagementSSB_CSI_RS_maxNumberSSB_CSI_RS_ResourceOneTx_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = Get_bits(buff, 2, bits_iter);
}

void DecodeBeamManagementSSB_CSI_RS_maxNumberSSB_CSI_RS_ResourceTwoTx(
	BeamManagementSSB_CSI_RS_maxNumberSSB_CSI_RS_ResourceTwoTx_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = Get_bits(buff, 3, bits_iter);
}

void DecodeBeamManagementSSB_CSI_RS_supportedCSI_RS_Density(
	BeamManagementSSB_CSI_RS_supportedCSI_RS_Density_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = Get_bits(buff, 2, bits_iter);
}

void DecodeBeamManagementSSB_CSI_RS(
	BeamManagementSSB_CSI_RS_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	DecodeBeamManagementSSB_CSI_RS_maxNumberSSB_CSI_RS_ResourceOneTx(&o_decoded_field->maxNumberSSB_CSI_RS_ResourceOneTx, buff, bits_iter, asn_error);
	DecodeBeamManagementSSB_CSI_RS_maxNumberSSB_CSI_RS_ResourceTwoTx(&o_decoded_field->maxNumberSSB_CSI_RS_ResourceTwoTx, buff, bits_iter, asn_error);
	DecodeBeamManagementSSB_CSI_RS_supportedCSI_RS_Density(&o_decoded_field->supportedCSI_RS_Density, buff, bits_iter, asn_error);
}

