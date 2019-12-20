/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * pucch_format_config.c - codec the message of PUCCH-FormatConfig
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#include <assert.h>
#include "mem.h"
#include "pucch_format_config.h"


void EncodePUCCH_FormatConfig_interslotFrequencyHopping(
	PUCCH_FormatConfig_interslotFrequencyHopping_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 0, bits_iter);
}

void EncodePUCCH_FormatConfig_additionalDMRS(
	PUCCH_FormatConfig_additionalDMRS_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 0, bits_iter);
}

void EncodePUCCH_FormatConfig_nrofSlots(
	PUCCH_FormatConfig_nrofSlots_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 2, bits_iter);
}

void EncodePUCCH_FormatConfig_pi2BPSK(
	PUCCH_FormatConfig_pi2BPSK_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 0, bits_iter);
}

void EncodePUCCH_FormatConfig_simultaneousHARQ_ACK_CSI(
	PUCCH_FormatConfig_simultaneousHARQ_ACK_CSI_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 0, bits_iter);
}

void EncodePUCCH_FormatConfig(
	PUCCH_FormatConfig_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	if(i_encoded_field->interslotFrequencyHopping_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->additionalDMRS_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->maxCodeRate_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->nrofSlots_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->pi2BPSK_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->simultaneousHARQ_ACK_CSI_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->interslotFrequencyHopping_exist == TRUE)
	{
		EncodePUCCH_FormatConfig_interslotFrequencyHopping(i_encoded_field->interslotFrequencyHopping, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->additionalDMRS_exist == TRUE)
	{
		EncodePUCCH_FormatConfig_additionalDMRS(i_encoded_field->additionalDMRS, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->maxCodeRate_exist == TRUE)
	{
		EncodePUCCH_MaxCodeRate(i_encoded_field->maxCodeRate, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->nrofSlots_exist == TRUE)
	{
		EncodePUCCH_FormatConfig_nrofSlots(i_encoded_field->nrofSlots, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->pi2BPSK_exist == TRUE)
	{
		EncodePUCCH_FormatConfig_pi2BPSK(i_encoded_field->pi2BPSK, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->simultaneousHARQ_ACK_CSI_exist == TRUE)
	{
		EncodePUCCH_FormatConfig_simultaneousHARQ_ACK_CSI(i_encoded_field->simultaneousHARQ_ACK_CSI, buff, bits_iter, asn_error);
	}

}

void DecodePUCCH_FormatConfig_interslotFrequencyHopping(
	PUCCH_FormatConfig_interslotFrequencyHopping_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = 0;
}

void DecodePUCCH_FormatConfig_additionalDMRS(
	PUCCH_FormatConfig_additionalDMRS_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = 0;
}

void DecodePUCCH_FormatConfig_nrofSlots(
	PUCCH_FormatConfig_nrofSlots_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = Get_bits(buff, 2, bits_iter);
}

void DecodePUCCH_FormatConfig_pi2BPSK(
	PUCCH_FormatConfig_pi2BPSK_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = 0;
}

void DecodePUCCH_FormatConfig_simultaneousHARQ_ACK_CSI(
	PUCCH_FormatConfig_simultaneousHARQ_ACK_CSI_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = 0;
}

void DecodePUCCH_FormatConfig(
	PUCCH_FormatConfig_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	o_decoded_field->interslotFrequencyHopping_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->additionalDMRS_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->maxCodeRate_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->nrofSlots_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->pi2BPSK_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->simultaneousHARQ_ACK_CSI_exist = Get_bits(buff, 1, bits_iter);
	if(o_decoded_field->interslotFrequencyHopping_exist == TRUE)
	{
		DecodePUCCH_FormatConfig_interslotFrequencyHopping(&o_decoded_field->interslotFrequencyHopping, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->additionalDMRS_exist == TRUE)
	{
		DecodePUCCH_FormatConfig_additionalDMRS(&o_decoded_field->additionalDMRS, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->maxCodeRate_exist == TRUE)
	{
		DecodePUCCH_MaxCodeRate(&o_decoded_field->maxCodeRate, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->nrofSlots_exist == TRUE)
	{
		DecodePUCCH_FormatConfig_nrofSlots(&o_decoded_field->nrofSlots, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->pi2BPSK_exist == TRUE)
	{
		DecodePUCCH_FormatConfig_pi2BPSK(&o_decoded_field->pi2BPSK, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->simultaneousHARQ_ACK_CSI_exist == TRUE)
	{
		DecodePUCCH_FormatConfig_simultaneousHARQ_ACK_CSI(&o_decoded_field->simultaneousHARQ_ACK_CSI, buff, bits_iter, asn_error);
	}

}

