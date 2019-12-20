/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * downlink_preemption.c - codec the message of DownlinkPreemption
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#include <assert.h>
#include "mem.h"
#include "downlink_preemption.h"


void EncodeDownlinkPreemption_timeFrequencySet(
	DownlinkPreemption_timeFrequencySet_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 1, bits_iter);
}

void EncodeDownlinkPreemption_int_ConfigurationPerServingCell(
	DownlinkPreemption_int_ConfigurationPerServingCell_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field->length - 1, 5, bits_iter);
	for(uint32 i = 0; i < i_encoded_field->length; i++)
	{
		EncodeINT_ConfigurationPerServingCell(&i_encoded_field->elm[i], buff, bits_iter, asn_error);
	}
}

void EncodeDownlinkPreemption(
	DownlinkPreemption_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	/*flag for extension marker, within extension root. */
	PutBits(buff, 0, 1, bits_iter);
	EncodeRNTI_Value(&i_encoded_field->int_RNTI, buff, bits_iter, asn_error);

	EncodeDownlinkPreemption_timeFrequencySet(i_encoded_field->timeFrequencySet, buff, bits_iter, asn_error);

	PutBits(buff, i_encoded_field->dci_PayloadSize, 7, bits_iter);

	EncodeDownlinkPreemption_int_ConfigurationPerServingCell(&i_encoded_field->int_ConfigurationPerServingCell, buff, bits_iter, asn_error);

}

void DecodeDownlinkPreemption_timeFrequencySet(
	DownlinkPreemption_timeFrequencySet_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = Get_bits(buff, 1, bits_iter);
}

void DecodeDownlinkPreemption_int_ConfigurationPerServingCell(
	DownlinkPreemption_int_ConfigurationPerServingCell_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint32    count = 0;
	count = Get_bits(buff, 5, bits_iter) + 1;
	o_decoded_field->length = count;

	for(uint32 i = 0; i < count; i++)
	{
		DecodeINT_ConfigurationPerServingCell(&o_decoded_field->elm[i], buff, bits_iter, asn_error);
	}
}

void DecodeDownlinkPreemption(
	DownlinkPreemption_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint8    flag = 0;
	uint8    ext_flag = 0;
	uint32    bits_width = 0;
	uint32    preamble_bitmap = 0;
	
	ext_flag = Get_bits(buff, 1, bits_iter);

	DecodeRNTI_Value(&o_decoded_field->int_RNTI, buff, bits_iter, asn_error);
	DecodeDownlinkPreemption_timeFrequencySet(&o_decoded_field->timeFrequencySet, buff, bits_iter, asn_error);
	o_decoded_field->dci_PayloadSize = Get_bits(buff, 7, bits_iter);
	DecodeDownlinkPreemption_int_ConfigurationPerServingCell(&o_decoded_field->int_ConfigurationPerServingCell, buff, bits_iter, asn_error);
	if(ext_flag == 1)
	{
		//need to handle asn error.
	}
}

