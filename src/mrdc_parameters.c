/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * mrdc_parameters.c - codec the message of MRDC-Parameters
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#include <assert.h>
#include "mem.h"
#include "mrdc_parameters.h"


void EncodeMRDC_Parameters_singleUL_Transmission(
	MRDC_Parameters_singleUL_Transmission_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 0, bits_iter);
}

void EncodeMRDC_Parameters_dynamicPowerSharing(
	MRDC_Parameters_dynamicPowerSharing_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 0, bits_iter);
}

void EncodeMRDC_Parameters_tdm_Pattern(
	MRDC_Parameters_tdm_Pattern_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 0, bits_iter);
}

void EncodeMRDC_Parameters_ul_SharingEUTRA_NR(
	MRDC_Parameters_ul_SharingEUTRA_NR_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 2, bits_iter);
}

void EncodeMRDC_Parameters_ul_SwitchingTimeEUTRA_NR(
	MRDC_Parameters_ul_SwitchingTimeEUTRA_NR_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 1, bits_iter);
}

void EncodeMRDC_Parameters_simultaneousRxTxInterBandENDC(
	MRDC_Parameters_simultaneousRxTxInterBandENDC_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 0, bits_iter);
}

void EncodeMRDC_Parameters_asyncIntraBandENDC(
	MRDC_Parameters_asyncIntraBandENDC_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 0, bits_iter);
}

void EncodeMRDC_Parameters(
	MRDC_Parameters_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	/*flag for extension marker, within extension root. */
	PutBits(buff, 0, 1, bits_iter);
	if(i_encoded_field->singleUL_Transmission_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->dynamicPowerSharing_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->tdm_Pattern_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->ul_SharingEUTRA_NR_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->ul_SwitchingTimeEUTRA_NR_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->simultaneousRxTxInterBandENDC_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->asyncIntraBandENDC_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->singleUL_Transmission_exist == TRUE)
	{
		EncodeMRDC_Parameters_singleUL_Transmission(i_encoded_field->singleUL_Transmission, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->dynamicPowerSharing_exist == TRUE)
	{
		EncodeMRDC_Parameters_dynamicPowerSharing(i_encoded_field->dynamicPowerSharing, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->tdm_Pattern_exist == TRUE)
	{
		EncodeMRDC_Parameters_tdm_Pattern(i_encoded_field->tdm_Pattern, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->ul_SharingEUTRA_NR_exist == TRUE)
	{
		EncodeMRDC_Parameters_ul_SharingEUTRA_NR(i_encoded_field->ul_SharingEUTRA_NR, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->ul_SwitchingTimeEUTRA_NR_exist == TRUE)
	{
		EncodeMRDC_Parameters_ul_SwitchingTimeEUTRA_NR(i_encoded_field->ul_SwitchingTimeEUTRA_NR, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->simultaneousRxTxInterBandENDC_exist == TRUE)
	{
		EncodeMRDC_Parameters_simultaneousRxTxInterBandENDC(i_encoded_field->simultaneousRxTxInterBandENDC, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->asyncIntraBandENDC_exist == TRUE)
	{
		EncodeMRDC_Parameters_asyncIntraBandENDC(i_encoded_field->asyncIntraBandENDC, buff, bits_iter, asn_error);
	}

}

void DecodeMRDC_Parameters_singleUL_Transmission(
	MRDC_Parameters_singleUL_Transmission_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = 0;
}

void DecodeMRDC_Parameters_dynamicPowerSharing(
	MRDC_Parameters_dynamicPowerSharing_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = 0;
}

void DecodeMRDC_Parameters_tdm_Pattern(
	MRDC_Parameters_tdm_Pattern_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = 0;
}

void DecodeMRDC_Parameters_ul_SharingEUTRA_NR(
	MRDC_Parameters_ul_SharingEUTRA_NR_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = Get_bits(buff, 2, bits_iter);
}

void DecodeMRDC_Parameters_ul_SwitchingTimeEUTRA_NR(
	MRDC_Parameters_ul_SwitchingTimeEUTRA_NR_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = Get_bits(buff, 1, bits_iter);
}

void DecodeMRDC_Parameters_simultaneousRxTxInterBandENDC(
	MRDC_Parameters_simultaneousRxTxInterBandENDC_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = 0;
}

void DecodeMRDC_Parameters_asyncIntraBandENDC(
	MRDC_Parameters_asyncIntraBandENDC_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = 0;
}

void DecodeMRDC_Parameters(
	MRDC_Parameters_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint8    flag = 0;
	uint8    ext_flag = 0;
	uint32    bits_width = 0;
	uint32    preamble_bitmap = 0;
	
	ext_flag = Get_bits(buff, 1, bits_iter);

	o_decoded_field->singleUL_Transmission_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->dynamicPowerSharing_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->tdm_Pattern_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->ul_SharingEUTRA_NR_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->ul_SwitchingTimeEUTRA_NR_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->simultaneousRxTxInterBandENDC_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->asyncIntraBandENDC_exist = Get_bits(buff, 1, bits_iter);
	if(o_decoded_field->singleUL_Transmission_exist == TRUE)
	{
		DecodeMRDC_Parameters_singleUL_Transmission(&o_decoded_field->singleUL_Transmission, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->dynamicPowerSharing_exist == TRUE)
	{
		DecodeMRDC_Parameters_dynamicPowerSharing(&o_decoded_field->dynamicPowerSharing, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->tdm_Pattern_exist == TRUE)
	{
		DecodeMRDC_Parameters_tdm_Pattern(&o_decoded_field->tdm_Pattern, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->ul_SharingEUTRA_NR_exist == TRUE)
	{
		DecodeMRDC_Parameters_ul_SharingEUTRA_NR(&o_decoded_field->ul_SharingEUTRA_NR, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->ul_SwitchingTimeEUTRA_NR_exist == TRUE)
	{
		DecodeMRDC_Parameters_ul_SwitchingTimeEUTRA_NR(&o_decoded_field->ul_SwitchingTimeEUTRA_NR, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->simultaneousRxTxInterBandENDC_exist == TRUE)
	{
		DecodeMRDC_Parameters_simultaneousRxTxInterBandENDC(&o_decoded_field->simultaneousRxTxInterBandENDC, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->asyncIntraBandENDC_exist == TRUE)
	{
		DecodeMRDC_Parameters_asyncIntraBandENDC(&o_decoded_field->asyncIntraBandENDC, buff, bits_iter, asn_error);
	}

	if(ext_flag == 1)
	{
		//need to handle asn error.
	}
}

