/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * meas_id_to_add_mod.c - codec the message of MeasIdToAddMod
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#include <assert.h>
#include "mem.h"
#include "meas_id_to_add_mod.h"


void EncodeMeasIdToAddMod(
	MeasIdToAddMod_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	EncodeMeasId(&i_encoded_field->measId, buff, bits_iter, asn_error);

	EncodeMeasObjectId(&i_encoded_field->measObjectId, buff, bits_iter, asn_error);

	EncodeReportConfigId(&i_encoded_field->reportConfigId, buff, bits_iter, asn_error);

}

void DecodeMeasIdToAddMod(
	MeasIdToAddMod_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	DecodeMeasId(&o_decoded_field->measId, buff, bits_iter, asn_error);
	DecodeMeasObjectId(&o_decoded_field->measObjectId, buff, bits_iter, asn_error);
	DecodeReportConfigId(&o_decoded_field->reportConfigId, buff, bits_iter, asn_error);
}

