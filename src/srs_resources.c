/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * srs_resources.c - codec the message of SRS-Resources
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#include <assert.h>
#include "mem.h"
#include "srs_resources.h"


void EncodeSRS_Resources_maxNumberAperiodicSRS_PerBWP(
	SRS_Resources_maxNumberAperiodicSRS_PerBWP_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 3, bits_iter);
}

void EncodeSRS_Resources_maxNumberPeriodicSRS_PerBWP(
	SRS_Resources_maxNumberPeriodicSRS_PerBWP_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 3, bits_iter);
}

void EncodeSRS_Resources_maxNumberSemiPersitentSRS_PerBWP(
	SRS_Resources_maxNumberSemiPersitentSRS_PerBWP_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 3, bits_iter);
}

void EncodeSRS_Resources_maxNumberSRS_Ports_PerResource(
	SRS_Resources_maxNumberSRS_Ports_PerResource_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 2, bits_iter);
}

void EncodeSRS_Resources(
	SRS_Resources_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	EncodeSRS_Resources_maxNumberAperiodicSRS_PerBWP(i_encoded_field->maxNumberAperiodicSRS_PerBWP, buff, bits_iter, asn_error);

	PutBits(buff, i_encoded_field->maxNumberAperiodicSRS_PerBWP_PerSlot - 1, 3, bits_iter);

	EncodeSRS_Resources_maxNumberPeriodicSRS_PerBWP(i_encoded_field->maxNumberPeriodicSRS_PerBWP, buff, bits_iter, asn_error);

	PutBits(buff, i_encoded_field->maxNumberPeriodicSRS_PerBWP_PerSlot - 1, 3, bits_iter);

	EncodeSRS_Resources_maxNumberSemiPersitentSRS_PerBWP(i_encoded_field->maxNumberSemiPersitentSRS_PerBWP, buff, bits_iter, asn_error);

	PutBits(buff, i_encoded_field->maxNumberSP_SRS_PerBWP_PerSlot - 1, 3, bits_iter);

	EncodeSRS_Resources_maxNumberSRS_Ports_PerResource(i_encoded_field->maxNumberSRS_Ports_PerResource, buff, bits_iter, asn_error);

}

void DecodeSRS_Resources_maxNumberAperiodicSRS_PerBWP(
	SRS_Resources_maxNumberAperiodicSRS_PerBWP_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = Get_bits(buff, 3, bits_iter);
}

void DecodeSRS_Resources_maxNumberPeriodicSRS_PerBWP(
	SRS_Resources_maxNumberPeriodicSRS_PerBWP_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = Get_bits(buff, 3, bits_iter);
}

void DecodeSRS_Resources_maxNumberSemiPersitentSRS_PerBWP(
	SRS_Resources_maxNumberSemiPersitentSRS_PerBWP_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = Get_bits(buff, 3, bits_iter);
}

void DecodeSRS_Resources_maxNumberSRS_Ports_PerResource(
	SRS_Resources_maxNumberSRS_Ports_PerResource_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = Get_bits(buff, 2, bits_iter);
}

void DecodeSRS_Resources(
	SRS_Resources_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	DecodeSRS_Resources_maxNumberAperiodicSRS_PerBWP(&o_decoded_field->maxNumberAperiodicSRS_PerBWP, buff, bits_iter, asn_error);
	o_decoded_field->maxNumberAperiodicSRS_PerBWP_PerSlot = Get_bits(buff, 3, bits_iter) + 1;
	DecodeSRS_Resources_maxNumberPeriodicSRS_PerBWP(&o_decoded_field->maxNumberPeriodicSRS_PerBWP, buff, bits_iter, asn_error);
	o_decoded_field->maxNumberPeriodicSRS_PerBWP_PerSlot = Get_bits(buff, 3, bits_iter) + 1;
	DecodeSRS_Resources_maxNumberSemiPersitentSRS_PerBWP(&o_decoded_field->maxNumberSemiPersitentSRS_PerBWP, buff, bits_iter, asn_error);
	o_decoded_field->maxNumberSP_SRS_PerBWP_PerSlot = Get_bits(buff, 3, bits_iter) + 1;
	DecodeSRS_Resources_maxNumberSRS_Ports_PerResource(&o_decoded_field->maxNumberSRS_Ports_PerResource, buff, bits_iter, asn_error);
}

