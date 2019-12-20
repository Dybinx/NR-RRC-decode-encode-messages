/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * phr_config.c - codec the message of PHR-Config
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#include <assert.h>
#include "mem.h"
#include "phr_config.h"


void EncodePHR_Config_phr_PeriodicTimer(
	PHR_Config_phr_PeriodicTimer_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 3, bits_iter);
}

void EncodePHR_Config_phr_ProhibitTimer(
	PHR_Config_phr_ProhibitTimer_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 3, bits_iter);
}

void EncodePHR_Config_phr_Tx_PowerFactorChange(
	PHR_Config_phr_Tx_PowerFactorChange_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 2, bits_iter);
}

void EncodePHR_Config_phr_ModeOtherCG(
	PHR_Config_phr_ModeOtherCG_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 1, bits_iter);
}

void EncodePHR_Config(
	PHR_Config_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	/*flag for extension marker, within extension root. */
	PutBits(buff, 0, 1, bits_iter);
	EncodePHR_Config_phr_PeriodicTimer(i_encoded_field->phr_PeriodicTimer, buff, bits_iter, asn_error);

	EncodePHR_Config_phr_ProhibitTimer(i_encoded_field->phr_ProhibitTimer, buff, bits_iter, asn_error);

	EncodePHR_Config_phr_Tx_PowerFactorChange(i_encoded_field->phr_Tx_PowerFactorChange, buff, bits_iter, asn_error);

	PutBits(buff, i_encoded_field->multiplePHR, 1, bits_iter);

	PutBits(buff, i_encoded_field->phr_Type2SpCell, 1, bits_iter);

	PutBits(buff, i_encoded_field->phr_Type2OtherCell, 1, bits_iter);

	EncodePHR_Config_phr_ModeOtherCG(i_encoded_field->phr_ModeOtherCG, buff, bits_iter, asn_error);

}

void DecodePHR_Config_phr_PeriodicTimer(
	PHR_Config_phr_PeriodicTimer_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = Get_bits(buff, 3, bits_iter);
}

void DecodePHR_Config_phr_ProhibitTimer(
	PHR_Config_phr_ProhibitTimer_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = Get_bits(buff, 3, bits_iter);
}

void DecodePHR_Config_phr_Tx_PowerFactorChange(
	PHR_Config_phr_Tx_PowerFactorChange_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = Get_bits(buff, 2, bits_iter);
}

void DecodePHR_Config_phr_ModeOtherCG(
	PHR_Config_phr_ModeOtherCG_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = Get_bits(buff, 1, bits_iter);
}

void DecodePHR_Config(
	PHR_Config_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint8    flag = 0;
	uint8    ext_flag = 0;
	uint32    bits_width = 0;
	uint32    preamble_bitmap = 0;
	
	ext_flag = Get_bits(buff, 1, bits_iter);

	DecodePHR_Config_phr_PeriodicTimer(&o_decoded_field->phr_PeriodicTimer, buff, bits_iter, asn_error);
	DecodePHR_Config_phr_ProhibitTimer(&o_decoded_field->phr_ProhibitTimer, buff, bits_iter, asn_error);
	DecodePHR_Config_phr_Tx_PowerFactorChange(&o_decoded_field->phr_Tx_PowerFactorChange, buff, bits_iter, asn_error);
	o_decoded_field->multiplePHR = Get_bits(buff, 1, bits_iter);
	o_decoded_field->phr_Type2SpCell = Get_bits(buff, 1, bits_iter);
	o_decoded_field->phr_Type2OtherCell = Get_bits(buff, 1, bits_iter);
	DecodePHR_Config_phr_ModeOtherCG(&o_decoded_field->phr_ModeOtherCG, buff, bits_iter, asn_error);
	if(ext_flag == 1)
	{
		//need to handle asn error.
	}
}

