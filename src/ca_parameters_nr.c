/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * ca_parameters_nr.c - codec the message of CA-ParametersNR
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#include <assert.h>
#include "mem.h"
#include "ca_parameters_nr.h"


void EncodeCA_ParametersNR_multipleTimingAdvances(
	CA_ParametersNR_multipleTimingAdvances_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 0, bits_iter);
}

void EncodeCA_ParametersNR_parallelTxSRS_PUCCH_PUSCH(
	CA_ParametersNR_parallelTxSRS_PUCCH_PUSCH_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 0, bits_iter);
}

void EncodeCA_ParametersNR_parallelTxPRACH_SRS_PUCCH_PUSCH(
	CA_ParametersNR_parallelTxPRACH_SRS_PUCCH_PUSCH_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 0, bits_iter);
}

void EncodeCA_ParametersNR_simultaneousRxTxInterBandCA(
	CA_ParametersNR_simultaneousRxTxInterBandCA_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 0, bits_iter);
}

void EncodeCA_ParametersNR_simultaneousRxTxSUL(
	CA_ParametersNR_simultaneousRxTxSUL_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 0, bits_iter);
}

void EncodeCA_ParametersNR_diffNumerologyAcrossPUCCH_Group(
	CA_ParametersNR_diffNumerologyAcrossPUCCH_Group_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 0, bits_iter);
}

void EncodeCA_ParametersNR_diffNumerologyWithinPUCCH_Group(
	CA_ParametersNR_diffNumerologyWithinPUCCH_Group_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 0, bits_iter);
}

void EncodeCA_ParametersNR_supportedNumberTAG(
	CA_ParametersNR_supportedNumberTAG_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 2, bits_iter);
}

