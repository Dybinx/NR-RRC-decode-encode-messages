/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * mac_parameters_common.c - codec the message of MAC-ParametersCommon
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#include <assert.h>
#include "mem.h"
#include "mac_parameters_common.h"


void EncodeMAC_ParametersCommon_lcp_Restriction(
	MAC_ParametersCommon_lcp_Restriction_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 0, bits_iter);
}

void EncodeMAC_ParametersCommon_pucch_SpatialRelInfoMAC_CE(
	MAC_ParametersCommon_pucch_SpatialRelInfoMAC_CE_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 0, bits_iter);
}

void EncodeMAC_ParametersCommon(
	MAC_ParametersCommon_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	/*flag for extension marker, within extension root. */
	PutBits(buff, 0, 1, bits_iter);
	if(i_encoded_field->lcp_Restriction_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->pucch_SpatialRelInfoMAC_CE_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->lcp_Restriction_exist == TRUE)
	{
		EncodeMAC_ParametersCommon_lcp_Restriction(i_encoded_field->lcp_Restriction, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->pucch_SpatialRelInfoMAC_CE_exist == TRUE)
	{
		EncodeMAC_ParametersCommon_pucch_SpatialRelInfoMAC_CE(i_encoded_field->pucch_SpatialRelInfoMAC_CE, buff, bits_iter, asn_error);
	}

}

void DecodeMAC_ParametersCommon_lcp_Restriction(
	MAC_ParametersCommon_lcp_Restriction_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = 0;
}

void DecodeMAC_ParametersCommon_pucch_SpatialRelInfoMAC_CE(
	MAC_ParametersCommon_pucch_SpatialRelInfoMAC_CE_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = 0;
}

void DecodeMAC_ParametersCommon(
	MAC_ParametersCommon_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint8    flag = 0;
	uint8    ext_flag = 0;
	uint32    bits_width = 0;
	uint32    preamble_bitmap = 0;
	
	ext_flag = Get_bits(buff, 1, bits_iter);

	o_decoded_field->lcp_Restriction_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->pucch_SpatialRelInfoMAC_CE_exist = Get_bits(buff, 1, bits_iter);
	if(o_decoded_field->lcp_Restriction_exist == TRUE)
	{
		DecodeMAC_ParametersCommon_lcp_Restriction(&o_decoded_field->lcp_Restriction, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->pucch_SpatialRelInfoMAC_CE_exist == TRUE)
	{
		DecodeMAC_ParametersCommon_pucch_SpatialRelInfoMAC_CE(&o_decoded_field->pucch_SpatialRelInfoMAC_CE, buff, bits_iter, asn_error);
	}

	if(ext_flag == 1)
	{
		//need to handle asn error.
	}
}

