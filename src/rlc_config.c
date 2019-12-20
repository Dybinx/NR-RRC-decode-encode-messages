/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * rlc_config.c - codec the message of RLC-Config
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#include <assert.h>
#include "mem.h"
#include "rlc_config.h"


void EncodeRLC_Config_am(
	RLC_Config_am_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	EncodeUL_AM_RLC(&i_encoded_field->ul_AM_RLC, buff, bits_iter, asn_error);

	EncodeDL_AM_RLC(&i_encoded_field->dl_AM_RLC, buff, bits_iter, asn_error);

}

void EncodeRLC_Config_um_Bi_Directional(
	RLC_Config_um_Bi_Directional_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	EncodeUL_UM_RLC(&i_encoded_field->ul_UM_RLC, buff, bits_iter, asn_error);

	EncodeDL_UM_RLC(&i_encoded_field->dl_UM_RLC, buff, bits_iter, asn_error);

}

void EncodeRLC_Config_um_Uni_Directional_UL(
	RLC_Config_um_Uni_Directional_UL_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	EncodeUL_UM_RLC(&i_encoded_field->ul_UM_RLC, buff, bits_iter, asn_error);

}

void EncodeRLC_Config_um_Uni_Directional_DL(
	RLC_Config_um_Uni_Directional_DL_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	EncodeDL_UM_RLC(&i_encoded_field->dl_UM_RLC, buff, bits_iter, asn_error);

}

void EncodeRLC_Config(
	RLC_Config_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	/*flag for extension marker, within extension root.*/
	PutBits(buff, 0, 1, bits_iter);
	PutBits(buff, i_encoded_field->type, 2, bits_iter);
	switch (i_encoded_field->type)
	{
	case RLC_CONFIG_AM:
		EncodeRLC_Config_am(&i_encoded_field->a.am, buff, bits_iter, asn_error);
		break;

	case RLC_CONFIG_UM_BI_DIRECTIONAL:
		EncodeRLC_Config_um_Bi_Directional(&i_encoded_field->a.um_Bi_Directional, buff, bits_iter, asn_error);
		break;

	case RLC_CONFIG_UM_UNI_DIRECTIONAL_UL:
		EncodeRLC_Config_um_Uni_Directional_UL(&i_encoded_field->a.um_Uni_Directional_UL, buff, bits_iter, asn_error);
		break;

	case RLC_CONFIG_UM_UNI_DIRECTIONAL_DL:
		EncodeRLC_Config_um_Uni_Directional_DL(&i_encoded_field->a.um_Uni_Directional_DL, buff, bits_iter, asn_error);
		break;

	default:
		break;	}
}

void DecodeRLC_Config_am(
	RLC_Config_am_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	DecodeUL_AM_RLC(&o_decoded_field->ul_AM_RLC, buff, bits_iter, asn_error);
	DecodeDL_AM_RLC(&o_decoded_field->dl_AM_RLC, buff, bits_iter, asn_error);
}

void DecodeRLC_Config_um_Bi_Directional(
	RLC_Config_um_Bi_Directional_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	DecodeUL_UM_RLC(&o_decoded_field->ul_UM_RLC, buff, bits_iter, asn_error);
	DecodeDL_UM_RLC(&o_decoded_field->dl_UM_RLC, buff, bits_iter, asn_error);
}

void DecodeRLC_Config_um_Uni_Directional_UL(
	RLC_Config_um_Uni_Directional_UL_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	DecodeUL_UM_RLC(&o_decoded_field->ul_UM_RLC, buff, bits_iter, asn_error);
}

void DecodeRLC_Config_um_Uni_Directional_DL(
	RLC_Config_um_Uni_Directional_DL_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	DecodeDL_UM_RLC(&o_decoded_field->dl_UM_RLC, buff, bits_iter, asn_error);
}

void DecodeRLC_Config(
	RLC_Config_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint32    index = 0;
	uint8    ext_flag = 0;
	uint8    flag = 0;

	ext_flag = Get_bits(buff, 1, bits_iter);
	if(ext_flag == 0)
	{
		index = Get_bits(buff, 2, bits_iter);
	}
	else
	{
		//need to handle this asn error.
	}

	o_decoded_field->type = index;
	switch (index)
	{
	case RLC_CONFIG_AM:
		DecodeRLC_Config_am(&o_decoded_field->a.am, buff, bits_iter, asn_error);
		break;

	case RLC_CONFIG_UM_BI_DIRECTIONAL:
		DecodeRLC_Config_um_Bi_Directional(&o_decoded_field->a.um_Bi_Directional, buff, bits_iter, asn_error);
		break;

	case RLC_CONFIG_UM_UNI_DIRECTIONAL_UL:
		DecodeRLC_Config_um_Uni_Directional_UL(&o_decoded_field->a.um_Uni_Directional_UL, buff, bits_iter, asn_error);
		break;

	case RLC_CONFIG_UM_UNI_DIRECTIONAL_DL:
		DecodeRLC_Config_um_Uni_Directional_DL(&o_decoded_field->a.um_Uni_Directional_DL, buff, bits_iter, asn_error);
		break;

	default:
		break;

	}
}

