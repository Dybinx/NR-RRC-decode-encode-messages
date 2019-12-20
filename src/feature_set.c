/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * feature_set.c - codec the message of FeatureSet
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#include <assert.h>
#include "mem.h"
#include "feature_set.h"


void EncodeFeatureSet_eutra(
	FeatureSet_eutra_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	EncodeFeatureSetEUTRA_DownlinkId(&i_encoded_field->downlinkSetEUTRA, buff, bits_iter, asn_error);

	EncodeFeatureSetEUTRA_UplinkId(&i_encoded_field->uplinkSetEUTRA, buff, bits_iter, asn_error);

}

void EncodeFeatureSet_nr(
	FeatureSet_nr_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	EncodeFeatureSetDownlinkId(&i_encoded_field->downlinkSetNR, buff, bits_iter, asn_error);

	EncodeFeatureSetUplinkId(&i_encoded_field->uplinkSetNR, buff, bits_iter, asn_error);

}

void EncodeFeatureSet(
	FeatureSet_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field->type, 1, bits_iter);
	switch (i_encoded_field->type)
	{
	case FEATURESET_EUTRA:
		EncodeFeatureSet_eutra(&i_encoded_field->a.eutra, buff, bits_iter, asn_error);
		break;

	case FEATURESET_NR:
		EncodeFeatureSet_nr(&i_encoded_field->a.nr, buff, bits_iter, asn_error);
		break;

	default:
		break;	}
}

void DecodeFeatureSet_eutra(
	FeatureSet_eutra_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	DecodeFeatureSetEUTRA_DownlinkId(&o_decoded_field->downlinkSetEUTRA, buff, bits_iter, asn_error);
	DecodeFeatureSetEUTRA_UplinkId(&o_decoded_field->uplinkSetEUTRA, buff, bits_iter, asn_error);
}

void DecodeFeatureSet_nr(
	FeatureSet_nr_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	DecodeFeatureSetDownlinkId(&o_decoded_field->downlinkSetNR, buff, bits_iter, asn_error);
	DecodeFeatureSetUplinkId(&o_decoded_field->uplinkSetNR, buff, bits_iter, asn_error);
}

void DecodeFeatureSet(
	FeatureSet_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint32    index = 0;

	index = Get_bits(buff, 1, bits_iter);
	o_decoded_field->type = index;
	switch (index)
	{
	case FEATURESET_EUTRA:
		DecodeFeatureSet_eutra(&o_decoded_field->a.eutra, buff, bits_iter, asn_error);
		break;

	case FEATURESET_NR:
		DecodeFeatureSet_nr(&o_decoded_field->a.nr, buff, bits_iter, asn_error);
		break;

	default:
		break;

	}
}

