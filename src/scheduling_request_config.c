/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * scheduling_request_config.c - codec the message of SchedulingRequestConfig
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#include <assert.h>
#include "mem.h"
#include "scheduling_request_config.h"


void EncodeSchedulingRequestConfig_schedulingRequestToAddModList(
	SchedulingRequestConfig_schedulingRequestToAddModList_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field->length - 1, 3, bits_iter);
	for(uint32 i = 0; i < i_encoded_field->length; i++)
	{
		EncodeSchedulingRequestToAddMod(&i_encoded_field->elm[i], buff, bits_iter, asn_error);
	}
}

void EncodeSchedulingRequestConfig_schedulingRequestToReleaseList(
	SchedulingRequestConfig_schedulingRequestToReleaseList_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field->length - 1, 3, bits_iter);
	for(uint32 i = 0; i < i_encoded_field->length; i++)
	{
		EncodeSchedulingRequestId(&i_encoded_field->elm[i], buff, bits_iter, asn_error);
	}
}

void EncodeSchedulingRequestConfig(
	SchedulingRequestConfig_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	if(i_encoded_field->schedulingRequestToAddModList_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->schedulingRequestToReleaseList_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->schedulingRequestToAddModList_exist == TRUE)
	{
		EncodeSchedulingRequestConfig_schedulingRequestToAddModList(&i_encoded_field->schedulingRequestToAddModList, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->schedulingRequestToReleaseList_exist == TRUE)
	{
		EncodeSchedulingRequestConfig_schedulingRequestToReleaseList(&i_encoded_field->schedulingRequestToReleaseList, buff, bits_iter, asn_error);
	}

}

void DecodeSchedulingRequestConfig_schedulingRequestToAddModList(
	SchedulingRequestConfig_schedulingRequestToAddModList_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint32    count = 0;
	count = Get_bits(buff, 3, bits_iter) + 1;
	o_decoded_field->length = count;

	for(uint32 i = 0; i < count; i++)
	{
		DecodeSchedulingRequestToAddMod(&o_decoded_field->elm[i], buff, bits_iter, asn_error);
	}
}

void DecodeSchedulingRequestConfig_schedulingRequestToReleaseList(
	SchedulingRequestConfig_schedulingRequestToReleaseList_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint32    count = 0;
	count = Get_bits(buff, 3, bits_iter) + 1;
	o_decoded_field->length = count;

	for(uint32 i = 0; i < count; i++)
	{
		DecodeSchedulingRequestId(&o_decoded_field->elm[i], buff, bits_iter, asn_error);
	}
}

void DecodeSchedulingRequestConfig(
	SchedulingRequestConfig_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	o_decoded_field->schedulingRequestToAddModList_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->schedulingRequestToReleaseList_exist = Get_bits(buff, 1, bits_iter);
	if(o_decoded_field->schedulingRequestToAddModList_exist == TRUE)
	{
		DecodeSchedulingRequestConfig_schedulingRequestToAddModList(&o_decoded_field->schedulingRequestToAddModList, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->schedulingRequestToReleaseList_exist == TRUE)
	{
		DecodeSchedulingRequestConfig_schedulingRequestToReleaseList(&o_decoded_field->schedulingRequestToReleaseList, buff, bits_iter, asn_error);
	}

}

