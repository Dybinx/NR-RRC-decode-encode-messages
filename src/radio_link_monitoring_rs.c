/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * radio_link_monitoring_rs.c - codec the message of RadioLinkMonitoringRS
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#include <assert.h>
#include "mem.h"
#include "radio_link_monitoring_rs.h"


void EncodeRadioLinkMonitoringRS_purpose(
	RadioLinkMonitoringRS_purpose_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 2, bits_iter);
}

void EncodeRadioLinkMonitoringRS_detectionResource(
	RadioLinkMonitoringRS_detectionResource_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field->type, 1, bits_iter);
	switch (i_encoded_field->type)
	{
	case RADIOLINKMONITORINGRS_DETECTIONRESOURCE_SSB_INDEX:
		EncodeSSB_Index(&i_encoded_field->a.ssb_Index, buff, bits_iter, asn_error);
		break;

	case RADIOLINKMONITORINGRS_DETECTIONRESOURCE_CSI_RS_INDEX:
		EncodeNZP_CSI_RS_ResourceId(&i_encoded_field->a.csi_RS_Index, buff, bits_iter, asn_error);
		break;

	default:
		break;	}
}

void EncodeRadioLinkMonitoringRS(
	RadioLinkMonitoringRS_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	/*flag for extension marker, within extension root. */
	PutBits(buff, 0, 1, bits_iter);
	EncodeRadioLinkMonitoringRS_Id(&i_encoded_field->radioLinkMonitoringRS_Id, buff, bits_iter, asn_error);

	EncodeRadioLinkMonitoringRS_purpose(i_encoded_field->purpose, buff, bits_iter, asn_error);

	EncodeRadioLinkMonitoringRS_detectionResource(&i_encoded_field->detectionResource, buff, bits_iter, asn_error);

}

void DecodeRadioLinkMonitoringRS_purpose(
	RadioLinkMonitoringRS_purpose_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = Get_bits(buff, 2, bits_iter);
}

void DecodeRadioLinkMonitoringRS_detectionResource(
	RadioLinkMonitoringRS_detectionResource_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint32    index = 0;

	index = Get_bits(buff, 1, bits_iter);
	o_decoded_field->type = index;
	switch (index)
	{
	case RADIOLINKMONITORINGRS_DETECTIONRESOURCE_SSB_INDEX:
		DecodeSSB_Index(&o_decoded_field->a.ssb_Index, buff, bits_iter, asn_error);
		break;

	case RADIOLINKMONITORINGRS_DETECTIONRESOURCE_CSI_RS_INDEX:
		DecodeNZP_CSI_RS_ResourceId(&o_decoded_field->a.csi_RS_Index, buff, bits_iter, asn_error);
		break;

	default:
		break;

	}
}

void DecodeRadioLinkMonitoringRS(
	RadioLinkMonitoringRS_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint8    flag = 0;
	uint8    ext_flag = 0;
	uint32    bits_width = 0;
	uint32    preamble_bitmap = 0;
	
	ext_flag = Get_bits(buff, 1, bits_iter);

	DecodeRadioLinkMonitoringRS_Id(&o_decoded_field->radioLinkMonitoringRS_Id, buff, bits_iter, asn_error);
	DecodeRadioLinkMonitoringRS_purpose(&o_decoded_field->purpose, buff, bits_iter, asn_error);
	DecodeRadioLinkMonitoringRS_detectionResource(&o_decoded_field->detectionResource, buff, bits_iter, asn_error);
	if(ext_flag == 1)
	{
		//need to handle asn error.
	}
}

