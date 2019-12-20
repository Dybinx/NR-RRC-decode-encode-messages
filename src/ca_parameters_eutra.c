/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * ca_parameters_eutra.c - codec the message of CA-ParametersEUTRA
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#include <assert.h>
#include "mem.h"
#include "ca_parameters_eutra.h"


void EncodeCA_ParametersEUTRA_multipleTimingAdvance(
	CA_ParametersEUTRA_multipleTimingAdvance_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 0, bits_iter);
}

void EncodeCA_ParametersEUTRA_simultaneousRx_Tx(
	CA_ParametersEUTRA_simultaneousRx_Tx_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 0, bits_iter);
}

void EncodeCA_ParametersEUTRA_supportedNAICS_2CRS_AP(
	CA_ParametersEUTRA_supportedNAICS_2CRS_AP_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	/* set the length field. */
	PutBits(buff, i_encoded_field->bits_num - 1, 3, bits_iter);
	/* set the contents field. */
	PutBitsMore(buff, i_encoded_field->value, i_encoded_field->bits_num, bits_iter);
}

void EncodeCA_ParametersEUTRA_additionalRx_Tx_PerformanceReq(
	CA_ParametersEUTRA_additionalRx_Tx_PerformanceReq_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 0, bits_iter);
}

void EncodeCA_ParametersEUTRA_ue_CA_PowerClass_N(
	CA_ParametersEUTRA_ue_CA_PowerClass_N_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 0, bits_iter);
}

void EncodeCA_ParametersEUTRA(
	CA_ParametersEUTRA_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	/*flag for extension marker, within extension root. */
	PutBits(buff, 0, 1, bits_iter);
	if(i_encoded_field->multipleTimingAdvance_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->simultaneousRx_Tx_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->supportedNAICS_2CRS_AP_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->additionalRx_Tx_PerformanceReq_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->ue_CA_PowerClass_N_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->multipleTimingAdvance_exist == TRUE)
	{
		EncodeCA_ParametersEUTRA_multipleTimingAdvance(i_encoded_field->multipleTimingAdvance, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->simultaneousRx_Tx_exist == TRUE)
	{
		EncodeCA_ParametersEUTRA_simultaneousRx_Tx(i_encoded_field->simultaneousRx_Tx, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->supportedNAICS_2CRS_AP_exist == TRUE)
	{
		EncodeCA_ParametersEUTRA_supportedNAICS_2CRS_AP(&i_encoded_field->supportedNAICS_2CRS_AP, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->additionalRx_Tx_PerformanceReq_exist == TRUE)
	{
		EncodeCA_ParametersEUTRA_additionalRx_Tx_PerformanceReq(i_encoded_field->additionalRx_Tx_PerformanceReq, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->ue_CA_PowerClass_N_exist == TRUE)
	{
		EncodeCA_ParametersEUTRA_ue_CA_PowerClass_N(i_encoded_field->ue_CA_PowerClass_N, buff, bits_iter, asn_error);
	}

}

void DecodeCA_ParametersEUTRA_multipleTimingAdvance(
	CA_ParametersEUTRA_multipleTimingAdvance_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = 0;
}

void DecodeCA_ParametersEUTRA_simultaneousRx_Tx(
	CA_ParametersEUTRA_simultaneousRx_Tx_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = 0;
}

void DecodeCA_ParametersEUTRA_supportedNAICS_2CRS_AP(
	CA_ParametersEUTRA_supportedNAICS_2CRS_AP_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint32    bits_num = 0;

	bits_num = Get_bits(buff, 3, bits_iter) + 1;
	o_decoded_field->bits_num = bits_num;
	o_decoded_field->value[0] = Get_bits(buff, bits_num, bits_iter);

}

void DecodeCA_ParametersEUTRA_additionalRx_Tx_PerformanceReq(
	CA_ParametersEUTRA_additionalRx_Tx_PerformanceReq_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = 0;
}

void DecodeCA_ParametersEUTRA_ue_CA_PowerClass_N(
	CA_ParametersEUTRA_ue_CA_PowerClass_N_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = 0;
}

void DecodeCA_ParametersEUTRA(
	CA_ParametersEUTRA_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint8    flag = 0;
	uint8    ext_flag = 0;
	uint32    bits_width = 0;
	uint32    preamble_bitmap = 0;
	
	ext_flag = Get_bits(buff, 1, bits_iter);

	o_decoded_field->multipleTimingAdvance_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->simultaneousRx_Tx_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->supportedNAICS_2CRS_AP_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->additionalRx_Tx_PerformanceReq_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->ue_CA_PowerClass_N_exist = Get_bits(buff, 1, bits_iter);
	if(o_decoded_field->multipleTimingAdvance_exist == TRUE)
	{
		DecodeCA_ParametersEUTRA_multipleTimingAdvance(&o_decoded_field->multipleTimingAdvance, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->simultaneousRx_Tx_exist == TRUE)
	{
		DecodeCA_ParametersEUTRA_simultaneousRx_Tx(&o_decoded_field->simultaneousRx_Tx, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->supportedNAICS_2CRS_AP_exist == TRUE)
	{
		DecodeCA_ParametersEUTRA_supportedNAICS_2CRS_AP(&o_decoded_field->supportedNAICS_2CRS_AP, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->additionalRx_Tx_PerformanceReq_exist == TRUE)
	{
		DecodeCA_ParametersEUTRA_additionalRx_Tx_PerformanceReq(&o_decoded_field->additionalRx_Tx_PerformanceReq, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->ue_CA_PowerClass_N_exist == TRUE)
	{
		DecodeCA_ParametersEUTRA_ue_CA_PowerClass_N(&o_decoded_field->ue_CA_PowerClass_N, buff, bits_iter, asn_error);
	}

	if(ext_flag == 1)
	{
		//need to handle asn error.
	}
}

