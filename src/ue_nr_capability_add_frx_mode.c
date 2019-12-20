/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * ue_nr_capability_add_frx_mode.c - codec the message of UE-NR-CapabilityAddFRX-Mode
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#include <assert.h>
#include "mem.h"
#include "ue_nr_capability_add_frx_mode.h"


void EncodeUE_NR_CapabilityAddFRX_Mode(
	UE_NR_CapabilityAddFRX_Mode_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	if(i_encoded_field->phy_ParametersFRX_Diff_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->measParametersFRX_Diff_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->phy_ParametersFRX_Diff_exist == TRUE)
	{
		EncodePhy_ParametersFRX_Diff(&i_encoded_field->phy_ParametersFRX_Diff, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->measParametersFRX_Diff_exist == TRUE)
	{
		EncodeMeasParametersFRX_Diff(&i_encoded_field->measParametersFRX_Diff, buff, bits_iter, asn_error);
	}

}

void DecodeUE_NR_CapabilityAddFRX_Mode(
	UE_NR_CapabilityAddFRX_Mode_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	o_decoded_field->phy_ParametersFRX_Diff_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->measParametersFRX_Diff_exist = Get_bits(buff, 1, bits_iter);
	if(o_decoded_field->phy_ParametersFRX_Diff_exist == TRUE)
	{
		DecodePhy_ParametersFRX_Diff(&o_decoded_field->phy_ParametersFRX_Diff, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->measParametersFRX_Diff_exist == TRUE)
	{
		DecodeMeasParametersFRX_Diff(&o_decoded_field->measParametersFRX_Diff, buff, bits_iter, asn_error);
	}

}

