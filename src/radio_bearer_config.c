/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * radio_bearer_config.c - codec the message of RadioBearerConfig
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#include <assert.h>
#include "mem.h"
#include "radio_bearer_config.h"


void EncodeRadioBearerConfig_srb3_ToRelease(
	RadioBearerConfig_srb3_ToRelease_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 0, bits_iter);
}

void EncodeRadioBearerConfig(
	RadioBearerConfig_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	/*flag for extension marker, within extension root. */
	PutBits(buff, 0, 1, bits_iter);
	if(i_encoded_field->srb_ToAddModList_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->srb3_ToRelease_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->drb_ToAddModList_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->drb_ToReleaseList_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->securityConfig_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->srb_ToAddModList_exist == TRUE)
	{
		EncodeSRB_ToAddModList(&i_encoded_field->srb_ToAddModList, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->srb3_ToRelease_exist == TRUE)
	{
		EncodeRadioBearerConfig_srb3_ToRelease(i_encoded_field->srb3_ToRelease, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->drb_ToAddModList_exist == TRUE)
	{
		EncodeDRB_ToAddModList(&i_encoded_field->drb_ToAddModList, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->drb_ToReleaseList_exist == TRUE)
	{
		EncodeDRB_ToReleaseList(&i_encoded_field->drb_ToReleaseList, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->securityConfig_exist == TRUE)
	{
		EncodeSecurityConfig(&i_encoded_field->securityConfig, buff, bits_iter, asn_error);
	}

}

void DecodeRadioBearerConfig_srb3_ToRelease(
	RadioBearerConfig_srb3_ToRelease_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = 0;
}

void DecodeRadioBearerConfig(
	RadioBearerConfig_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint8    flag = 0;
	uint8    ext_flag = 0;
	uint32    bits_width = 0;
	uint32    preamble_bitmap = 0;
	
	ext_flag = Get_bits(buff, 1, bits_iter);

	o_decoded_field->srb_ToAddModList_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->srb3_ToRelease_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->drb_ToAddModList_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->drb_ToReleaseList_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->securityConfig_exist = Get_bits(buff, 1, bits_iter);
	if(o_decoded_field->srb_ToAddModList_exist == TRUE)
	{
		DecodeSRB_ToAddModList(&o_decoded_field->srb_ToAddModList, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->srb3_ToRelease_exist == TRUE)
	{
		DecodeRadioBearerConfig_srb3_ToRelease(&o_decoded_field->srb3_ToRelease, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->drb_ToAddModList_exist == TRUE)
	{
		DecodeDRB_ToAddModList(&o_decoded_field->drb_ToAddModList, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->drb_ToReleaseList_exist == TRUE)
	{
		DecodeDRB_ToReleaseList(&o_decoded_field->drb_ToReleaseList, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->securityConfig_exist == TRUE)
	{
		DecodeSecurityConfig(&o_decoded_field->securityConfig, buff, bits_iter, asn_error);
	}

	if(ext_flag == 1)
	{
		//need to handle asn error.
	}
}

