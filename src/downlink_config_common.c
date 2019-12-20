/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * downlink_config_common.c - codec the message of DownlinkConfigCommon
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#include <assert.h>
#include "mem.h"
#include "downlink_config_common.h"


void EncodeDownlinkConfigCommon(
	DownlinkConfigCommon_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	/*flag for extension marker, within extension root. */
	PutBits(buff, 0, 1, bits_iter);
	if(i_encoded_field->frequencyInfoDL_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->initialDownlinkBWP_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->frequencyInfoDL_exist == TRUE)
	{
		EncodeFrequencyInfoDL(&i_encoded_field->frequencyInfoDL, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->initialDownlinkBWP_exist == TRUE)
	{
		EncodeBWP_DownlinkCommon(&i_encoded_field->initialDownlinkBWP, buff, bits_iter, asn_error);
	}

}

void DecodeDownlinkConfigCommon(
	DownlinkConfigCommon_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint8    flag = 0;
	uint8    ext_flag = 0;
	uint32    bits_width = 0;
	uint32    preamble_bitmap = 0;
	
	ext_flag = Get_bits(buff, 1, bits_iter);

	o_decoded_field->frequencyInfoDL_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->initialDownlinkBWP_exist = Get_bits(buff, 1, bits_iter);
	if(o_decoded_field->frequencyInfoDL_exist == TRUE)
	{
		DecodeFrequencyInfoDL(&o_decoded_field->frequencyInfoDL, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->initialDownlinkBWP_exist == TRUE)
	{
		DecodeBWP_DownlinkCommon(&o_decoded_field->initialDownlinkBWP, buff, bits_iter, asn_error);
	}

	if(ext_flag == 1)
	{
		//need to handle asn error.
	}
}

