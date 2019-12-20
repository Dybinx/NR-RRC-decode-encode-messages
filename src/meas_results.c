/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * meas_results.c - codec the message of MeasResults
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#include <assert.h>
#include "mem.h"
#include "meas_results.h"


void EncodeMeasResults_measResultNeighCells(
	MeasResults_measResultNeighCells_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	/*flag for extension marker, within extension root.*/
	PutBits(buff, 0, 1, bits_iter);
	PutBits(buff, i_encoded_field->type, 0, bits_iter);
	switch (i_encoded_field->type)
	{
	case MEASRESULTS_MEASRESULTNEIGHCELLS_MEASRESULTLISTNR:
		EncodeMeasResultListNR(&i_encoded_field->a.measResultListNR, buff, bits_iter, asn_error);
		break;

	default:
		break;	}
}

void EncodeMeasResults(
	MeasResults_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	/*flag for extension marker, within extension root. */
	PutBits(buff, 0, 1, bits_iter);
	if(i_encoded_field->measResultNeighCells_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	EncodeMeasId(&i_encoded_field->measId, buff, bits_iter, asn_error);

	EncodeMeasResultServMOList(&i_encoded_field->measResultServingMOList, buff, bits_iter, asn_error);

	if(i_encoded_field->measResultNeighCells_exist == TRUE)
	{
		EncodeMeasResults_measResultNeighCells(&i_encoded_field->measResultNeighCells, buff, bits_iter, asn_error);
	}

}

void DecodeMeasResults_measResultNeighCells(
	MeasResults_measResultNeighCells_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint32    index = 0;
	uint8    ext_flag = 0;
	uint8    flag = 0;

	ext_flag = Get_bits(buff, 1, bits_iter);
	if(ext_flag == 0)
	{
		index = 0;
	}
	else
	{
		//need to handle this asn error.
	}

	o_decoded_field->type = index;
	switch (index)
	{
	case MEASRESULTS_MEASRESULTNEIGHCELLS_MEASRESULTLISTNR:
		DecodeMeasResultListNR(&o_decoded_field->a.measResultListNR, buff, bits_iter, asn_error);
		break;

	default:
		break;

	}
}

void DecodeMeasResults(
	MeasResults_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint8    flag = 0;
	uint8    ext_flag = 0;
	uint32    bits_width = 0;
	uint32    preamble_bitmap = 0;
	
	ext_flag = Get_bits(buff, 1, bits_iter);

	o_decoded_field->measResultNeighCells_exist = Get_bits(buff, 1, bits_iter);
	DecodeMeasId(&o_decoded_field->measId, buff, bits_iter, asn_error);
	DecodeMeasResultServMOList(&o_decoded_field->measResultServingMOList, buff, bits_iter, asn_error);
	if(o_decoded_field->measResultNeighCells_exist == TRUE)
	{
		DecodeMeasResults_measResultNeighCells(&o_decoded_field->measResultNeighCells, buff, bits_iter, asn_error);
	}

	if(ext_flag == 1)
	{
		//need to handle asn error.
	}
}

