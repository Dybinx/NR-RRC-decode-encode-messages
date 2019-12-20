/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * bwp_downlink.c - codec the message of BWP-Downlink
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#include <assert.h>
#include "mem.h"
#include "bwp_downlink.h"


void EncodeBWP_Downlink(
	BWP_Downlink_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	/*flag for extension marker, within extension root. */
	PutBits(buff, 0, 1, bits_iter);
	if(i_encoded_field->bwp_Common_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->bwp_Dedicated_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	EncodeBWP_Id(&i_encoded_field->bwp_Id, buff, bits_iter, asn_error);

	if(i_encoded_field->bwp_Common_exist == TRUE)
	{
		EncodeBWP_DownlinkCommon(&i_encoded_field->bwp_Common, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->bwp_Dedicated_exist == TRUE)
	{
		EncodeBWP_DownlinkDedicated(&i_encoded_field->bwp_Dedicated, buff, bits_iter, asn_error);
	}

}

void DecodeBWP_Downlink(
	BWP_Downlink_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint8    flag = 0;
	uint8    ext_flag = 0;
	uint32    bits_width = 0;
	uint32    preamble_bitmap = 0;
	
	ext_flag = Get_bits(buff, 1, bits_iter);

	o_decoded_field->bwp_Common_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->bwp_Dedicated_exist = Get_bits(buff, 1, bits_iter);
	DecodeBWP_Id(&o_decoded_field->bwp_Id, buff, bits_iter, asn_error);
	if(o_decoded_field->bwp_Common_exist == TRUE)
	{
		DecodeBWP_DownlinkCommon(&o_decoded_field->bwp_Common, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->bwp_Dedicated_exist == TRUE)
	{
		DecodeBWP_DownlinkDedicated(&o_decoded_field->bwp_Dedicated, buff, bits_iter, asn_error);
	}

	if(ext_flag == 1)
	{
		//need to handle asn error.
	}
}

