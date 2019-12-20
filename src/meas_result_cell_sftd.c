/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * meas_result_cell_sftd.c - codec the message of MeasResultCellSFTD
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#include <assert.h>
#include "mem.h"
#include "meas_result_cell_sftd.h"


void EncodeMeasResultCellSFTD(
	MeasResultCellSFTD_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	if(i_encoded_field->rsrp_Result_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	EncodePhysCellId(&i_encoded_field->physCellId, buff, bits_iter, asn_error);

	PutBits(buff, i_encoded_field->sfn_OffsetResult, 10, bits_iter);

	PutBits(buff, i_encoded_field->frameBoundaryOffsetResult + 30720, 16, bits_iter);

	if(i_encoded_field->rsrp_Result_exist == TRUE)
	{
		EncodeRSRP_Range(&i_encoded_field->rsrp_Result, buff, bits_iter, asn_error);
	}

}

void DecodeMeasResultCellSFTD(
	MeasResultCellSFTD_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	o_decoded_field->rsrp_Result_exist = Get_bits(buff, 1, bits_iter);
	DecodePhysCellId(&o_decoded_field->physCellId, buff, bits_iter, asn_error);
	o_decoded_field->sfn_OffsetResult = Get_bits(buff, 10, bits_iter);
	o_decoded_field->frameBoundaryOffsetResult = Get_bits(buff, 16, bits_iter) - 30720;
	if(o_decoded_field->rsrp_Result_exist == TRUE)
	{
		DecodeRSRP_Range(&o_decoded_field->rsrp_Result, buff, bits_iter, asn_error);
	}

}

