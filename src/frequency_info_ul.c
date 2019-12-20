/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * frequency_info_ul.c - codec the message of FrequencyInfoUL
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#include <assert.h>
#include "mem.h"
#include "frequency_info_ul.h"


void EncodeFrequencyInfoUL_scs_SpecificCarrierList(
	FrequencyInfoUL_scs_SpecificCarrierList_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field->length - 1, 3, bits_iter);
	for(uint32 i = 0; i < i_encoded_field->length; i++)
	{
		EncodeSCS_SpecificCarrier(&i_encoded_field->elm[i], buff, bits_iter, asn_error);
	}
}

void EncodeFrequencyInfoUL_frequencyShift7p5khz(
	FrequencyInfoUL_frequencyShift7p5khz_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 0, bits_iter);
}

void EncodeFrequencyInfoUL(
	FrequencyInfoUL_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	/*flag for extension marker, within extension root. */
	PutBits(buff, 0, 1, bits_iter);
	if(i_encoded_field->frequencyBandList_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->absoluteFrequencyPointA_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->additionalSpectrumEmission_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->p_Max_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->frequencyShift7p5khz_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->frequencyBandList_exist == TRUE)
	{
		EncodeMultiFrequencyBandListNR(&i_encoded_field->frequencyBandList, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->absoluteFrequencyPointA_exist == TRUE)
	{
		EncodeARFCN_ValueNR(&i_encoded_field->absoluteFrequencyPointA, buff, bits_iter, asn_error);
	}

	EncodeFrequencyInfoUL_scs_SpecificCarrierList(&i_encoded_field->scs_SpecificCarrierList, buff, bits_iter, asn_error);

	if(i_encoded_field->additionalSpectrumEmission_exist == TRUE)
	{
		EncodeAdditionalSpectrumEmission(&i_encoded_field->additionalSpectrumEmission, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->p_Max_exist == TRUE)
	{
		EncodeP_Max(&i_encoded_field->p_Max, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->frequencyShift7p5khz_exist == TRUE)
	{
		EncodeFrequencyInfoUL_frequencyShift7p5khz(i_encoded_field->frequencyShift7p5khz, buff, bits_iter, asn_error);
	}

}

void DecodeFrequencyInfoUL_scs_SpecificCarrierList(
	FrequencyInfoUL_scs_SpecificCarrierList_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint32    count = 0;
	count = Get_bits(buff, 3, bits_iter) + 1;
	o_decoded_field->length = count;

	for(uint32 i = 0; i < count; i++)
	{
		DecodeSCS_SpecificCarrier(&o_decoded_field->elm[i], buff, bits_iter, asn_error);
	}
}

void DecodeFrequencyInfoUL_frequencyShift7p5khz(
	FrequencyInfoUL_frequencyShift7p5khz_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = 0;
}

void DecodeFrequencyInfoUL(
	FrequencyInfoUL_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint8    flag = 0;
	uint8    ext_flag = 0;
	uint32    bits_width = 0;
	uint32    preamble_bitmap = 0;
	
	ext_flag = Get_bits(buff, 1, bits_iter);

	o_decoded_field->frequencyBandList_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->absoluteFrequencyPointA_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->additionalSpectrumEmission_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->p_Max_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->frequencyShift7p5khz_exist = Get_bits(buff, 1, bits_iter);
	if(o_decoded_field->frequencyBandList_exist == TRUE)
	{
		DecodeMultiFrequencyBandListNR(&o_decoded_field->frequencyBandList, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->absoluteFrequencyPointA_exist == TRUE)
	{
		DecodeARFCN_ValueNR(&o_decoded_field->absoluteFrequencyPointA, buff, bits_iter, asn_error);
	}

	DecodeFrequencyInfoUL_scs_SpecificCarrierList(&o_decoded_field->scs_SpecificCarrierList, buff, bits_iter, asn_error);
	if(o_decoded_field->additionalSpectrumEmission_exist == TRUE)
	{
		DecodeAdditionalSpectrumEmission(&o_decoded_field->additionalSpectrumEmission, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->p_Max_exist == TRUE)
	{
		DecodeP_Max(&o_decoded_field->p_Max, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->frequencyShift7p5khz_exist == TRUE)
	{
		DecodeFrequencyInfoUL_frequencyShift7p5khz(&o_decoded_field->frequencyShift7p5khz, buff, bits_iter, asn_error);
	}

	if(ext_flag == 1)
	{
		//need to handle asn error.
	}
}

