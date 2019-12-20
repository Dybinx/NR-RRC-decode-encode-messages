/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * mac_parameters_xdd_diff.c - codec the message of MAC-ParametersXDD-Diff
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#include <assert.h>
#include "mem.h"
#include "mac_parameters_xdd_diff.h"


void EncodeMAC_ParametersXDD_Diff_skipUplinkTxDynamic(
	MAC_ParametersXDD_Diff_skipUplinkTxDynamic_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 0, bits_iter);
}

void EncodeMAC_ParametersXDD_Diff_logicalChannelSR_DelayTimer(
	MAC_ParametersXDD_Diff_logicalChannelSR_DelayTimer_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 0, bits_iter);
}

void EncodeMAC_ParametersXDD_Diff_longDRX_Cycle(
	MAC_ParametersXDD_Diff_longDRX_Cycle_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 0, bits_iter);
}

void EncodeMAC_ParametersXDD_Diff_shortDRX_Cycle(
	MAC_ParametersXDD_Diff_shortDRX_Cycle_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 0, bits_iter);
}

void EncodeMAC_ParametersXDD_Diff_multipleSR_Configurations(
	MAC_ParametersXDD_Diff_multipleSR_Configurations_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 0, bits_iter);
}

void EncodeMAC_ParametersXDD_Diff_multipleConfiguredGrants(
	MAC_ParametersXDD_Diff_multipleConfiguredGrants_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 0, bits_iter);
}

void EncodeMAC_ParametersXDD_Diff(
	MAC_ParametersXDD_Diff_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	/*flag for extension marker, within extension root. */
	PutBits(buff, 0, 1, bits_iter);
	if(i_encoded_field->skipUplinkTxDynamic_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->logicalChannelSR_DelayTimer_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->longDRX_Cycle_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->shortDRX_Cycle_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->multipleSR_Configurations_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->multipleConfiguredGrants_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->skipUplinkTxDynamic_exist == TRUE)
	{
		EncodeMAC_ParametersXDD_Diff_skipUplinkTxDynamic(i_encoded_field->skipUplinkTxDynamic, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->logicalChannelSR_DelayTimer_exist == TRUE)
	{
		EncodeMAC_ParametersXDD_Diff_logicalChannelSR_DelayTimer(i_encoded_field->logicalChannelSR_DelayTimer, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->longDRX_Cycle_exist == TRUE)
	{
		EncodeMAC_ParametersXDD_Diff_longDRX_Cycle(i_encoded_field->longDRX_Cycle, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->shortDRX_Cycle_exist == TRUE)
	{
		EncodeMAC_ParametersXDD_Diff_shortDRX_Cycle(i_encoded_field->shortDRX_Cycle, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->multipleSR_Configurations_exist == TRUE)
	{
		EncodeMAC_ParametersXDD_Diff_multipleSR_Configurations(i_encoded_field->multipleSR_Configurations, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->multipleConfiguredGrants_exist == TRUE)
	{
		EncodeMAC_ParametersXDD_Diff_multipleConfiguredGrants(i_encoded_field->multipleConfiguredGrants, buff, bits_iter, asn_error);
	}

}

void DecodeMAC_ParametersXDD_Diff_skipUplinkTxDynamic(
	MAC_ParametersXDD_Diff_skipUplinkTxDynamic_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = 0;
}

void DecodeMAC_ParametersXDD_Diff_logicalChannelSR_DelayTimer(
	MAC_ParametersXDD_Diff_logicalChannelSR_DelayTimer_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = 0;
}

void DecodeMAC_ParametersXDD_Diff_longDRX_Cycle(
	MAC_ParametersXDD_Diff_longDRX_Cycle_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = 0;
}

void DecodeMAC_ParametersXDD_Diff_shortDRX_Cycle(
	MAC_ParametersXDD_Diff_shortDRX_Cycle_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = 0;
}

void DecodeMAC_ParametersXDD_Diff_multipleSR_Configurations(
	MAC_ParametersXDD_Diff_multipleSR_Configurations_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = 0;
}

void DecodeMAC_ParametersXDD_Diff_multipleConfiguredGrants(
	MAC_ParametersXDD_Diff_multipleConfiguredGrants_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = 0;
}

void DecodeMAC_ParametersXDD_Diff(
	MAC_ParametersXDD_Diff_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint8    flag = 0;
	uint8    ext_flag = 0;
	uint32    bits_width = 0;
	uint32    preamble_bitmap = 0;
	
	ext_flag = Get_bits(buff, 1, bits_iter);

	o_decoded_field->skipUplinkTxDynamic_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->logicalChannelSR_DelayTimer_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->longDRX_Cycle_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->shortDRX_Cycle_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->multipleSR_Configurations_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->multipleConfiguredGrants_exist = Get_bits(buff, 1, bits_iter);
	if(o_decoded_field->skipUplinkTxDynamic_exist == TRUE)
	{
		DecodeMAC_ParametersXDD_Diff_skipUplinkTxDynamic(&o_decoded_field->skipUplinkTxDynamic, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->logicalChannelSR_DelayTimer_exist == TRUE)
	{
		DecodeMAC_ParametersXDD_Diff_logicalChannelSR_DelayTimer(&o_decoded_field->logicalChannelSR_DelayTimer, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->longDRX_Cycle_exist == TRUE)
	{
		DecodeMAC_ParametersXDD_Diff_longDRX_Cycle(&o_decoded_field->longDRX_Cycle, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->shortDRX_Cycle_exist == TRUE)
	{
		DecodeMAC_ParametersXDD_Diff_shortDRX_Cycle(&o_decoded_field->shortDRX_Cycle, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->multipleSR_Configurations_exist == TRUE)
	{
		DecodeMAC_ParametersXDD_Diff_multipleSR_Configurations(&o_decoded_field->multipleSR_Configurations, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->multipleConfiguredGrants_exist == TRUE)
	{
		DecodeMAC_ParametersXDD_Diff_multipleConfiguredGrants(&o_decoded_field->multipleConfiguredGrants, buff, bits_iter, asn_error);
	}

	if(ext_flag == 1)
	{
		//need to handle asn error.
	}
}