void EncodeCA_ParametersNR(
	CA_ParametersNR_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	/*flag for extension marker, within extension root. */
	PutBits(buff, 0, 1, bits_iter);
	if(i_encoded_field->multipleTimingAdvances_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->parallelTxSRS_PUCCH_PUSCH_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->parallelTxPRACH_SRS_PUCCH_PUSCH_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->simultaneousRxTxInterBandCA_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->simultaneousRxTxSUL_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->diffNumerologyAcrossPUCCH_Group_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->diffNumerologyWithinPUCCH_Group_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->supportedNumberTAG_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->multipleTimingAdvances_exist == TRUE)
	{
		EncodeCA_ParametersNR_multipleTimingAdvances(i_encoded_field->multipleTimingAdvances, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->parallelTxSRS_PUCCH_PUSCH_exist == TRUE)
	{
		EncodeCA_ParametersNR_parallelTxSRS_PUCCH_PUSCH(i_encoded_field->parallelTxSRS_PUCCH_PUSCH, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->parallelTxPRACH_SRS_PUCCH_PUSCH_exist == TRUE)
	{
		EncodeCA_ParametersNR_parallelTxPRACH_SRS_PUCCH_PUSCH(i_encoded_field->parallelTxPRACH_SRS_PUCCH_PUSCH, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->simultaneousRxTxInterBandCA_exist == TRUE)
	{
		EncodeCA_ParametersNR_simultaneousRxTxInterBandCA(i_encoded_field->simultaneousRxTxInterBandCA, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->simultaneousRxTxSUL_exist == TRUE)
	{
		EncodeCA_ParametersNR_simultaneousRxTxSUL(i_encoded_field->simultaneousRxTxSUL, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->diffNumerologyAcrossPUCCH_Group_exist == TRUE)
	{
		EncodeCA_ParametersNR_diffNumerologyAcrossPUCCH_Group(i_encoded_field->diffNumerologyAcrossPUCCH_Group, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->diffNumerologyWithinPUCCH_Group_exist == TRUE)
	{
		EncodeCA_ParametersNR_diffNumerologyWithinPUCCH_Group(i_encoded_field->diffNumerologyWithinPUCCH_Group, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->supportedNumberTAG_exist == TRUE)
	{
		EncodeCA_ParametersNR_supportedNumberTAG(i_encoded_field->supportedNumberTAG, buff, bits_iter, asn_error);
	}

}

void DecodeCA_ParametersNR_multipleTimingAdvances(
	CA_ParametersNR_multipleTimingAdvances_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = 0;
}

void DecodeCA_ParametersNR_parallelTxSRS_PUCCH_PUSCH(
	CA_ParametersNR_parallelTxSRS_PUCCH_PUSCH_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = 0;
}

void DecodeCA_ParametersNR_parallelTxPRACH_SRS_PUCCH_PUSCH(
	CA_ParametersNR_parallelTxPRACH_SRS_PUCCH_PUSCH_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = 0;
}

void DecodeCA_ParametersNR_simultaneousRxTxInterBandCA(
	CA_ParametersNR_simultaneousRxTxInterBandCA_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = 0;
}

void DecodeCA_ParametersNR_simultaneousRxTxSUL(
	CA_ParametersNR_simultaneousRxTxSUL_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = 0;
}

void DecodeCA_ParametersNR_diffNumerologyAcrossPUCCH_Group(
	CA_ParametersNR_diffNumerologyAcrossPUCCH_Group_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = 0;
}

void DecodeCA_ParametersNR_diffNumerologyWithinPUCCH_Group(
	CA_ParametersNR_diffNumerologyWithinPUCCH_Group_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = 0;
}

void DecodeCA_ParametersNR_supportedNumberTAG(
	CA_ParametersNR_supportedNumberTAG_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = Get_bits(buff, 2, bits_iter);
}

void DecodeCA_ParametersNR(
	CA_ParametersNR_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint8    flag = 0;
	uint8    ext_flag = 0;
	uint32    bits_width = 0;
	uint32    preamble_bitmap = 0;
	
	ext_flag = Get_bits(buff, 1, bits_iter);

	o_decoded_field->multipleTimingAdvances_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->parallelTxSRS_PUCCH_PUSCH_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->parallelTxPRACH_SRS_PUCCH_PUSCH_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->simultaneousRxTxInterBandCA_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->simultaneousRxTxSUL_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->diffNumerologyAcrossPUCCH_Group_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->diffNumerologyWithinPUCCH_Group_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->supportedNumberTAG_exist = Get_bits(buff, 1, bits_iter);
	if(o_decoded_field->multipleTimingAdvances_exist == TRUE)
	{
		DecodeCA_ParametersNR_multipleTimingAdvances(&o_decoded_field->multipleTimingAdvances, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->parallelTxSRS_PUCCH_PUSCH_exist == TRUE)
	{
		DecodeCA_ParametersNR_parallelTxSRS_PUCCH_PUSCH(&o_decoded_field->parallelTxSRS_PUCCH_PUSCH, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->parallelTxPRACH_SRS_PUCCH_PUSCH_exist == TRUE)
	{
		DecodeCA_ParametersNR_parallelTxPRACH_SRS_PUCCH_PUSCH(&o_decoded_field->parallelTxPRACH_SRS_PUCCH_PUSCH, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->simultaneousRxTxInterBandCA_exist == TRUE)
	{
		DecodeCA_ParametersNR_simultaneousRxTxInterBandCA(&o_decoded_field->simultaneousRxTxInterBandCA, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->simultaneousRxTxSUL_exist == TRUE)
	{
		DecodeCA_ParametersNR_simultaneousRxTxSUL(&o_decoded_field->simultaneousRxTxSUL, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->diffNumerologyAcrossPUCCH_Group_exist == TRUE)
	{
		DecodeCA_ParametersNR_diffNumerologyAcrossPUCCH_Group(&o_decoded_field->diffNumerologyAcrossPUCCH_Group, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->diffNumerologyWithinPUCCH_Group_exist == TRUE)
	{
		DecodeCA_ParametersNR_diffNumerologyWithinPUCCH_Group(&o_decoded_field->diffNumerologyWithinPUCCH_Group, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->supportedNumberTAG_exist == TRUE)
	{
		DecodeCA_ParametersNR_supportedNumberTAG(&o_decoded_field->supportedNumberTAG, buff, bits_iter, asn_error);
	}

	if(ext_flag == 1)
	{
		//need to handle asn error.
	}
}

