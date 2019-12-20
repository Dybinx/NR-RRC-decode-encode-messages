/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * threshold_nr.c - codec the message of ThresholdNR
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#include <assert.h>
#include "mem.h"
#include "threshold_nr.h"


void EncodeThresholdNR(
	ThresholdNR_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	if(i_encoded_field->thresholdRSRP_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->thresholdRSRQ_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->thresholdSINR_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->thresholdRSRP_exist == TRUE)
	{
		EncodeRSRP_Range(&i_encoded_field->thresholdRSRP, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->thresholdRSRQ_exist == TRUE)
	{
		EncodeRSRQ_Range(&i_encoded_field->thresholdRSRQ, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->thresholdSINR_exist == TRUE)
	{
		EncodeSINR_Range(&i_encoded_field->thresholdSINR, buff, bits_iter, asn_error);
	}

}

void DecodeThresholdNR(
	ThresholdNR_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	o_decoded_field->thresholdRSRP_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->thresholdRSRQ_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->thresholdSINR_exist = Get_bits(buff, 1, bits_iter);
	if(o_decoded_field->thresholdRSRP_exist == TRUE)
	{
		DecodeRSRP_Range(&o_decoded_field->thresholdRSRP, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->thresholdRSRQ_exist == TRUE)
	{
		DecodeRSRQ_Range(&o_decoded_field->thresholdRSRQ, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->thresholdSINR_exist == TRUE)
	{
		DecodeSINR_Range(&o_decoded_field->thresholdSINR, buff, bits_iter, asn_error);
	}

}

