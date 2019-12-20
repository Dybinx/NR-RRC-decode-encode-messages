/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * csi_associated_report_config_info.c - codec the message of CSI-AssociatedReportConfigInfo
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#include <assert.h>
#include "mem.h"
#include "csi_associated_report_config_info.h"


void EncodeCSI_AssociatedReportConfigInfo_qcl_info(
	CSI_AssociatedReportConfigInfo_qcl_info_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field->length - 1, 4, bits_iter);
	for(uint32 i = 0; i < i_encoded_field->length; i++)
	{
		EncodeTCI_StateId(&i_encoded_field->elm[i], buff, bits_iter, asn_error);
	}
}

void EncodeCSI_AssociatedReportConfigInfo_nzp_CSI_RS(
	CSI_AssociatedReportConfigInfo_nzp_CSI_RS_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	if(i_encoded_field->qcl_info_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	PutBits(buff, i_encoded_field->resourceSet - 1, 4, bits_iter);

	if(i_encoded_field->qcl_info_exist == TRUE)
	{
		EncodeCSI_AssociatedReportConfigInfo_qcl_info(&i_encoded_field->qcl_info, buff, bits_iter, asn_error);
	}

}

void EncodeCSI_AssociatedReportConfigInfo_resourcesForChannel(
	CSI_AssociatedReportConfigInfo_resourcesForChannel_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field->type, 1, bits_iter);
	switch (i_encoded_field->type)
	{
	case CSI_ASSOCIATEDREPORTCONFIGINFO_RESOURCESFORCHANNEL_NZP_CSI_RS:
		EncodeCSI_AssociatedReportConfigInfo_nzp_CSI_RS(&i_encoded_field->a.nzp_CSI_RS, buff, bits_iter, asn_error);
		break;

	case CSI_ASSOCIATEDREPORTCONFIGINFO_RESOURCESFORCHANNEL_CSI_SSB_RESOURCESET:
		break;

	default:
		break;	}
}

void EncodeCSI_AssociatedReportConfigInfo(
	CSI_AssociatedReportConfigInfo_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	/*flag for extension marker, within extension root. */
	PutBits(buff, 0, 1, bits_iter);
	if(i_encoded_field->csi_IM_ResourcesforInteference_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->nzp_CSI_RS_ResourcesforInterference_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	EncodeCSI_ReportConfigId(&i_encoded_field->reportConfigId, buff, bits_iter, asn_error);

	EncodeCSI_AssociatedReportConfigInfo_resourcesForChannel(&i_encoded_field->resourcesForChannel, buff, bits_iter, asn_error);

	if(i_encoded_field->csi_IM_ResourcesforInteference_exist == TRUE)
	{
		PutBits(buff, i_encoded_field->csi_IM_ResourcesforInteference - 1, 4, bits_iter);
	}

	if(i_encoded_field->nzp_CSI_RS_ResourcesforInterference_exist == TRUE)
	{
		PutBits(buff, i_encoded_field->nzp_CSI_RS_ResourcesforInterference - 1, 4, bits_iter);
	}

}

void DecodeCSI_AssociatedReportConfigInfo_qcl_info(
	CSI_AssociatedReportConfigInfo_qcl_info_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint32    count = 0;
	count = Get_bits(buff, 4, bits_iter) + 1;
	o_decoded_field->length = count;

	for(uint32 i = 0; i < count; i++)
	{
		DecodeTCI_StateId(&o_decoded_field->elm[i], buff, bits_iter, asn_error);
	}
}

void DecodeCSI_AssociatedReportConfigInfo_nzp_CSI_RS(
	CSI_AssociatedReportConfigInfo_nzp_CSI_RS_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	o_decoded_field->qcl_info_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->resourceSet = Get_bits(buff, 4, bits_iter) + 1;
	if(o_decoded_field->qcl_info_exist == TRUE)
	{
		DecodeCSI_AssociatedReportConfigInfo_qcl_info(&o_decoded_field->qcl_info, buff, bits_iter, asn_error);
	}

}

void DecodeCSI_AssociatedReportConfigInfo_resourcesForChannel(
	CSI_AssociatedReportConfigInfo_resourcesForChannel_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint32    index = 0;

	index = Get_bits(buff, 1, bits_iter);
	o_decoded_field->type = index;
	switch (index)
	{
	case CSI_ASSOCIATEDREPORTCONFIGINFO_RESOURCESFORCHANNEL_NZP_CSI_RS:
		DecodeCSI_AssociatedReportConfigInfo_nzp_CSI_RS(&o_decoded_field->a.nzp_CSI_RS, buff, bits_iter, asn_error);
		break;

	case CSI_ASSOCIATEDREPORTCONFIGINFO_RESOURCESFORCHANNEL_CSI_SSB_RESOURCESET:
		o_decoded_field->a.csi_SSB_ResourceSet = 1;
		break;

	default:
		break;

	}
}

void DecodeCSI_AssociatedReportConfigInfo(
	CSI_AssociatedReportConfigInfo_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint8    flag = 0;
	uint8    ext_flag = 0;
	uint32    bits_width = 0;
	uint32    preamble_bitmap = 0;
	
	ext_flag = Get_bits(buff, 1, bits_iter);

	o_decoded_field->csi_IM_ResourcesforInteference_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->nzp_CSI_RS_ResourcesforInterference_exist = Get_bits(buff, 1, bits_iter);
	DecodeCSI_ReportConfigId(&o_decoded_field->reportConfigId, buff, bits_iter, asn_error);
	DecodeCSI_AssociatedReportConfigInfo_resourcesForChannel(&o_decoded_field->resourcesForChannel, buff, bits_iter, asn_error);
	if(o_decoded_field->csi_IM_ResourcesforInteference_exist == TRUE)
	{
		o_decoded_field->csi_IM_ResourcesforInteference = Get_bits(buff, 4, bits_iter) + 1;
	}

	if(o_decoded_field->nzp_CSI_RS_ResourcesforInterference_exist == TRUE)
	{
		o_decoded_field->nzp_CSI_RS_ResourcesforInterference = Get_bits(buff, 4, bits_iter) + 1;
	}

	if(ext_flag == 1)
	{
		//need to handle asn error.
	}
}

