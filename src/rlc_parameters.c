/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * rlc_parameters.c - codec the message of RLC-Parameters
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#include <assert.h>
#include "mem.h"
#include "rlc_parameters.h"


void EncodeRLC_Parameters_am_WithShortSN(
	RLC_Parameters_am_WithShortSN_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 0, bits_iter);
}

void EncodeRLC_Parameters_um_WithShortSN(
	RLC_Parameters_um_WithShortSN_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 0, bits_iter);
}

void EncodeRLC_Parameters_um_WIthLongSN(
	RLC_Parameters_um_WIthLongSN_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 0, bits_iter);
}

void EncodeRLC_Parameters(
	RLC_Parameters_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	/*flag for extension marker, within extension root. */
	PutBits(buff, 0, 1, bits_iter);
	if(i_encoded_field->am_WithShortSN_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->um_WithShortSN_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->um_WIthLongSN_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->am_WithShortSN_exist == TRUE)
	{
		EncodeRLC_Parameters_am_WithShortSN(i_encoded_field->am_WithShortSN, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->um_WithShortSN_exist == TRUE)
	{
		EncodeRLC_Parameters_um_WithShortSN(i_encoded_field->um_WithShortSN, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->um_WIthLongSN_exist == TRUE)
	{
		EncodeRLC_Parameters_um_WIthLongSN(i_encoded_field->um_WIthLongSN, buff, bits_iter, asn_error);
	}

}

void DecodeRLC_Parameters_am_WithShortSN(
	RLC_Parameters_am_WithShortSN_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = 0;
}

void DecodeRLC_Parameters_um_WithShortSN(
	RLC_Parameters_um_WithShortSN_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = 0;
}

void DecodeRLC_Parameters_um_WIthLongSN(
	RLC_Parameters_um_WIthLongSN_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = 0;
}

void DecodeRLC_Parameters(
	RLC_Parameters_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint8    flag = 0;
	uint8    ext_flag = 0;
	uint32    bits_width = 0;
	uint32    preamble_bitmap = 0;
	
	ext_flag = Get_bits(buff, 1, bits_iter);

	o_decoded_field->am_WithShortSN_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->um_WithShortSN_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->um_WIthLongSN_exist = Get_bits(buff, 1, bits_iter);
	if(o_decoded_field->am_WithShortSN_exist == TRUE)
	{
		DecodeRLC_Parameters_am_WithShortSN(&o_decoded_field->am_WithShortSN, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->um_WithShortSN_exist == TRUE)
	{
		DecodeRLC_Parameters_um_WithShortSN(&o_decoded_field->um_WithShortSN, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->um_WIthLongSN_exist == TRUE)
	{
		DecodeRLC_Parameters_um_WIthLongSN(&o_decoded_field->um_WIthLongSN, buff, bits_iter, asn_error);
	}

	if(ext_flag == 1)
	{
		//need to handle asn error.
	}
}

