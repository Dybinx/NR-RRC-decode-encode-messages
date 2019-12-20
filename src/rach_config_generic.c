/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * rach_config_generic.c - codec the message of RACH-ConfigGeneric
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#include <assert.h>
#include "mem.h"
#include "rach_config_generic.h"


void EncodeRACH_ConfigGeneric_msg1_FDM(
	RACH_ConfigGeneric_msg1_FDM_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 2, bits_iter);
}

void EncodeRACH_ConfigGeneric_preambleTransMax(
	RACH_ConfigGeneric_preambleTransMax_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 4, bits_iter);
}

void EncodeRACH_ConfigGeneric_powerRampingStep(
	RACH_ConfigGeneric_powerRampingStep_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 2, bits_iter);
}

void EncodeRACH_ConfigGeneric_ra_ResponseWindow(
	RACH_ConfigGeneric_ra_ResponseWindow_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 3, bits_iter);
}

void EncodeRACH_ConfigGeneric(
	RACH_ConfigGeneric_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	/*flag for extension marker, within extension root. */
	PutBits(buff, 0, 1, bits_iter);
	PutBits(buff, i_encoded_field->prach_ConfigurationIndex, 8, bits_iter);

	EncodeRACH_ConfigGeneric_msg1_FDM(i_encoded_field->msg1_FDM, buff, bits_iter, asn_error);

	PutBits(buff, i_encoded_field->msg1_FrequencyStart, 9, bits_iter);

	PutBits(buff, i_encoded_field->zeroCorrelationZoneConfig, 4, bits_iter);

	PutBits(buff, i_encoded_field->preambleReceivedTargetPower + 202, 8, bits_iter);

	EncodeRACH_ConfigGeneric_preambleTransMax(i_encoded_field->preambleTransMax, buff, bits_iter, asn_error);

	EncodeRACH_ConfigGeneric_powerRampingStep(i_encoded_field->powerRampingStep, buff, bits_iter, asn_error);

	EncodeRACH_ConfigGeneric_ra_ResponseWindow(i_encoded_field->ra_ResponseWindow, buff, bits_iter, asn_error);

}

void DecodeRACH_ConfigGeneric_msg1_FDM(
	RACH_ConfigGeneric_msg1_FDM_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = Get_bits(buff, 2, bits_iter);
}

void DecodeRACH_ConfigGeneric_preambleTransMax(
	RACH_ConfigGeneric_preambleTransMax_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = Get_bits(buff, 4, bits_iter);
}

void DecodeRACH_ConfigGeneric_powerRampingStep(
	RACH_ConfigGeneric_powerRampingStep_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = Get_bits(buff, 2, bits_iter);
}

void DecodeRACH_ConfigGeneric_ra_ResponseWindow(
	RACH_ConfigGeneric_ra_ResponseWindow_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = Get_bits(buff, 3, bits_iter);
}

void DecodeRACH_ConfigGeneric(
	RACH_ConfigGeneric_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint8    flag = 0;
	uint8    ext_flag = 0;
	uint32    bits_width = 0;
	uint32    preamble_bitmap = 0;
	
	ext_flag = Get_bits(buff, 1, bits_iter);

	o_decoded_field->prach_ConfigurationIndex = Get_bits(buff, 8, bits_iter);
	DecodeRACH_ConfigGeneric_msg1_FDM(&o_decoded_field->msg1_FDM, buff, bits_iter, asn_error);
	o_decoded_field->msg1_FrequencyStart = Get_bits(buff, 9, bits_iter);
	o_decoded_field->zeroCorrelationZoneConfig = Get_bits(buff, 4, bits_iter);
	o_decoded_field->preambleReceivedTargetPower = Get_bits(buff, 8, bits_iter) - 202;
	DecodeRACH_ConfigGeneric_preambleTransMax(&o_decoded_field->preambleTransMax, buff, bits_iter, asn_error);
	DecodeRACH_ConfigGeneric_powerRampingStep(&o_decoded_field->powerRampingStep, buff, bits_iter, asn_error);
	DecodeRACH_ConfigGeneric_ra_ResponseWindow(&o_decoded_field->ra_ResponseWindow, buff, bits_iter, asn_error);
	if(ext_flag == 1)
	{
		//need to handle asn error.
	}
}

