/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * band_nr.c - codec the message of BandNR
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#include <assert.h>
#include "mem.h"
#include "band_nr.h"


void EncodeBandNR_modifiedMPR_Behaviour(
	BandNR_modifiedMPR_Behaviour_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBitsMore(buff, i_encoded_field->value, i_encoded_field->bits_num, bits_iter);
}

void EncodeBandNR_extendedCP(
	BandNR_extendedCP_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 0, bits_iter);
}

void EncodeBandNR_multipleTCI(
	BandNR_multipleTCI_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 0, bits_iter);
}

void EncodeBandNR_bwp_WithoutRestriction(
	BandNR_bwp_WithoutRestriction_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 0, bits_iter);
}

void EncodeBandNR_bwp_SameNumerology(
	BandNR_bwp_SameNumerology_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 1, bits_iter);
}

void EncodeBandNR_bwp_DiffNumerology(
	BandNR_bwp_DiffNumerology_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 0, bits_iter);
}

void EncodeBandNR_crossCarrierSchedulingDL_SameSCS(
	BandNR_crossCarrierSchedulingDL_SameSCS_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 0, bits_iter);
}

void EncodeBandNR_crossCarrierSchedulingUL_SameSCS(
	BandNR_crossCarrierSchedulingUL_SameSCS_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 0, bits_iter);
}

void EncodeBandNR_pdsch_256QAM_FR2(
	BandNR_pdsch_256QAM_FR2_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 0, bits_iter);
}

void EncodeBandNR_pusch_256QAM(
	BandNR_pusch_256QAM_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 0, bits_iter);
}

void EncodeBandNR_ue_PowerClass(
	BandNR_ue_PowerClass_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 1, bits_iter);
}

void EncodeBandNR_rateMatchingLTE_CRS(
	BandNR_rateMatchingLTE_CRS_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 0, bits_iter);
}

