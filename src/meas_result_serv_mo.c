/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * meas_result_serv_mo.c - codec the message of MeasResultServMO
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#include <assert.h>
#include "mem.h"
#include "meas_result_serv_mo.h"


void EncodeMeasResultServMO(
	MeasResultServMO_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	/*flag for extension marker, within extension root. */
	PutBits(buff, 0, 1, bits_iter);
	if(i_encoded_field->measResultBestNeighCell_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	EncodeServCellIndex(&i_encoded_field->servCellId, buff, bits_iter, asn_error);

	EncodeMeasResultNR(&i_encoded_field->measResultServingCell, buff, bits_iter, asn_error);

	if(i_encoded_field->measResultBestNeighCell_exist == TRUE)
	{
		EncodeMeasResultNR(&i_encoded_field->measResultBestNeighCell, buff, bits_iter, asn_error);
	}

}

void DecodeMeasResultServMO(
	MeasResultServMO_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint8    flag = 0;
	uint8    ext_flag = 0;
	uint32    bits_width = 0;
	uint32    preamble_bitmap = 0;
	
	ext_flag = Get_bits(buff, 1, bits_iter);

	o_decoded_field->measResultBestNeighCell_exist = Get_bits(buff, 1, bits_iter);
	DecodeServCellIndex(&o_decoded_field->servCellId, buff, bits_iter, asn_error);
	DecodeMeasResultNR(&o_decoded_field->measResultServingCell, buff, bits_iter, asn_error);
	if(o_decoded_field->measResultBestNeighCell_exist == TRUE)
	{
		DecodeMeasResultNR(&o_decoded_field->measResultBestNeighCell, buff, bits_iter, asn_error);
	}

	if(ext_flag == 1)
	{
		//need to handle asn error.
	}
}

