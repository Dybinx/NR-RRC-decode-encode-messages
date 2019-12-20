/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * meas_report_quantity.c - codec the message of MeasReportQuantity
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#include <assert.h>
#include "mem.h"
#include "meas_report_quantity.h"


void EncodeMeasReportQuantity(
	MeasReportQuantity_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field->rsrp, 1, bits_iter);

	PutBits(buff, i_encoded_field->rsrq, 1, bits_iter);

	PutBits(buff, i_encoded_field->sinr, 1, bits_iter);

}

void DecodeMeasReportQuantity(
	MeasReportQuantity_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	o_decoded_field->rsrp = Get_bits(buff, 1, bits_iter);
	o_decoded_field->rsrq = Get_bits(buff, 1, bits_iter);
	o_decoded_field->sinr = Get_bits(buff, 1, bits_iter);
}