void EncodeBandNR(
	BandNR_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	/*flag for extension marker, within extension root. */
	PutBits(buff, 0, 1, bits_iter);
	if(i_encoded_field->modifiedMPR_Behaviour_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->mimo_ParametersPerBand_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->extendedCP_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->multipleTCI_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->bwp_WithoutRestriction_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->bwp_SameNumerology_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->bwp_DiffNumerology_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->crossCarrierSchedulingDL_SameSCS_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->crossCarrierSchedulingUL_SameSCS_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->pdsch_256QAM_FR2_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->pusch_256QAM_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->ue_PowerClass_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->rateMatchingLTE_CRS_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	EncodeFreqBandIndicatorNR(&i_encoded_field->bandNR, buff, bits_iter, asn_error);

	if(i_encoded_field->modifiedMPR_Behaviour_exist == TRUE)
	{
		EncodeBandNR_modifiedMPR_Behaviour(&i_encoded_field->modifiedMPR_Behaviour, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->mimo_ParametersPerBand_exist == TRUE)
	{
		EncodeMIMO_ParametersPerBand(&i_encoded_field->mimo_ParametersPerBand, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->extendedCP_exist == TRUE)
	{
		EncodeBandNR_extendedCP(i_encoded_field->extendedCP, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->multipleTCI_exist == TRUE)
	{
		EncodeBandNR_multipleTCI(i_encoded_field->multipleTCI, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->bwp_WithoutRestriction_exist == TRUE)
	{
		EncodeBandNR_bwp_WithoutRestriction(i_encoded_field->bwp_WithoutRestriction, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->bwp_SameNumerology_exist == TRUE)
	{
		EncodeBandNR_bwp_SameNumerology(i_encoded_field->bwp_SameNumerology, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->bwp_DiffNumerology_exist == TRUE)
	{
		EncodeBandNR_bwp_DiffNumerology(i_encoded_field->bwp_DiffNumerology, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->crossCarrierSchedulingDL_SameSCS_exist == TRUE)
	{
		EncodeBandNR_crossCarrierSchedulingDL_SameSCS(i_encoded_field->crossCarrierSchedulingDL_SameSCS, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->crossCarrierSchedulingUL_SameSCS_exist == TRUE)
	{
		EncodeBandNR_crossCarrierSchedulingUL_SameSCS(i_encoded_field->crossCarrierSchedulingUL_SameSCS, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->pdsch_256QAM_FR2_exist == TRUE)
	{
		EncodeBandNR_pdsch_256QAM_FR2(i_encoded_field->pdsch_256QAM_FR2, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->pusch_256QAM_exist == TRUE)
	{
		EncodeBandNR_pusch_256QAM(i_encoded_field->pusch_256QAM, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->ue_PowerClass_exist == TRUE)
	{
		EncodeBandNR_ue_PowerClass(i_encoded_field->ue_PowerClass, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->rateMatchingLTE_CRS_exist == TRUE)
	{
		EncodeBandNR_rateMatchingLTE_CRS(i_encoded_field->rateMatchingLTE_CRS, buff, bits_iter, asn_error);
	}

}

void DecodeBandNR_modifiedMPR_Behaviour(
	BandNR_modifiedMPR_Behaviour_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint32    bits_num = 0;

	bits_num = 8;
	o_decoded_field->bits_num = bits_num;
	o_decoded_field->value[0] = Get_bits(buff, bits_num, bits_iter);

}

void DecodeBandNR_extendedCP(
	BandNR_extendedCP_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = 0;
}

void DecodeBandNR_multipleTCI(
	BandNR_multipleTCI_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = 0;
}

void DecodeBandNR_bwp_WithoutRestriction(
	BandNR_bwp_WithoutRestriction_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = 0;
}

void DecodeBandNR_bwp_SameNumerology(
	BandNR_bwp_SameNumerology_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = Get_bits(buff, 1, bits_iter);
}

void DecodeBandNR_bwp_DiffNumerology(
	BandNR_bwp_DiffNumerology_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = 0;
}

void DecodeBandNR_crossCarrierSchedulingDL_SameSCS(
	BandNR_crossCarrierSchedulingDL_SameSCS_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = 0;
}

void DecodeBandNR_crossCarrierSchedulingUL_SameSCS(
	BandNR_crossCarrierSchedulingUL_SameSCS_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = 0;
}

void DecodeBandNR_pdsch_256QAM_FR2(
	BandNR_pdsch_256QAM_FR2_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = 0;
}

void DecodeBandNR_pusch_256QAM(
	BandNR_pusch_256QAM_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = 0;
}

void DecodeBandNR_ue_PowerClass(
	BandNR_ue_PowerClass_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = Get_bits(buff, 1, bits_iter);
}

void DecodeBandNR_rateMatchingLTE_CRS(
	BandNR_rateMatchingLTE_CRS_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = 0;
}

void DecodeBandNR(
	BandNR_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint8    flag = 0;
	uint8    ext_flag = 0;
	uint32    bits_width = 0;
	uint32    preamble_bitmap = 0;
	
	ext_flag = Get_bits(buff, 1, bits_iter);

	o_decoded_field->modifiedMPR_Behaviour_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->mimo_ParametersPerBand_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->extendedCP_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->multipleTCI_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->bwp_WithoutRestriction_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->bwp_SameNumerology_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->bwp_DiffNumerology_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->crossCarrierSchedulingDL_SameSCS_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->crossCarrierSchedulingUL_SameSCS_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->pdsch_256QAM_FR2_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->pusch_256QAM_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->ue_PowerClass_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->rateMatchingLTE_CRS_exist = Get_bits(buff, 1, bits_iter);
	DecodeFreqBandIndicatorNR(&o_decoded_field->bandNR, buff, bits_iter, asn_error);
	if(o_decoded_field->modifiedMPR_Behaviour_exist == TRUE)
	{
		DecodeBandNR_modifiedMPR_Behaviour(&o_decoded_field->modifiedMPR_Behaviour, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->mimo_ParametersPerBand_exist == TRUE)
	{
		DecodeMIMO_ParametersPerBand(&o_decoded_field->mimo_ParametersPerBand, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->extendedCP_exist == TRUE)
	{
		DecodeBandNR_extendedCP(&o_decoded_field->extendedCP, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->multipleTCI_exist == TRUE)
	{
		DecodeBandNR_multipleTCI(&o_decoded_field->multipleTCI, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->bwp_WithoutRestriction_exist == TRUE)
	{
		DecodeBandNR_bwp_WithoutRestriction(&o_decoded_field->bwp_WithoutRestriction, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->bwp_SameNumerology_exist == TRUE)
	{
		DecodeBandNR_bwp_SameNumerology(&o_decoded_field->bwp_SameNumerology, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->bwp_DiffNumerology_exist == TRUE)
	{
		DecodeBandNR_bwp_DiffNumerology(&o_decoded_field->bwp_DiffNumerology, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->crossCarrierSchedulingDL_SameSCS_exist == TRUE)
	{
		DecodeBandNR_crossCarrierSchedulingDL_SameSCS(&o_decoded_field->crossCarrierSchedulingDL_SameSCS, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->crossCarrierSchedulingUL_SameSCS_exist == TRUE)
	{
		DecodeBandNR_crossCarrierSchedulingUL_SameSCS(&o_decoded_field->crossCarrierSchedulingUL_SameSCS, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->pdsch_256QAM_FR2_exist == TRUE)
	{
		DecodeBandNR_pdsch_256QAM_FR2(&o_decoded_field->pdsch_256QAM_FR2, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->pusch_256QAM_exist == TRUE)
	{
		DecodeBandNR_pusch_256QAM(&o_decoded_field->pusch_256QAM, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->ue_PowerClass_exist == TRUE)
	{
		DecodeBandNR_ue_PowerClass(&o_decoded_field->ue_PowerClass, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->rateMatchingLTE_CRS_exist == TRUE)
	{
		DecodeBandNR_rateMatchingLTE_CRS(&o_decoded_field->rateMatchingLTE_CRS, buff, bits_iter, asn_error);
	}

	if(ext_flag == 1)
	{
		//need to handle asn error.
	}
}

