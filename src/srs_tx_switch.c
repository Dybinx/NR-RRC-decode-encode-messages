/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * srs_tx_switch.c - codec the message of SRS-TxSwitch
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#include <assert.h>
#include "mem.h"
#include "srs_tx_switch.h"


void EncodeSRS_TxSwitch_supportedSRS_TxPortSwitch(
	SRS_TxSwitch_supportedSRS_TxPortSwitch_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 3, bits_iter);
}

void EncodeSRS_TxSwitch_txSwitchImpactToRx(
	SRS_TxSwitch_txSwitchImpactToRx_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 0, bits_iter);
}

void EncodeSRS_TxSwitch(
	SRS_TxSwitch_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	if(i_encoded_field->txSwitchImpactToRx_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	EncodeSRS_TxSwitch_supportedSRS_TxPortSwitch(i_encoded_field->supportedSRS_TxPortSwitch, buff, bits_iter, asn_error);

	if(i_encoded_field->txSwitchImpactToRx_exist == TRUE)
	{
		EncodeSRS_TxSwitch_txSwitchImpactToRx(i_encoded_field->txSwitchImpactToRx, buff, bits_iter, asn_error);
	}

}

void DecodeSRS_TxSwitch_supportedSRS_TxPortSwitch(
	SRS_TxSwitch_supportedSRS_TxPortSwitch_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = Get_bits(buff, 3, bits_iter);
}

void DecodeSRS_TxSwitch_txSwitchImpactToRx(
	SRS_TxSwitch_txSwitchImpactToRx_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = 0;
}

void DecodeSRS_TxSwitch(
	SRS_TxSwitch_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	o_decoded_field->txSwitchImpactToRx_exist = Get_bits(buff, 1, bits_iter);
	DecodeSRS_TxSwitch_supportedSRS_TxPortSwitch(&o_decoded_field->supportedSRS_TxPortSwitch, buff, bits_iter, asn_error);
	if(o_decoded_field->txSwitchImpactToRx_exist == TRUE)
	{
		DecodeSRS_TxSwitch_txSwitchImpactToRx(&o_decoded_field->txSwitchImpactToRx, buff, bits_iter, asn_error);
	}

}

