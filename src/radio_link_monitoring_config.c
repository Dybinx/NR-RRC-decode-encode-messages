/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * radio_link_monitoring_config.c - codec the message of RadioLinkMonitoringConfig
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#include <assert.h>
#include "mem.h"
#include "radio_link_monitoring_config.h"


void EncodeRadioLinkMonitoringConfig_failureDetectionResourcesToAddModList(
	RadioLinkMonitoringConfig_failureDetectionResourcesToAddModList_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field->length - 1, 4, bits_iter);
	for(uint32 i = 0; i < i_encoded_field->length; i++)
	{
		EncodeRadioLinkMonitoringRS(&i_encoded_field->elm[i], buff, bits_iter, asn_error);
	}
}

void EncodeRadioLinkMonitoringConfig_failureDetectionResourcesToReleaseList(
	RadioLinkMonitoringConfig_failureDetectionResourcesToReleaseList_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field->length - 1, 4, bits_iter);
	for(uint32 i = 0; i < i_encoded_field->length; i++)
	{
		EncodeRadioLinkMonitoringRS_Id(&i_encoded_field->elm[i], buff, bits_iter, asn_error);
	}
}

void EncodeRadioLinkMonitoringConfig_beamFailureInstanceMaxCount(
	RadioLinkMonitoringConfig_beamFailureInstanceMaxCount_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 3, bits_iter);
}

void EncodeRadioLinkMonitoringConfig_beamFailureDetectionTimer(
	RadioLinkMonitoringConfig_beamFailureDetectionTimer_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 3, bits_iter);
}

void EncodeRadioLinkMonitoringConfig(
	RadioLinkMonitoringConfig_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	/*flag for extension marker, within extension root. */
	PutBits(buff, 0, 1, bits_iter);
	if(i_encoded_field->failureDetectionResourcesToAddModList_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->failureDetectionResourcesToReleaseList_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->beamFailureInstanceMaxCount_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->beamFailureDetectionTimer_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->failureDetectionResourcesToAddModList_exist == TRUE)
	{
		EncodeRadioLinkMonitoringConfig_failureDetectionResourcesToAddModList(&i_encoded_field->failureDetectionResourcesToAddModList, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->failureDetectionResourcesToReleaseList_exist == TRUE)
	{
		EncodeRadioLinkMonitoringConfig_failureDetectionResourcesToReleaseList(&i_encoded_field->failureDetectionResourcesToReleaseList, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->beamFailureInstanceMaxCount_exist == TRUE)
	{
		EncodeRadioLinkMonitoringConfig_beamFailureInstanceMaxCount(i_encoded_field->beamFailureInstanceMaxCount, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->beamFailureDetectionTimer_exist == TRUE)
	{
		EncodeRadioLinkMonitoringConfig_beamFailureDetectionTimer(i_encoded_field->beamFailureDetectionTimer, buff, bits_iter, asn_error);
	}

}

void DecodeRadioLinkMonitoringConfig_failureDetectionResourcesToAddModList(
	RadioLinkMonitoringConfig_failureDetectionResourcesToAddModList_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint32    count = 0;
	count = Get_bits(buff, 4, bits_iter) + 1;
	o_decoded_field->length = count;

	for(uint32 i = 0; i < count; i++)
	{
		DecodeRadioLinkMonitoringRS(&o_decoded_field->elm[i], buff, bits_iter, asn_error);
	}
}

void DecodeRadioLinkMonitoringConfig_failureDetectionResourcesToReleaseList(
	RadioLinkMonitoringConfig_failureDetectionResourcesToReleaseList_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint32    count = 0;
	count = Get_bits(buff, 4, bits_iter) + 1;
	o_decoded_field->length = count;

	for(uint32 i = 0; i < count; i++)
	{
		DecodeRadioLinkMonitoringRS_Id(&o_decoded_field->elm[i], buff, bits_iter, asn_error);
	}
}

void DecodeRadioLinkMonitoringConfig_beamFailureInstanceMaxCount(
	RadioLinkMonitoringConfig_beamFailureInstanceMaxCount_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = Get_bits(buff, 3, bits_iter);
}

void DecodeRadioLinkMonitoringConfig_beamFailureDetectionTimer(
	RadioLinkMonitoringConfig_beamFailureDetectionTimer_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = Get_bits(buff, 3, bits_iter);
}

void DecodeRadioLinkMonitoringConfig(
	RadioLinkMonitoringConfig_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint8    flag = 0;
	uint8    ext_flag = 0;
	uint32    bits_width = 0;
	uint32    preamble_bitmap = 0;
	
	ext_flag = Get_bits(buff, 1, bits_iter);

	o_decoded_field->failureDetectionResourcesToAddModList_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->failureDetectionResourcesToReleaseList_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->beamFailureInstanceMaxCount_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->beamFailureDetectionTimer_exist = Get_bits(buff, 1, bits_iter);
	if(o_decoded_field->failureDetectionResourcesToAddModList_exist == TRUE)
	{
		DecodeRadioLinkMonitoringConfig_failureDetectionResourcesToAddModList(&o_decoded_field->failureDetectionResourcesToAddModList, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->failureDetectionResourcesToReleaseList_exist == TRUE)
	{
		DecodeRadioLinkMonitoringConfig_failureDetectionResourcesToReleaseList(&o_decoded_field->failureDetectionResourcesToReleaseList, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->beamFailureInstanceMaxCount_exist == TRUE)
	{
		DecodeRadioLinkMonitoringConfig_beamFailureInstanceMaxCount(&o_decoded_field->beamFailureInstanceMaxCount, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->beamFailureDetectionTimer_exist == TRUE)
	{
		DecodeRadioLinkMonitoringConfig_beamFailureDetectionTimer(&o_decoded_field->beamFailureDetectionTimer, buff, bits_iter, asn_error);
	}

	if(ext_flag == 1)
	{
		//need to handle asn error.
	}
}

