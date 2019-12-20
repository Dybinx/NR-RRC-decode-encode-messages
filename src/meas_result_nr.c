/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * meas_result_nr.c - codec the message of MeasResultNR
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#include <assert.h>
#include "mem.h"
#include "meas_result_nr.h"


void EncodeMeasResultNR_cellResults(
	MeasResultNR_cellResults_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	if(i_encoded_field->resultsSSB_Cell_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->resultsCSI_RS_Cell_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->resultsSSB_Cell_exist == TRUE)
	{
		EncodeMeasQuantityResults(&i_encoded_field->resultsSSB_Cell, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->resultsCSI_RS_Cell_exist == TRUE)
	{
		EncodeMeasQuantityResults(&i_encoded_field->resultsCSI_RS_Cell, buff, bits_iter, asn_error);
	}

}

void EncodeMeasResultNR_rsIndexResults(
	MeasResultNR_rsIndexResults_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	if(i_encoded_field->resultsSSB_Indexes_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->resultsCSI_RS_Indexes_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->resultsSSB_Indexes_exist == TRUE)
	{
		EncodeResultsPerSSB_IndexList(&i_encoded_field->resultsSSB_Indexes, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->resultsCSI_RS_Indexes_exist == TRUE)
	{
		EncodeResultsPerCSI_RS_IndexList(&i_encoded_field->resultsCSI_RS_Indexes, buff, bits_iter, asn_error);
	}

}

void EncodeMeasResultNR_measResult(
	MeasResultNR_measResult_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	if(i_encoded_field->rsIndexResults_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	EncodeMeasResultNR_cellResults(&i_encoded_field->cellResults, buff, bits_iter, asn_error);

	if(i_encoded_field->rsIndexResults_exist == TRUE)
	{
		EncodeMeasResultNR_rsIndexResults(&i_encoded_field->rsIndexResults, buff, bits_iter, asn_error);
	}

}

void EncodeMeasResultNR(
	MeasResultNR_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	/*flag for extension marker, within extension root. */
	PutBits(buff, 0, 1, bits_iter);
	if(i_encoded_field->physCellId_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->physCellId_exist == TRUE)
	{
		EncodePhysCellId(&i_encoded_field->physCellId, buff, bits_iter, asn_error);
	}

	EncodeMeasResultNR_measResult(&i_encoded_field->measResult, buff, bits_iter, asn_error);

}

void DecodeMeasResultNR_cellResults(
	MeasResultNR_cellResults_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	o_decoded_field->resultsSSB_Cell_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->resultsCSI_RS_Cell_exist = Get_bits(buff, 1, bits_iter);
	if(o_decoded_field->resultsSSB_Cell_exist == TRUE)
	{
		DecodeMeasQuantityResults(&o_decoded_field->resultsSSB_Cell, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->resultsCSI_RS_Cell_exist == TRUE)
	{
		DecodeMeasQuantityResults(&o_decoded_field->resultsCSI_RS_Cell, buff, bits_iter, asn_error);
	}

}

void DecodeMeasResultNR_rsIndexResults(
	MeasResultNR_rsIndexResults_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	o_decoded_field->resultsSSB_Indexes_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->resultsCSI_RS_Indexes_exist = Get_bits(buff, 1, bits_iter);
	if(o_decoded_field->resultsSSB_Indexes_exist == TRUE)
	{
		DecodeResultsPerSSB_IndexList(&o_decoded_field->resultsSSB_Indexes, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->resultsCSI_RS_Indexes_exist == TRUE)
	{
		DecodeResultsPerCSI_RS_IndexList(&o_decoded_field->resultsCSI_RS_Indexes, buff, bits_iter, asn_error);
	}

}

void DecodeMeasResultNR_measResult(
	MeasResultNR_measResult_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	o_decoded_field->rsIndexResults_exist = Get_bits(buff, 1, bits_iter);
	DecodeMeasResultNR_cellResults(&o_decoded_field->cellResults, buff, bits_iter, asn_error);
	if(o_decoded_field->rsIndexResults_exist == TRUE)
	{
		DecodeMeasResultNR_rsIndexResults(&o_decoded_field->rsIndexResults, buff, bits_iter, asn_error);
	}

}

void DecodeMeasResultNR(
	MeasResultNR_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint8    flag = 0;
	uint8    ext_flag = 0;
	uint32    bits_width = 0;
	uint32    preamble_bitmap = 0;
	
	ext_flag = Get_bits(buff, 1, bits_iter);

	o_decoded_field->physCellId_exist = Get_bits(buff, 1, bits_iter);
	if(o_decoded_field->physCellId_exist == TRUE)
	{
		DecodePhysCellId(&o_decoded_field->physCellId, buff, bits_iter, asn_error);
	}

	DecodeMeasResultNR_measResult(&o_decoded_field->measResult, buff, bits_iter, asn_error);
	if(ext_flag == 1)
	{
		//need to handle asn error.
	}
}

