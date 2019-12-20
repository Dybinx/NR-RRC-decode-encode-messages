/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * scheduling_request_to_add_mod.c - codec the message of SchedulingRequestToAddMod
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#include <assert.h>
#include "mem.h"
#include "scheduling_request_to_add_mod.h"


void EncodeSchedulingRequestToAddMod_sr_ProhibitTimer(
	SchedulingRequestToAddMod_sr_ProhibitTimer_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 3, bits_iter);
}

void EncodeSchedulingRequestToAddMod_sr_TransMax(
	SchedulingRequestToAddMod_sr_TransMax_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 3, bits_iter);
}

void EncodeSchedulingRequestToAddMod(
	SchedulingRequestToAddMod_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	if(i_encoded_field->sr_ProhibitTimer_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	EncodeSchedulingRequestId(&i_encoded_field->schedulingRequestId, buff, bits_iter, asn_error);

	if(i_encoded_field->sr_ProhibitTimer_exist == TRUE)
	{
		EncodeSchedulingRequestToAddMod_sr_ProhibitTimer(i_encoded_field->sr_ProhibitTimer, buff, bits_iter, asn_error);
	}

	EncodeSchedulingRequestToAddMod_sr_TransMax(i_encoded_field->sr_TransMax, buff, bits_iter, asn_error);

}

void DecodeSchedulingRequestToAddMod_sr_ProhibitTimer(
	SchedulingRequestToAddMod_sr_ProhibitTimer_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = Get_bits(buff, 3, bits_iter);
}

void DecodeSchedulingRequestToAddMod_sr_TransMax(
	SchedulingRequestToAddMod_sr_TransMax_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = Get_bits(buff, 3, bits_iter);
}

void DecodeSchedulingRequestToAddMod(
	SchedulingRequestToAddMod_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	o_decoded_field->sr_ProhibitTimer_exist = Get_bits(buff, 1, bits_iter);
	DecodeSchedulingRequestId(&o_decoded_field->schedulingRequestId, buff, bits_iter, asn_error);
	if(o_decoded_field->sr_ProhibitTimer_exist == TRUE)
	{
		DecodeSchedulingRequestToAddMod_sr_ProhibitTimer(&o_decoded_field->sr_ProhibitTimer, buff, bits_iter, asn_error);
	}

	DecodeSchedulingRequestToAddMod_sr_TransMax(&o_decoded_field->sr_TransMax, buff, bits_iter, asn_error);
}

