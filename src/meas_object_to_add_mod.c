/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * meas_object_to_add_mod.c - codec the message of MeasObjectToAddMod
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#include <assert.h>
#include "mem.h"
#include "meas_object_to_add_mod.h"


void EncodeMeasObjectToAddMod_measObject(
	MeasObjectToAddMod_measObject_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	/*flag for extension marker, within extension root.*/
	PutBits(buff, 0, 1, bits_iter);
	PutBits(buff, i_encoded_field->type, 0, bits_iter);
	switch (i_encoded_field->type)
	{
	case MEASOBJECTTOADDMOD_MEASOBJECT_MEASOBJECTNR:
		EncodeMeasObjectNR(&i_encoded_field->a.measObjectNR, buff, bits_iter, asn_error);
		break;

	default:
		break;	}
}

void EncodeMeasObjectToAddMod(
	MeasObjectToAddMod_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	EncodeMeasObjectId(&i_encoded_field->measObjectId, buff, bits_iter, asn_error);

	EncodeMeasObjectToAddMod_measObject(&i_encoded_field->measObject, buff, bits_iter, asn_error);

}

void DecodeMeasObjectToAddMod_measObject(
	MeasObjectToAddMod_measObject_t *o_decoded_field, 
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
	case MEASOBJECTTOADDMOD_MEASOBJECT_MEASOBJECTNR:
		DecodeMeasObjectNR(&o_decoded_field->a.measObjectNR, buff, bits_iter, asn_error);
		break;

	default:
		break;

	}
}

void DecodeMeasObjectToAddMod(
	MeasObjectToAddMod_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	DecodeMeasObjectId(&o_decoded_field->measObjectId, buff, bits_iter, asn_error);
	DecodeMeasObjectToAddMod_measObject(&o_decoded_field->measObject, buff, bits_iter, asn_error);
}

