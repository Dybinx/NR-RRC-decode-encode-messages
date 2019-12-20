/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * ue_mrdc_capability_add_xdd_mode.c - codec the message of UE-MRDC-CapabilityAddXDD-Mode
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#include <assert.h>
#include "mem.h"
#include "ue_mrdc_capability_add_xdd_mode.h"


void EncodeUE_MRDC_CapabilityAddXDD_Mode(
	UE_MRDC_CapabilityAddXDD_Mode_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	if(i_encoded_field->measParametersMRDC_XDD_Diff_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->generalParametersMRDC_XDD_Diff_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->measParametersMRDC_XDD_Diff_exist == TRUE)
	{
		EncodeMeasParametersMRDC_XDD_Diff(&i_encoded_field->measParametersMRDC_XDD_Diff, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->generalParametersMRDC_XDD_Diff_exist == TRUE)
	{
		EncodeGeneralParametersMRDC_XDD_Diff(&i_encoded_field->generalParametersMRDC_XDD_Diff, buff, bits_iter, asn_error);
	}

}

void DecodeUE_MRDC_CapabilityAddXDD_Mode(
	UE_MRDC_CapabilityAddXDD_Mode_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	o_decoded_field->measParametersMRDC_XDD_Diff_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->generalParametersMRDC_XDD_Diff_exist = Get_bits(buff, 1, bits_iter);
	if(o_decoded_field->measParametersMRDC_XDD_Diff_exist == TRUE)
	{
		DecodeMeasParametersMRDC_XDD_Diff(&o_decoded_field->measParametersMRDC_XDD_Diff, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->generalParametersMRDC_XDD_Diff_exist == TRUE)
	{
		DecodeGeneralParametersMRDC_XDD_Diff(&o_decoded_field->generalParametersMRDC_XDD_Diff, buff, bits_iter, asn_error);
	}

}

