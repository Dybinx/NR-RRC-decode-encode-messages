/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * logical_channel_config.c - codec the message of LogicalChannelConfig
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#include <assert.h>
#include "mem.h"
#include "logical_channel_config.h"


void EncodeLogicalChannelConfig_prioritisedBitRate(
	LogicalChannelConfig_prioritisedBitRate_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 4, bits_iter);
}

void EncodeLogicalChannelConfig_bucketSizeDuration(
	LogicalChannelConfig_bucketSizeDuration_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 4, bits_iter);
}

void EncodeLogicalChannelConfig_allowedServingCells(
	LogicalChannelConfig_allowedServingCells_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field->length - 1, 5, bits_iter);
	for(uint32 i = 0; i < i_encoded_field->length; i++)
	{
		EncodeServCellIndex(&i_encoded_field->elm[i], buff, bits_iter, asn_error);
	}
}

void EncodeLogicalChannelConfig_allowedSCS_List(
	LogicalChannelConfig_allowedSCS_List_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field->length - 1, 3, bits_iter);
	for(uint32 i = 0; i < i_encoded_field->length; i++)
	{
		EncodeSubcarrierSpacing(i_encoded_field->elm[i], buff, bits_iter, asn_error);
	}
}

void EncodeLogicalChannelConfig_maxPUSCH_Duration(
	LogicalChannelConfig_maxPUSCH_Duration_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 3, bits_iter);
}

void EncodeLogicalChannelConfig_configuredGrantType1Allowed(
	LogicalChannelConfig_configuredGrantType1Allowed_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 0, bits_iter);
}

