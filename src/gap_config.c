/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * gap_config.c - codec the message of GapConfig
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#include <assert.h>
#include "mem.h"
#include "gap_config.h"


void EncodeGapConfig_mgl(
	GapConfig_mgl_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 3, bits_iter);
}

void EncodeGapConfig_mgrp(
	GapConfig_mgrp_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 2, bits_iter);
}

void EncodeGapConfig_mgta(
	GapConfig_mgta_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 2, bits_iter);
}

void EncodeGapConfig(
	GapConfig_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	/*flag for extension marker, within extension root. */
	PutBits(buff, 0, 1, bits_iter);
	PutBits(buff, i_encoded_field->gapOffset, 8, bits_iter);

	EncodeGapConfig_mgl(i_encoded_field->mgl, buff, bits_iter, asn_error);

	EncodeGapConfig_mgrp(i_encoded_field->mgrp, buff, bits_iter, asn_error);

	EncodeGapConfig_mgta(i_encoded_field->mgta, buff, bits_iter, asn_error);

}

void DecodeGapConfig_mgl(
	GapConfig_mgl_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = Get_bits(buff, 3, bits_iter);
}

void DecodeGapConfig_mgrp(
	GapConfig_mgrp_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = Get_bits(buff, 2, bits_iter);
}

void DecodeGapConfig_mgta(
	GapConfig_mgta_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = Get_bits(buff, 2, bits_iter);
}

void DecodeGapConfig(
	GapConfig_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint8    flag = 0;
	uint8    ext_flag = 0;
	uint32    bits_width = 0;
	uint32    preamble_bitmap = 0;
	
	ext_flag = Get_bits(buff, 1, bits_iter);

	o_decoded_field->gapOffset = Get_bits(buff, 8, bits_iter);
	DecodeGapConfig_mgl(&o_decoded_field->mgl, buff, bits_iter, asn_error);
	DecodeGapConfig_mgrp(&o_decoded_field->mgrp, buff, bits_iter, asn_error);
	DecodeGapConfig_mgta(&o_decoded_field->mgta, buff, bits_iter, asn_error);
	if(ext_flag == 1)
	{
		//need to handle asn error.
	}
}

