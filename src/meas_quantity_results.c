/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * meas_quantity_results.c - codec the message of MeasQuantityResults
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#include <assert.h>
#include "mem.h"
#include "meas_quantity_results.h"


void EncodeMeasQuantityResults(
	MeasQuantityResults_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	if(i_encoded_field->rsrp_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->rsrq_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->sinr_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->rsrp_exist == TRUE)
	{
		EncodeRSRP_Range(&i_encoded_field->rsrp, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->rsrq_exist == TRUE)
	{
		EncodeRSRQ_Range(&i_encoded_field->rsrq, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->sinr_exist == TRUE)
	{
		EncodeSINR_Range(&i_encoded_field->sinr, buff, bits_iter, asn_error);
	}

}

void DecodeMeasQuantityResults(
	MeasQuantityResults_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	o_decoded_field->rsrp_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->rsrq_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->sinr_exist = Get_bits(buff, 1, bits_iter);
	if(o_decoded_field->rsrp_exist == TRUE)
	{
		DecodeRSRP_Range(&o_decoded_field->rsrp, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->rsrq_exist == TRUE)
	{
		DecodeRSRQ_Range(&o_decoded_field->rsrq, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->sinr_exist == TRUE)
	{
		DecodeSINR_Range(&o_decoded_field->sinr, buff, bits_iter, asn_error);
	}

}

