/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * meas_result2_nr.c - codec the message of MeasResult2NR
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#include <assert.h>
#include "mem.h"
#include "meas_result2_nr.h"


void EncodeMeasResult2NR(
	MeasResult2NR_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	if(i_encoded_field->ssbFrequency_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->refFreqCSI_RS_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->measResultServingCell_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->ssbFrequency_exist == TRUE)
	{
		EncodeARFCN_ValueNR(&i_encoded_field->ssbFrequency, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->refFreqCSI_RS_exist == TRUE)
	{
		EncodeARFCN_ValueNR(&i_encoded_field->refFreqCSI_RS, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->measResultServingCell_exist == TRUE)
	{
		EncodeMeasResultNR(&i_encoded_field->measResultServingCell, buff, bits_iter, asn_error);
	}

	EncodeMeasResultListNR(&i_encoded_field->measResultNeighCellListNR, buff, bits_iter, asn_error);

}

void DecodeMeasResult2NR(
	MeasResult2NR_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	o_decoded_field->ssbFrequency_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->refFreqCSI_RS_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->measResultServingCell_exist = Get_bits(buff, 1, bits_iter);
	if(o_decoded_field->ssbFrequency_exist == TRUE)
	{
		DecodeARFCN_ValueNR(&o_decoded_field->ssbFrequency, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->refFreqCSI_RS_exist == TRUE)
	{
		DecodeARFCN_ValueNR(&o_decoded_field->refFreqCSI_RS, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->measResultServingCell_exist == TRUE)
	{
		DecodeMeasResultNR(&o_decoded_field->measResultServingCell, buff, bits_iter, asn_error);
	}

	DecodeMeasResultListNR(&o_decoded_field->measResultNeighCellListNR, buff, bits_iter, asn_error);
}

