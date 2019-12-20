/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * scheduling_request_resource_config.c - codec the message of SchedulingRequestResourceConfig
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#include <assert.h>
#include "mem.h"
#include "scheduling_request_resource_config.h"


void EncodeSchedulingRequestResourceConfig_sym2(
	SchedulingRequestResourceConfig_sym2_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
}

void EncodeSchedulingRequestResourceConfig_sym6or7(
	SchedulingRequestResourceConfig_sym6or7_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
}

void EncodeSchedulingRequestResourceConfig_sl1(
	SchedulingRequestResourceConfig_sl1_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
}

void EncodeSchedulingRequestResourceConfig_periodicityAndOffset(
	SchedulingRequestResourceConfig_periodicityAndOffset_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field->type, 4, bits_iter);
	switch (i_encoded_field->type)
	{
	case SCHEDULINGREQUESTRESOURCECONFIG_PERIODICITYANDOFFSET_SYM2:
		EncodeSchedulingRequestResourceConfig_sym2(&i_encoded_field->a.sym2, buff, bits_iter, asn_error);
		break;

	case SCHEDULINGREQUESTRESOURCECONFIG_PERIODICITYANDOFFSET_SYM6OR7:
		EncodeSchedulingRequestResourceConfig_sym6or7(&i_encoded_field->a.sym6or7, buff, bits_iter, asn_error);
		break;

	case SCHEDULINGREQUESTRESOURCECONFIG_PERIODICITYANDOFFSET_SL1:
		EncodeSchedulingRequestResourceConfig_sl1(&i_encoded_field->a.sl1, buff, bits_iter, asn_error);
		break;

	case SCHEDULINGREQUESTRESOURCECONFIG_PERIODICITYANDOFFSET_SL2:
		PutBits(buff, i_encoded_field->a.sl2, 1, bits_iter);
		break;

	case SCHEDULINGREQUESTRESOURCECONFIG_PERIODICITYANDOFFSET_SL4:
		PutBits(buff, i_encoded_field->a.sl4, 2, bits_iter);
		break;

	case SCHEDULINGREQUESTRESOURCECONFIG_PERIODICITYANDOFFSET_SL5:
		PutBits(buff, i_encoded_field->a.sl5, 3, bits_iter);
		break;

	case SCHEDULINGREQUESTRESOURCECONFIG_PERIODICITYANDOFFSET_SL8:
		PutBits(buff, i_encoded_field->a.sl8, 3, bits_iter);
		break;

	case SCHEDULINGREQUESTRESOURCECONFIG_PERIODICITYANDOFFSET_SL10:
		PutBits(buff, i_encoded_field->a.sl10, 4, bits_iter);
		break;

	case SCHEDULINGREQUESTRESOURCECONFIG_PERIODICITYANDOFFSET_SL16:
		PutBits(buff, i_encoded_field->a.sl16, 4, bits_iter);
		break;

	case SCHEDULINGREQUESTRESOURCECONFIG_PERIODICITYANDOFFSET_SL20:
		PutBits(buff, i_encoded_field->a.sl20, 5, bits_iter);
		break;

	case SCHEDULINGREQUESTRESOURCECONFIG_PERIODICITYANDOFFSET_SL40:
		PutBits(buff, i_encoded_field->a.sl40, 6, bits_iter);
		break;

	case SCHEDULINGREQUESTRESOURCECONFIG_PERIODICITYANDOFFSET_SL80:
		PutBits(buff, i_encoded_field->a.sl80, 7, bits_iter);
		break;

	case SCHEDULINGREQUESTRESOURCECONFIG_PERIODICITYANDOFFSET_SL160:
		PutBits(buff, i_encoded_field->a.sl160, 8, bits_iter);
		break;

	case SCHEDULINGREQUESTRESOURCECONFIG_PERIODICITYANDOFFSET_SL320:
		PutBits(buff, i_encoded_field->a.sl320, 9, bits_iter);
		break;

	case SCHEDULINGREQUESTRESOURCECONFIG_PERIODICITYANDOFFSET_SL640:
		PutBits(buff, i_encoded_field->a.sl640, 10, bits_iter);
		break;

	default:
		break;	}
}

