/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * feature_sets.c - codec the message of FeatureSets
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#include <assert.h>
#include "mem.h"
#include "feature_sets.h"


void EncodeFeatureSets_featureSetsDownlink(
	FeatureSets_featureSetsDownlink_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field->length - 1, 10, bits_iter);
	for(uint32 i = 0; i < i_encoded_field->length; i++)
	{
		EncodeFeatureSetDownlink(&i_encoded_field->elm[i], buff, bits_iter, asn_error);
	}
}

void EncodeFeatureSets_featureSetsDownlinkPerCC(
	FeatureSets_featureSetsDownlinkPerCC_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field->length - 1, 10, bits_iter);
	for(uint32 i = 0; i < i_encoded_field->length; i++)
	{
		EncodeFeatureSetDownlinkPerCC(&i_encoded_field->elm[i], buff, bits_iter, asn_error);
	}
}

void EncodeFeatureSets_featureSetsUplink(
	FeatureSets_featureSetsUplink_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field->length - 1, 10, bits_iter);
	for(uint32 i = 0; i < i_encoded_field->length; i++)
	{
		EncodeFeatureSetUplink(&i_encoded_field->elm[i], buff, bits_iter, asn_error);
	}
}

void EncodeFeatureSets_featureSetsUplinkPerCC(
	FeatureSets_featureSetsUplinkPerCC_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field->length - 1, 10, bits_iter);
	for(uint32 i = 0; i < i_encoded_field->length; i++)
	{
		EncodeFeatureSetUplinkPerCC(&i_encoded_field->elm[i], buff, bits_iter, asn_error);
	}
}

void EncodeFeatureSets(
	FeatureSets_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	/*flag for extension marker, within extension root. */
	PutBits(buff, 0, 1, bits_iter);
	if(i_encoded_field->featureSetsDownlink_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->featureSetsDownlinkPerCC_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->featureSetsUplink_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->featureSetsUplinkPerCC_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->featureSetsDownlink_exist == TRUE)
	{
		EncodeFeatureSets_featureSetsDownlink(&i_encoded_field->featureSetsDownlink, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->featureSetsDownlinkPerCC_exist == TRUE)
	{
		EncodeFeatureSets_featureSetsDownlinkPerCC(&i_encoded_field->featureSetsDownlinkPerCC, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->featureSetsUplink_exist == TRUE)
	{
		EncodeFeatureSets_featureSetsUplink(&i_encoded_field->featureSetsUplink, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->featureSetsUplinkPerCC_exist == TRUE)
	{
		EncodeFeatureSets_featureSetsUplinkPerCC(&i_encoded_field->featureSetsUplinkPerCC, buff, bits_iter, asn_error);
	}

}

void DecodeFeatureSets_featureSetsDownlink(
	FeatureSets_featureSetsDownlink_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint32    count = 0;
	count = Get_bits(buff, 10, bits_iter) + 1;
	o_decoded_field->length = count;

	for(uint32 i = 0; i < count; i++)
	{
		DecodeFeatureSetDownlink(&o_decoded_field->elm[i], buff, bits_iter, asn_error);
	}
}

void DecodeFeatureSets_featureSetsDownlinkPerCC(
	FeatureSets_featureSetsDownlinkPerCC_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint32    count = 0;
	count = Get_bits(buff, 10, bits_iter) + 1;
	o_decoded_field->length = count;

	for(uint32 i = 0; i < count; i++)
	{
		DecodeFeatureSetDownlinkPerCC(&o_decoded_field->elm[i], buff, bits_iter, asn_error);
	}
}

void DecodeFeatureSets_featureSetsUplink(
	FeatureSets_featureSetsUplink_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint32    count = 0;
	count = Get_bits(buff, 10, bits_iter) + 1;
	o_decoded_field->length = count;

	for(uint32 i = 0; i < count; i++)
	{
		DecodeFeatureSetUplink(&o_decoded_field->elm[i], buff, bits_iter, asn_error);
	}
}

void DecodeFeatureSets_featureSetsUplinkPerCC(
	FeatureSets_featureSetsUplinkPerCC_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint32    count = 0;
	count = Get_bits(buff, 10, bits_iter) + 1;
	o_decoded_field->length = count;

	for(uint32 i = 0; i < count; i++)
	{
		DecodeFeatureSetUplinkPerCC(&o_decoded_field->elm[i], buff, bits_iter, asn_error);
	}
}

void DecodeFeatureSets(
	FeatureSets_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint8    flag = 0;
	uint8    ext_flag = 0;
	uint32    bits_width = 0;
	uint32    preamble_bitmap = 0;
	
	ext_flag = Get_bits(buff, 1, bits_iter);

	o_decoded_field->featureSetsDownlink_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->featureSetsDownlinkPerCC_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->featureSetsUplink_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->featureSetsUplinkPerCC_exist = Get_bits(buff, 1, bits_iter);
	if(o_decoded_field->featureSetsDownlink_exist == TRUE)
	{
		DecodeFeatureSets_featureSetsDownlink(&o_decoded_field->featureSetsDownlink, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->featureSetsDownlinkPerCC_exist == TRUE)
	{
		DecodeFeatureSets_featureSetsDownlinkPerCC(&o_decoded_field->featureSetsDownlinkPerCC, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->featureSetsUplink_exist == TRUE)
	{
		DecodeFeatureSets_featureSetsUplink(&o_decoded_field->featureSetsUplink, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->featureSetsUplinkPerCC_exist == TRUE)
	{
		DecodeFeatureSets_featureSetsUplinkPerCC(&o_decoded_field->featureSetsUplinkPerCC, buff, bits_iter, asn_error);
	}

	if(ext_flag == 1)
	{
		//need to handle asn error.
	}
}

