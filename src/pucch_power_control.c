/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * pucch_power_control.c - codec the message of PUCCH-PowerControl
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#include <assert.h>
#include "mem.h"
#include "pucch_power_control.h"


void EncodePUCCH_PowerControl_p0_Set(
	PUCCH_PowerControl_p0_Set_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field->length - 1, 3, bits_iter);
	for(uint32 i = 0; i < i_encoded_field->length; i++)
	{
		EncodeP0_PUCCH(&i_encoded_field->elm[i], buff, bits_iter, asn_error);
	}
}

void EncodePUCCH_PowerControl_pathlossReferenceRSs(
	PUCCH_PowerControl_pathlossReferenceRSs_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field->length - 1, 2, bits_iter);
	for(uint32 i = 0; i < i_encoded_field->length; i++)
	{
		EncodePUCCH_PathlossReferenceRS(&i_encoded_field->elm[i], buff, bits_iter, asn_error);
	}
}

void EncodePUCCH_PowerControl_twoPUCCH_PC_AdjustmentStates(
	PUCCH_PowerControl_twoPUCCH_PC_AdjustmentStates_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 0, bits_iter);
}

void EncodePUCCH_PowerControl(
	PUCCH_PowerControl_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	/*flag for extension marker, within extension root. */
	PutBits(buff, 0, 1, bits_iter);
	if(i_encoded_field->deltaF_PUCCH_f0_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->deltaF_PUCCH_f1_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->deltaF_PUCCH_f2_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->deltaF_PUCCH_f3_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->deltaF_PUCCH_f4_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->p0_Set_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->pathlossReferenceRSs_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->twoPUCCH_PC_AdjustmentStates_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->deltaF_PUCCH_f0_exist == TRUE)
	{
		PutBits(buff, i_encoded_field->deltaF_PUCCH_f0 + 16, 5, bits_iter);
	}

	if(i_encoded_field->deltaF_PUCCH_f1_exist == TRUE)
	{
		PutBits(buff, i_encoded_field->deltaF_PUCCH_f1 + 16, 5, bits_iter);
	}

	if(i_encoded_field->deltaF_PUCCH_f2_exist == TRUE)
	{
		PutBits(buff, i_encoded_field->deltaF_PUCCH_f2 + 16, 5, bits_iter);
	}

	if(i_encoded_field->deltaF_PUCCH_f3_exist == TRUE)
	{
		PutBits(buff, i_encoded_field->deltaF_PUCCH_f3 + 16, 5, bits_iter);
	}

	if(i_encoded_field->deltaF_PUCCH_f4_exist == TRUE)
	{
		PutBits(buff, i_encoded_field->deltaF_PUCCH_f4 + 16, 5, bits_iter);
	}

	if(i_encoded_field->p0_Set_exist == TRUE)
	{
		EncodePUCCH_PowerControl_p0_Set(&i_encoded_field->p0_Set, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->pathlossReferenceRSs_exist == TRUE)
	{
		EncodePUCCH_PowerControl_pathlossReferenceRSs(&i_encoded_field->pathlossReferenceRSs, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->twoPUCCH_PC_AdjustmentStates_exist == TRUE)
	{
		EncodePUCCH_PowerControl_twoPUCCH_PC_AdjustmentStates(i_encoded_field->twoPUCCH_PC_AdjustmentStates, buff, bits_iter, asn_error);
	}

}

void DecodePUCCH_PowerControl_p0_Set(
	PUCCH_PowerControl_p0_Set_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint32    count = 0;
	count = Get_bits(buff, 3, bits_iter) + 1;
	o_decoded_field->length = count;

	for(uint32 i = 0; i < count; i++)
	{
		DecodeP0_PUCCH(&o_decoded_field->elm[i], buff, bits_iter, asn_error);
	}
}

void DecodePUCCH_PowerControl_pathlossReferenceRSs(
	PUCCH_PowerControl_pathlossReferenceRSs_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint32    count = 0;
	count = Get_bits(buff, 2, bits_iter) + 1;
	o_decoded_field->length = count;

	for(uint32 i = 0; i < count; i++)
	{
		DecodePUCCH_PathlossReferenceRS(&o_decoded_field->elm[i], buff, bits_iter, asn_error);
	}
}

void DecodePUCCH_PowerControl_twoPUCCH_PC_AdjustmentStates(
	PUCCH_PowerControl_twoPUCCH_PC_AdjustmentStates_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = 0;
}

void DecodePUCCH_PowerControl(
	PUCCH_PowerControl_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint8    flag = 0;
	uint8    ext_flag = 0;
	uint32    bits_width = 0;
	uint32    preamble_bitmap = 0;
	
	ext_flag = Get_bits(buff, 1, bits_iter);

	o_decoded_field->deltaF_PUCCH_f0_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->deltaF_PUCCH_f1_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->deltaF_PUCCH_f2_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->deltaF_PUCCH_f3_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->deltaF_PUCCH_f4_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->p0_Set_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->pathlossReferenceRSs_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->twoPUCCH_PC_AdjustmentStates_exist = Get_bits(buff, 1, bits_iter);
	if(o_decoded_field->deltaF_PUCCH_f0_exist == TRUE)
	{
		o_decoded_field->deltaF_PUCCH_f0 = Get_bits(buff, 5, bits_iter) - 16;
	}

	if(o_decoded_field->deltaF_PUCCH_f1_exist == TRUE)
	{
		o_decoded_field->deltaF_PUCCH_f1 = Get_bits(buff, 5, bits_iter) - 16;
	}

	if(o_decoded_field->deltaF_PUCCH_f2_exist == TRUE)
	{
		o_decoded_field->deltaF_PUCCH_f2 = Get_bits(buff, 5, bits_iter) - 16;
	}

	if(o_decoded_field->deltaF_PUCCH_f3_exist == TRUE)
	{
		o_decoded_field->deltaF_PUCCH_f3 = Get_bits(buff, 5, bits_iter) - 16;
	}

	if(o_decoded_field->deltaF_PUCCH_f4_exist == TRUE)
	{
		o_decoded_field->deltaF_PUCCH_f4 = Get_bits(buff, 5, bits_iter) - 16;
	}

	if(o_decoded_field->p0_Set_exist == TRUE)
	{
		DecodePUCCH_PowerControl_p0_Set(&o_decoded_field->p0_Set, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->pathlossReferenceRSs_exist == TRUE)
	{
		DecodePUCCH_PowerControl_pathlossReferenceRSs(&o_decoded_field->pathlossReferenceRSs, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->twoPUCCH_PC_AdjustmentStates_exist == TRUE)
	{
		DecodePUCCH_PowerControl_twoPUCCH_PC_AdjustmentStates(&o_decoded_field->twoPUCCH_PC_AdjustmentStates, buff, bits_iter, asn_error);
	}

	if(ext_flag == 1)
	{
		//need to handle asn error.
	}
}