void EncodeSchedulingRequestResourceConfig(
	SchedulingRequestResourceConfig_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	if(i_encoded_field->periodicityAndOffset_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->resource_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	EncodeSchedulingRequestResourceId(&i_encoded_field->schedulingRequestResourceId, buff, bits_iter, asn_error);

	EncodeSchedulingRequestId(&i_encoded_field->schedulingRequestID, buff, bits_iter, asn_error);

	if(i_encoded_field->periodicityAndOffset_exist == TRUE)
	{
		EncodeSchedulingRequestResourceConfig_periodicityAndOffset(&i_encoded_field->periodicityAndOffset, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->resource_exist == TRUE)
	{
		EncodePUCCH_ResourceId(&i_encoded_field->resource, buff, bits_iter, asn_error);
	}

}

void DecodeSchedulingRequestResourceConfig_sym2(
	SchedulingRequestResourceConfig_sym2_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
}

void DecodeSchedulingRequestResourceConfig_sym6or7(
	SchedulingRequestResourceConfig_sym6or7_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
}

void DecodeSchedulingRequestResourceConfig_sl1(
	SchedulingRequestResourceConfig_sl1_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
}

void DecodeSchedulingRequestResourceConfig_periodicityAndOffset(
	SchedulingRequestResourceConfig_periodicityAndOffset_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint32    index = 0;

	index = Get_bits(buff, 4, bits_iter);
	o_decoded_field->type = index;
	switch (index)
	{
	case SCHEDULINGREQUESTRESOURCECONFIG_PERIODICITYANDOFFSET_SYM2:
		DecodeSchedulingRequestResourceConfig_sym2(&o_decoded_field->a.sym2, buff, bits_iter, asn_error);
		break;

	case SCHEDULINGREQUESTRESOURCECONFIG_PERIODICITYANDOFFSET_SYM6OR7:
		DecodeSchedulingRequestResourceConfig_sym6or7(&o_decoded_field->a.sym6or7, buff, bits_iter, asn_error);
		break;

	case SCHEDULINGREQUESTRESOURCECONFIG_PERIODICITYANDOFFSET_SL1:
		DecodeSchedulingRequestResourceConfig_sl1(&o_decoded_field->a.sl1, buff, bits_iter, asn_error);
		break;

	case SCHEDULINGREQUESTRESOURCECONFIG_PERIODICITYANDOFFSET_SL2:
		o_decoded_field->a.sl2 = Get_bits(buff, 1, bits_iter);
		break;

	case SCHEDULINGREQUESTRESOURCECONFIG_PERIODICITYANDOFFSET_SL4:
		o_decoded_field->a.sl4 = Get_bits(buff, 2, bits_iter);
		break;

	case SCHEDULINGREQUESTRESOURCECONFIG_PERIODICITYANDOFFSET_SL5:
		o_decoded_field->a.sl5 = Get_bits(buff, 3, bits_iter);
		break;

	case SCHEDULINGREQUESTRESOURCECONFIG_PERIODICITYANDOFFSET_SL8:
		o_decoded_field->a.sl8 = Get_bits(buff, 3, bits_iter);
		break;

	case SCHEDULINGREQUESTRESOURCECONFIG_PERIODICITYANDOFFSET_SL10:
		o_decoded_field->a.sl10 = Get_bits(buff, 4, bits_iter);
		break;

	case SCHEDULINGREQUESTRESOURCECONFIG_PERIODICITYANDOFFSET_SL16:
		o_decoded_field->a.sl16 = Get_bits(buff, 4, bits_iter);
		break;

	case SCHEDULINGREQUESTRESOURCECONFIG_PERIODICITYANDOFFSET_SL20:
		o_decoded_field->a.sl20 = Get_bits(buff, 5, bits_iter);
		break;

	case SCHEDULINGREQUESTRESOURCECONFIG_PERIODICITYANDOFFSET_SL40:
		o_decoded_field->a.sl40 = Get_bits(buff, 6, bits_iter);
		break;

	case SCHEDULINGREQUESTRESOURCECONFIG_PERIODICITYANDOFFSET_SL80:
		o_decoded_field->a.sl80 = Get_bits(buff, 7, bits_iter);
		break;

	case SCHEDULINGREQUESTRESOURCECONFIG_PERIODICITYANDOFFSET_SL160:
		o_decoded_field->a.sl160 = Get_bits(buff, 8, bits_iter);
		break;

	case SCHEDULINGREQUESTRESOURCECONFIG_PERIODICITYANDOFFSET_SL320:
		o_decoded_field->a.sl320 = Get_bits(buff, 9, bits_iter);
		break;

	case SCHEDULINGREQUESTRESOURCECONFIG_PERIODICITYANDOFFSET_SL640:
		o_decoded_field->a.sl640 = Get_bits(buff, 10, bits_iter);
		break;

	default:
		break;

	}
}

void DecodeSchedulingRequestResourceConfig(
	SchedulingRequestResourceConfig_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	o_decoded_field->periodicityAndOffset_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->resource_exist = Get_bits(buff, 1, bits_iter);
	DecodeSchedulingRequestResourceId(&o_decoded_field->schedulingRequestResourceId, buff, bits_iter, asn_error);
	DecodeSchedulingRequestId(&o_decoded_field->schedulingRequestID, buff, bits_iter, asn_error);
	if(o_decoded_field->periodicityAndOffset_exist == TRUE)
	{
		DecodeSchedulingRequestResourceConfig_periodicityAndOffset(&o_decoded_field->periodicityAndOffset, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->resource_exist == TRUE)
	{
		DecodePUCCH_ResourceId(&o_decoded_field->resource, buff, bits_iter, asn_error);
	}

}

