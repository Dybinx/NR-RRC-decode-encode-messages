/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * mac_parameters.c - codec the message of MAC-Parameters
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#include <assert.h>
#include "mem.h"
#include "mac_parameters.h"


void EncodeMAC_Parameters(
	MAC_Parameters_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	if(i_encoded_field->mac_ParametersCommon_exist == TRUE)
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

	if(i_encoded_field->mac_ParametersCommon_exist == TRUE)
	{
		EncodeMAC_ParametersCommon(&i_encoded_field->mac_ParametersCommon, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->mac_ParametersXDD_Diff_exist == TRUE)
	{
		EncodeMAC_ParametersXDD_Diff(&i_encoded_field->mac_ParametersXDD_Diff, buff, bits_iter, asn_error);
	}

}

void DecodeMAC_Parameters(
	MAC_Parameters_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	o_decoded_field->mac_ParametersCommon_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->mac_ParametersXDD_Diff_exist = Get_bits(buff, 1, bits_iter);
	if(o_decoded_field->mac_ParametersCommon_exist == TRUE)
	{
		DecodeMAC_ParametersCommon(&o_decoded_field->mac_ParametersCommon, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->mac_ParametersXDD_Diff_exist == TRUE)
	{
		DecodeMAC_ParametersXDD_Diff(&o_decoded_field->mac_ParametersXDD_Diff, buff, bits_iter, asn_error);
	}

}

