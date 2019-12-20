/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * tdd_ul_dl_config_common.c - codec the message of TDD-UL-DL-ConfigCommon
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#include <assert.h>
#include "mem.h"
#include "tdd_ul_dl_config_common.h"


void EncodeTDD_UL_DL_ConfigCommon(
	TDD_UL_DL_ConfigCommon_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	/*flag for extension marker, within extension root. */
	PutBits(buff, 0, 1, bits_iter);
	if(i_encoded_field->pattern2_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	EncodeSubcarrierSpacing(i_encoded_field->referenceSubcarrierSpacing, buff, bits_iter, asn_error);

	EncodeTDD_UL_DL_Pattern(&i_encoded_field->pattern1, buff, bits_iter, asn_error);

	if(i_encoded_field->pattern2_exist == TRUE)
	{
		EncodeTDD_UL_DL_Pattern(&i_encoded_field->pattern2, buff, bits_iter, asn_error);
	}

}

void DecodeTDD_UL_DL_ConfigCommon(
	TDD_UL_DL_ConfigCommon_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint8    flag = 0;
	uint8    ext_flag = 0;
	uint32    bits_width = 0;
	uint32    preamble_bitmap = 0;
	
	ext_flag = Get_bits(buff, 1, bits_iter);

	o_decoded_field->pattern2_exist = Get_bits(buff, 1, bits_iter);
	DecodeSubcarrierSpacing(&o_decoded_field->referenceSubcarrierSpacing, buff, bits_iter, asn_error);
	DecodeTDD_UL_DL_Pattern(&o_decoded_field->pattern1, buff, bits_iter, asn_error);
	if(o_decoded_field->pattern2_exist == TRUE)
	{
		DecodeTDD_UL_DL_Pattern(&o_decoded_field->pattern2, buff, bits_iter, asn_error);
	}

	if(ext_flag == 1)
	{
		//need to handle asn error.
	}
}

