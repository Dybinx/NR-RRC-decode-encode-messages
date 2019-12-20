/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * csi_aperiodic_trigger_state.c - codec the message of CSI-AperiodicTriggerState
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#include <assert.h>
#include "mem.h"
#include "csi_aperiodic_trigger_state.h"


void EncodeCSI_AperiodicTriggerState_associatedReportConfigInfoList(
	CSI_AperiodicTriggerState_associatedReportConfigInfoList_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field->length - 1, 4, bits_iter);
	for(uint32 i = 0; i < i_encoded_field->length; i++)
	{
		EncodeCSI_AssociatedReportConfigInfo(&i_encoded_field->elm[i], buff, bits_iter, asn_error);
	}
}

void EncodeCSI_AperiodicTriggerState(
	CSI_AperiodicTriggerState_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	/*flag for extension marker, within extension root. */
	PutBits(buff, 0, 1, bits_iter);
	EncodeCSI_AperiodicTriggerState_associatedReportConfigInfoList(&i_encoded_field->associatedReportConfigInfoList, buff, bits_iter, asn_error);

}

void DecodeCSI_AperiodicTriggerState_associatedReportConfigInfoList(
	CSI_AperiodicTriggerState_associatedReportConfigInfoList_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint32    count = 0;
	count = Get_bits(buff, 4, bits_iter) + 1;
	o_decoded_field->length = count;

	for(uint32 i = 0; i < count; i++)
	{
		DecodeCSI_AssociatedReportConfigInfo(&o_decoded_field->elm[i], buff, bits_iter, asn_error);
	}
}

void DecodeCSI_AperiodicTriggerState(
	CSI_AperiodicTriggerState_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint8    flag = 0;
	uint8    ext_flag = 0;
	uint32    bits_width = 0;
	uint32    preamble_bitmap = 0;
	
	ext_flag = Get_bits(buff, 1, bits_iter);

	DecodeCSI_AperiodicTriggerState_associatedReportConfigInfoList(&o_decoded_field->associatedReportConfigInfoList, buff, bits_iter, asn_error);
	if(ext_flag == 1)
	{
		//need to handle asn error.
	}
}