void EncodeLogicalChannelConfig_ul_SpecificParameters(
	LogicalChannelConfig_ul_SpecificParameters_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	/*flag for extension marker, within extension root. */
	PutBits(buff, 0, 1, bits_iter);
	if(i_encoded_field->allowedServingCells_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->allowedSCS_List_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->maxPUSCH_Duration_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->configuredGrantType1Allowed_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->logicalChannelGroup_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->schedulingRequestID_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	PutBits(buff, i_encoded_field->priority - 1, 4, bits_iter);

	EncodeLogicalChannelConfig_prioritisedBitRate(i_encoded_field->prioritisedBitRate, buff, bits_iter, asn_error);

	EncodeLogicalChannelConfig_bucketSizeDuration(i_encoded_field->bucketSizeDuration, buff, bits_iter, asn_error);

	if(i_encoded_field->allowedServingCells_exist == TRUE)
	{
		EncodeLogicalChannelConfig_allowedServingCells(&i_encoded_field->allowedServingCells, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->allowedSCS_List_exist == TRUE)
	{
		EncodeLogicalChannelConfig_allowedSCS_List(&i_encoded_field->allowedSCS_List, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->maxPUSCH_Duration_exist == TRUE)
	{
		EncodeLogicalChannelConfig_maxPUSCH_Duration(i_encoded_field->maxPUSCH_Duration, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->configuredGrantType1Allowed_exist == TRUE)
	{
		EncodeLogicalChannelConfig_configuredGrantType1Allowed(i_encoded_field->configuredGrantType1Allowed, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->logicalChannelGroup_exist == TRUE)
	{
		PutBits(buff, i_encoded_field->logicalChannelGroup, 3, bits_iter);
	}

	if(i_encoded_field->schedulingRequestID_exist == TRUE)
	{
		EncodeSchedulingRequestId(&i_encoded_field->schedulingRequestID, buff, bits_iter, asn_error);
	}

	PutBits(buff, i_encoded_field->logicalChannelSR_Mask, 1, bits_iter);

	PutBits(buff, i_encoded_field->logicalChannelSR_DelayTimerApplied, 1, bits_iter);

}

void EncodeLogicalChannelConfig(
	LogicalChannelConfig_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	/*flag for extension marker, within extension root. */
	PutBits(buff, 0, 1, bits_iter);
	if(i_encoded_field->ul_SpecificParameters_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->ul_SpecificParameters_exist == TRUE)
	{
		EncodeLogicalChannelConfig_ul_SpecificParameters(&i_encoded_field->ul_SpecificParameters, buff, bits_iter, asn_error);
	}

}

void DecodeLogicalChannelConfig_prioritisedBitRate(
	LogicalChannelConfig_prioritisedBitRate_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = Get_bits(buff, 4, bits_iter);
}

void DecodeLogicalChannelConfig_bucketSizeDuration(
	LogicalChannelConfig_bucketSizeDuration_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = Get_bits(buff, 4, bits_iter);
}

void DecodeLogicalChannelConfig_allowedServingCells(
	LogicalChannelConfig_allowedServingCells_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint32    count = 0;
	count = Get_bits(buff, 5, bits_iter) + 1;
	o_decoded_field->length = count;

	for(uint32 i = 0; i < count; i++)
	{
		DecodeServCellIndex(&o_decoded_field->elm[i], buff, bits_iter, asn_error);
	}
}

void DecodeLogicalChannelConfig_allowedSCS_List(
	LogicalChannelConfig_allowedSCS_List_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint32    count = 0;
	count = Get_bits(buff, 3, bits_iter) + 1;
	o_decoded_field->length = count;

	for(uint32 i = 0; i < count; i++)
	{
		DecodeSubcarrierSpacing(&o_decoded_field->elm[i], buff, bits_iter, asn_error);
	}
}

void DecodeLogicalChannelConfig_maxPUSCH_Duration(
	LogicalChannelConfig_maxPUSCH_Duration_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = Get_bits(buff, 3, bits_iter);
}

void DecodeLogicalChannelConfig_configuredGrantType1Allowed(
	LogicalChannelConfig_configuredGrantType1Allowed_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = 0;
}

void DecodeLogicalChannelConfig_ul_SpecificParameters(
	LogicalChannelConfig_ul_SpecificParameters_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint8    flag = 0;
	uint8    ext_flag = 0;
	uint32    bits_width = 0;
	uint32    preamble_bitmap = 0;
	
	ext_flag = Get_bits(buff, 1, bits_iter);

	o_decoded_field->allowedServingCells_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->allowedSCS_List_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->maxPUSCH_Duration_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->configuredGrantType1Allowed_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->logicalChannelGroup_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->schedulingRequestID_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->priority = Get_bits(buff, 4, bits_iter) + 1;
	DecodeLogicalChannelConfig_prioritisedBitRate(&o_decoded_field->prioritisedBitRate, buff, bits_iter, asn_error);
	DecodeLogicalChannelConfig_bucketSizeDuration(&o_decoded_field->bucketSizeDuration, buff, bits_iter, asn_error);
	if(o_decoded_field->allowedServingCells_exist == TRUE)
	{
		DecodeLogicalChannelConfig_allowedServingCells(&o_decoded_field->allowedServingCells, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->allowedSCS_List_exist == TRUE)
	{
		DecodeLogicalChannelConfig_allowedSCS_List(&o_decoded_field->allowedSCS_List, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->maxPUSCH_Duration_exist == TRUE)
	{
		DecodeLogicalChannelConfig_maxPUSCH_Duration(&o_decoded_field->maxPUSCH_Duration, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->configuredGrantType1Allowed_exist == TRUE)
	{
		DecodeLogicalChannelConfig_configuredGrantType1Allowed(&o_decoded_field->configuredGrantType1Allowed, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->logicalChannelGroup_exist == TRUE)
	{
		o_decoded_field->logicalChannelGroup = Get_bits(buff, 3, bits_iter);
	}

	if(o_decoded_field->schedulingRequestID_exist == TRUE)
	{
		DecodeSchedulingRequestId(&o_decoded_field->schedulingRequestID, buff, bits_iter, asn_error);
	}

	o_decoded_field->logicalChannelSR_Mask = Get_bits(buff, 1, bits_iter);
	o_decoded_field->logicalChannelSR_DelayTimerApplied = Get_bits(buff, 1, bits_iter);
	if(ext_flag == 1)
	{
		//need to handle asn error.
	}
}

void DecodeLogicalChannelConfig(
	LogicalChannelConfig_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint8    flag = 0;
	uint8    ext_flag = 0;
	uint32    bits_width = 0;
	uint32    preamble_bitmap = 0;
	
	ext_flag = Get_bits(buff, 1, bits_iter);

	o_decoded_field->ul_SpecificParameters_exist = Get_bits(buff, 1, bits_iter);
	if(o_decoded_field->ul_SpecificParameters_exist == TRUE)
	{
		DecodeLogicalChannelConfig_ul_SpecificParameters(&o_decoded_field->ul_SpecificParameters, buff, bits_iter, asn_error);
	}

	if(ext_flag == 1)
	{
		//need to handle asn error.
	}
}

