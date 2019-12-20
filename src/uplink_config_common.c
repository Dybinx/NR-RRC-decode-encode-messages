/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * uplink_config_common.c - codec the message of UplinkConfigCommon
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#include <assert.h>
#include "mem.h"
#include "uplink_config_common.h"


void EncodeUplinkConfigCommon(
	UplinkConfigCommon_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	if(i_encoded_field->frequencyInfoUL_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->initialUplinkBWP_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->frequencyInfoUL_exist == TRUE)
	{
		EncodeFrequencyInfoUL(&i_encoded_field->frequencyInfoUL, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->initialUplinkBWP_exist == TRUE)
	{
		EncodeBWP_UplinkCommon(&i_encoded_field->initialUplinkBWP, buff, bits_iter, asn_error);
	}

	EncodeTimeAlignmentTimer(i_encoded_field->timeAlignmentTimerCommon, buff, bits_iter, asn_error);

}

void DecodeUplinkConfigCommon(
	UplinkConfigCommon_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	o_decoded_field->frequencyInfoUL_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->initialUplinkBWP_exist = Get_bits(buff, 1, bits_iter);
	if(o_decoded_field->frequencyInfoUL_exist == TRUE)
	{
		DecodeFrequencyInfoUL(&o_decoded_field->frequencyInfoUL, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->initialUplinkBWP_exist == TRUE)
	{
		DecodeBWP_UplinkCommon(&o_decoded_field->initialUplinkBWP, buff, bits_iter, asn_error);
	}

	DecodeTimeAlignmentTimer(&o_decoded_field->timeAlignmentTimerCommon, buff, bits_iter, asn_error);
}

