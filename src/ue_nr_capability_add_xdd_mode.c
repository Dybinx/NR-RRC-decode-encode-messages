/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * ue_nr_capability_add_xdd_mode.c - codec the message of UE-NR-CapabilityAddXDD-Mode
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#include <assert.h>
#include "mem.h"
#include "ue_nr_capability_add_xdd_mode.h"


void EncodeUE_NR_CapabilityAddXDD_Mode(
	UE_NR_CapabilityAddXDD_Mode_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	if(i_encoded_field->phy_ParametersXDD_Diff_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->mac_ParametersXDD_Diff_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->measParametersXDD_Diff_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->phy_ParametersXDD_Diff_exist == TRUE)
	{
		EncodePhy_ParametersXDD_Diff(&i_encoded_field->phy_ParametersXDD_Diff, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->mac_ParametersXDD_Diff_exist == TRUE)
	{
		EncodeMAC_ParametersXDD_Diff(&i_encoded_field->mac_ParametersXDD_Diff, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->measParametersXDD_Diff_exist == TRUE)
	{
		EncodeMeasParametersXDD_Diff(&i_encoded_field->measParametersXDD_Diff, buff, bits_iter, asn_error);
	}

}

void DecodeUE_NR_CapabilityAddXDD_Mode(
	UE_NR_CapabilityAddXDD_Mode_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	o_decoded_field->phy_ParametersXDD_Diff_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->mac_ParametersXDD_Diff_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->measParametersXDD_Diff_exist = Get_bits(buff, 1, bits_iter);
	if(o_decoded_field->phy_ParametersXDD_Diff_exist == TRUE)
	{
		DecodePhy_ParametersXDD_Diff(&o_decoded_field->phy_ParametersXDD_Diff, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->mac_ParametersXDD_Diff_exist == TRUE)
	{
		DecodeMAC_ParametersXDD_Diff(&o_decoded_field->mac_ParametersXDD_Diff, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->measParametersXDD_Diff_exist == TRUE)
	{
		DecodeMeasParametersXDD_Diff(&o_decoded_field->measParametersXDD_Diff, buff, bits_iter, asn_error);
	}

}

