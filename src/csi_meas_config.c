/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * csi_meas_config.c - codec the message of CSI-MeasConfig
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#include <assert.h>
#include "mem.h"
#include "csi_meas_config.h"


void EncodeCSI_MeasConfig_nzp_CSI_RS_ResourceToAddModList(
	CSI_MeasConfig_nzp_CSI_RS_ResourceToAddModList_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field->length - 1, 8, bits_iter);
	for(uint32 i = 0; i < i_encoded_field->length; i++)
	{
		EncodeNZP_CSI_RS_Resource(&i_encoded_field->elm[i], buff, bits_iter, asn_error);
	}
}

void EncodeCSI_MeasConfig_nzp_CSI_RS_ResourceToReleaseList(
	CSI_MeasConfig_nzp_CSI_RS_ResourceToReleaseList_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field->length - 1, 8, bits_iter);
	for(uint32 i = 0; i < i_encoded_field->length; i++)
	{
		EncodeNZP_CSI_RS_ResourceId(&i_encoded_field->elm[i], buff, bits_iter, asn_error);
	}
}

void EncodeCSI_MeasConfig_nzp_CSI_RS_ResourceSetToAddModList(
	CSI_MeasConfig_nzp_CSI_RS_ResourceSetToAddModList_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field->length - 1, 6, bits_iter);
	for(uint32 i = 0; i < i_encoded_field->length; i++)
	{
		EncodeNZP_CSI_RS_ResourceSet(&i_encoded_field->elm[i], buff, bits_iter, asn_error);
	}
}

void EncodeCSI_MeasConfig_nzp_CSI_RS_ResourceSetToReleaseList(
	CSI_MeasConfig_nzp_CSI_RS_ResourceSetToReleaseList_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field->length - 1, 6, bits_iter);
	for(uint32 i = 0; i < i_encoded_field->length; i++)
	{
		EncodeNZP_CSI_RS_ResourceSetId(&i_encoded_field->elm[i], buff, bits_iter, asn_error);
	}
}

void EncodeCSI_MeasConfig_csi_IM_ResourceToAddModList(
	CSI_MeasConfig_csi_IM_ResourceToAddModList_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field->length - 1, 5, bits_iter);
	for(uint32 i = 0; i < i_encoded_field->length; i++)
	{
		EncodeCSI_IM_Resource(&i_encoded_field->elm[i], buff, bits_iter, asn_error);
	}
}

void EncodeCSI_MeasConfig_csi_IM_ResourceToReleaseList(
	CSI_MeasConfig_csi_IM_ResourceToReleaseList_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field->length - 1, 5, bits_iter);
	for(uint32 i = 0; i < i_encoded_field->length; i++)
	{
		EncodeCSI_IM_ResourceId(&i_encoded_field->elm[i], buff, bits_iter, asn_error);
	}
}

void EncodeCSI_MeasConfig_csi_IM_ResourceSetToAddModList(
	CSI_MeasConfig_csi_IM_ResourceSetToAddModList_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field->length - 1, 6, bits_iter);
	for(uint32 i = 0; i < i_encoded_field->length; i++)
	{
		EncodeCSI_IM_ResourceSet(&i_encoded_field->elm[i], buff, bits_iter, asn_error);
	}
}

void EncodeCSI_MeasConfig_csi_IM_ResourceSetToReleaseList(
	CSI_MeasConfig_csi_IM_ResourceSetToReleaseList_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field->length - 1, 6, bits_iter);
	for(uint32 i = 0; i < i_encoded_field->length; i++)
	{
		EncodeCSI_IM_ResourceSetId(&i_encoded_field->elm[i], buff, bits_iter, asn_error);
	}
}

void EncodeCSI_MeasConfig_csi_SSB_ResourceSetToAddModList(
	CSI_MeasConfig_csi_SSB_ResourceSetToAddModList_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field->length - 1, 6, bits_iter);
	for(uint32 i = 0; i < i_encoded_field->length; i++)
	{
		EncodeCSI_SSB_ResourceSet(&i_encoded_field->elm[i], buff, bits_iter, asn_error);
	}
}

void EncodeCSI_MeasConfig_csi_SSB_ResourceSetToAddReleaseList(
	CSI_MeasConfig_csi_SSB_ResourceSetToAddReleaseList_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field->length - 1, 6, bits_iter);
	for(uint32 i = 0; i < i_encoded_field->length; i++)
	{
		EncodeCSI_SSB_ResourceSetId(&i_encoded_field->elm[i], buff, bits_iter, asn_error);
	}
}

void EncodeCSI_MeasConfig_csi_ResourceConfigToAddModList(
	CSI_MeasConfig_csi_ResourceConfigToAddModList_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field->length - 1, 7, bits_iter);
	for(uint32 i = 0; i < i_encoded_field->length; i++)
	{
		EncodeCSI_ResourceConfig(&i_encoded_field->elm[i], buff, bits_iter, asn_error);
	}
}

void EncodeCSI_MeasConfig_csi_ResourceConfigToReleaseList(
	CSI_MeasConfig_csi_ResourceConfigToReleaseList_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field->length - 1, 7, bits_iter);
	for(uint32 i = 0; i < i_encoded_field->length; i++)
	{
		EncodeCSI_ResourceConfigId(&i_encoded_field->elm[i], buff, bits_iter, asn_error);
	}
}

void EncodeCSI_MeasConfig_csi_ReportConfigToAddModList(
	CSI_MeasConfig_csi_ReportConfigToAddModList_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field->length - 1, 6, bits_iter);
	for(uint32 i = 0; i < i_encoded_field->length; i++)
	{
		EncodeCSI_ReportConfig(&i_encoded_field->elm[i], buff, bits_iter, asn_error);
	}
}

void EncodeCSI_MeasConfig_csi_ReportConfigToReleaseList(
	CSI_MeasConfig_csi_ReportConfigToReleaseList_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field->length - 1, 6, bits_iter);
	for(uint32 i = 0; i < i_encoded_field->length; i++)
	{
		EncodeCSI_ReportConfigId(&i_encoded_field->elm[i], buff, bits_iter, asn_error);
	}
}

void EncodeCSI_MeasConfig_release(
	CSI_MeasConfig_release_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
}

void EncodeCSI_MeasConfig_aperiodicTriggerStateList(
	CSI_MeasConfig_aperiodicTriggerStateList_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field->type, 1, bits_iter);
	switch (i_encoded_field->type)
	{
	case CSI_MEASCONFIG_APERIODICTRIGGERSTATELIST_RELEASE:
		EncodeCSI_MeasConfig_release(&i_encoded_field->a.release, buff, bits_iter, asn_error);
		break;

	case CSI_MEASCONFIG_APERIODICTRIGGERSTATELIST_SETUP:
		EncodeCSI_AperiodicTriggerStateList(&i_encoded_field->a.setup, buff, bits_iter, asn_error);
		break;

	default:
		break;	}
}

void EncodeCSI_MeasConfig_release_1(
	CSI_MeasConfig_release_1_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
}

void EncodeCSI_MeasConfig_semiPersistentOnPUSCH_TriggerStateList(
	CSI_MeasConfig_semiPersistentOnPUSCH_TriggerStateList_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field->type, 1, bits_iter);
	switch (i_encoded_field->type)
	{
	case CSI_MEASCONFIG_SEMIPERSISTENTONPUSCH_TRIGGERSTATELIST_RELEASE:
		EncodeCSI_MeasConfig_release_1(&i_encoded_field->a.release, buff, bits_iter, asn_error);
		break;

	case CSI_MEASCONFIG_SEMIPERSISTENTONPUSCH_TRIGGERSTATELIST_SETUP:
		EncodeCSI_SemiPersistentOnPUSCH_TriggerStateList(&i_encoded_field->a.setup, buff, bits_iter, asn_error);
		break;

	default:
		break;	}
}

void EncodeCSI_MeasConfig(
	CSI_MeasConfig_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	/*flag for extension marker, within extension root. */
	PutBits(buff, 0, 1, bits_iter);
	if(i_encoded_field->nzp_CSI_RS_ResourceToAddModList_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->nzp_CSI_RS_ResourceToReleaseList_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->nzp_CSI_RS_ResourceSetToAddModList_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->nzp_CSI_RS_ResourceSetToReleaseList_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->csi_IM_ResourceToAddModList_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->csi_IM_ResourceToReleaseList_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->csi_IM_ResourceSetToAddModList_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->csi_IM_ResourceSetToReleaseList_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->csi_SSB_ResourceSetToAddModList_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->csi_SSB_ResourceSetToAddReleaseList_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->csi_ResourceConfigToAddModList_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->csi_ResourceConfigToReleaseList_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->csi_ReportConfigToAddModList_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->csi_ReportConfigToReleaseList_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->reportTriggerSize_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->aperiodicTriggerStateList_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->semiPersistentOnPUSCH_TriggerStateList_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->nzp_CSI_RS_ResourceToAddModList_exist == TRUE)
	{
		EncodeCSI_MeasConfig_nzp_CSI_RS_ResourceToAddModList(&i_encoded_field->nzp_CSI_RS_ResourceToAddModList, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->nzp_CSI_RS_ResourceToReleaseList_exist == TRUE)
	{
		EncodeCSI_MeasConfig_nzp_CSI_RS_ResourceToReleaseList(&i_encoded_field->nzp_CSI_RS_ResourceToReleaseList, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->nzp_CSI_RS_ResourceSetToAddModList_exist == TRUE)
	{
		EncodeCSI_MeasConfig_nzp_CSI_RS_ResourceSetToAddModList(&i_encoded_field->nzp_CSI_RS_ResourceSetToAddModList, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->nzp_CSI_RS_ResourceSetToReleaseList_exist == TRUE)
	{
		EncodeCSI_MeasConfig_nzp_CSI_RS_ResourceSetToReleaseList(&i_encoded_field->nzp_CSI_RS_ResourceSetToReleaseList, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->csi_IM_ResourceToAddModList_exist == TRUE)
	{
		EncodeCSI_MeasConfig_csi_IM_ResourceToAddModList(&i_encoded_field->csi_IM_ResourceToAddModList, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->csi_IM_ResourceToReleaseList_exist == TRUE)
	{
		EncodeCSI_MeasConfig_csi_IM_ResourceToReleaseList(&i_encoded_field->csi_IM_ResourceToReleaseList, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->csi_IM_ResourceSetToAddModList_exist == TRUE)
	{
		EncodeCSI_MeasConfig_csi_IM_ResourceSetToAddModList(&i_encoded_field->csi_IM_ResourceSetToAddModList, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->csi_IM_ResourceSetToReleaseList_exist == TRUE)
	{
		EncodeCSI_MeasConfig_csi_IM_ResourceSetToReleaseList(&i_encoded_field->csi_IM_ResourceSetToReleaseList, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->csi_SSB_ResourceSetToAddModList_exist == TRUE)
	{
		EncodeCSI_MeasConfig_csi_SSB_ResourceSetToAddModList(&i_encoded_field->csi_SSB_ResourceSetToAddModList, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->csi_SSB_ResourceSetToAddReleaseList_exist == TRUE)
	{
		EncodeCSI_MeasConfig_csi_SSB_ResourceSetToAddReleaseList(&i_encoded_field->csi_SSB_ResourceSetToAddReleaseList, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->csi_ResourceConfigToAddModList_exist == TRUE)
	{
		EncodeCSI_MeasConfig_csi_ResourceConfigToAddModList(&i_encoded_field->csi_ResourceConfigToAddModList, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->csi_ResourceConfigToReleaseList_exist == TRUE)
	{
		EncodeCSI_MeasConfig_csi_ResourceConfigToReleaseList(&i_encoded_field->csi_ResourceConfigToReleaseList, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->csi_ReportConfigToAddModList_exist == TRUE)
	{
		EncodeCSI_MeasConfig_csi_ReportConfigToAddModList(&i_encoded_field->csi_ReportConfigToAddModList, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->csi_ReportConfigToReleaseList_exist == TRUE)
	{
		EncodeCSI_MeasConfig_csi_ReportConfigToReleaseList(&i_encoded_field->csi_ReportConfigToReleaseList, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->reportTriggerSize_exist == TRUE)
	{
		PutBits(buff, i_encoded_field->reportTriggerSize, 3, bits_iter);
	}

	if(i_encoded_field->aperiodicTriggerStateList_exist == TRUE)
	{
		EncodeCSI_MeasConfig_aperiodicTriggerStateList(&i_encoded_field->aperiodicTriggerStateList, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->semiPersistentOnPUSCH_TriggerStateList_exist == TRUE)
	{
		EncodeCSI_MeasConfig_semiPersistentOnPUSCH_TriggerStateList(&i_encoded_field->semiPersistentOnPUSCH_TriggerStateList, buff, bits_iter, asn_error);
	}

}

void DecodeCSI_MeasConfig_nzp_CSI_RS_ResourceToAddModList(
	CSI_MeasConfig_nzp_CSI_RS_ResourceToAddModList_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint32    count = 0;
	count = Get_bits(buff, 8, bits_iter) + 1;
	o_decoded_field->length = count;

	for(uint32 i = 0; i < count; i++)
	{
		DecodeNZP_CSI_RS_Resource(&o_decoded_field->elm[i], buff, bits_iter, asn_error);
	}
}

void DecodeCSI_MeasConfig_nzp_CSI_RS_ResourceToReleaseList(
	CSI_MeasConfig_nzp_CSI_RS_ResourceToReleaseList_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint32    count = 0;
	count = Get_bits(buff, 8, bits_iter) + 1;
	o_decoded_field->length = count;

	for(uint32 i = 0; i < count; i++)
	{
		DecodeNZP_CSI_RS_ResourceId(&o_decoded_field->elm[i], buff, bits_iter, asn_error);
	}
}

void DecodeCSI_MeasConfig_nzp_CSI_RS_ResourceSetToAddModList(
	CSI_MeasConfig_nzp_CSI_RS_ResourceSetToAddModList_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint32    count = 0;
	count = Get_bits(buff, 6, bits_iter) + 1;
	o_decoded_field->length = count;

	for(uint32 i = 0; i < count; i++)
	{
		DecodeNZP_CSI_RS_ResourceSet(&o_decoded_field->elm[i], buff, bits_iter, asn_error);
	}
}

void DecodeCSI_MeasConfig_nzp_CSI_RS_ResourceSetToReleaseList(
	CSI_MeasConfig_nzp_CSI_RS_ResourceSetToReleaseList_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint32    count = 0;
	count = Get_bits(buff, 6, bits_iter) + 1;
	o_decoded_field->length = count;

	for(uint32 i = 0; i < count; i++)
	{
		DecodeNZP_CSI_RS_ResourceSetId(&o_decoded_field->elm[i], buff, bits_iter, asn_error);
	}
}

void DecodeCSI_MeasConfig_csi_IM_ResourceToAddModList(
	CSI_MeasConfig_csi_IM_ResourceToAddModList_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint32    count = 0;
	count = Get_bits(buff, 5, bits_iter) + 1;
	o_decoded_field->length = count;

	for(uint32 i = 0; i < count; i++)
	{
		DecodeCSI_IM_Resource(&o_decoded_field->elm[i], buff, bits_iter, asn_error);
	}
}

void DecodeCSI_MeasConfig_csi_IM_ResourceToReleaseList(
	CSI_MeasConfig_csi_IM_ResourceToReleaseList_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint32    count = 0;
	count = Get_bits(buff, 5, bits_iter) + 1;
	o_decoded_field->length = count;

	for(uint32 i = 0; i < count; i++)
	{
		DecodeCSI_IM_ResourceId(&o_decoded_field->elm[i], buff, bits_iter, asn_error);
	}
}

void DecodeCSI_MeasConfig_csi_IM_ResourceSetToAddModList(
	CSI_MeasConfig_csi_IM_ResourceSetToAddModList_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint32    count = 0;
	count = Get_bits(buff, 6, bits_iter) + 1;
	o_decoded_field->length = count;

	for(uint32 i = 0; i < count; i++)
	{
		DecodeCSI_IM_ResourceSet(&o_decoded_field->elm[i], buff, bits_iter, asn_error);
	}
}

void DecodeCSI_MeasConfig_csi_IM_ResourceSetToReleaseList(
	CSI_MeasConfig_csi_IM_ResourceSetToReleaseList_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint32    count = 0;
	count = Get_bits(buff, 6, bits_iter) + 1;
	o_decoded_field->length = count;

	for(uint32 i = 0; i < count; i++)
	{
		DecodeCSI_IM_ResourceSetId(&o_decoded_field->elm[i], buff, bits_iter, asn_error);
	}
}

void DecodeCSI_MeasConfig_csi_SSB_ResourceSetToAddModList(
	CSI_MeasConfig_csi_SSB_ResourceSetToAddModList_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint32    count = 0;
	count = Get_bits(buff, 6, bits_iter) + 1;
	o_decoded_field->length = count;

	for(uint32 i = 0; i < count; i++)
	{
		DecodeCSI_SSB_ResourceSet(&o_decoded_field->elm[i], buff, bits_iter, asn_error);
	}
}

void DecodeCSI_MeasConfig_csi_SSB_ResourceSetToAddReleaseList(
	CSI_MeasConfig_csi_SSB_ResourceSetToAddReleaseList_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint32    count = 0;
	count = Get_bits(buff, 6, bits_iter) + 1;
	o_decoded_field->length = count;

	for(uint32 i = 0; i < count; i++)
	{
		DecodeCSI_SSB_ResourceSetId(&o_decoded_field->elm[i], buff, bits_iter, asn_error);
	}
}

void DecodeCSI_MeasConfig_csi_ResourceConfigToAddModList(
	CSI_MeasConfig_csi_ResourceConfigToAddModList_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint32    count = 0;
	count = Get_bits(buff, 7, bits_iter) + 1;
	o_decoded_field->length = count;

	for(uint32 i = 0; i < count; i++)
	{
		DecodeCSI_ResourceConfig(&o_decoded_field->elm[i], buff, bits_iter, asn_error);
	}
}

void DecodeCSI_MeasConfig_csi_ResourceConfigToReleaseList(
	CSI_MeasConfig_csi_ResourceConfigToReleaseList_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint32    count = 0;
	count = Get_bits(buff, 7, bits_iter) + 1;
	o_decoded_field->length = count;

	for(uint32 i = 0; i < count; i++)
	{
		DecodeCSI_ResourceConfigId(&o_decoded_field->elm[i], buff, bits_iter, asn_error);
	}
}

void DecodeCSI_MeasConfig_csi_ReportConfigToAddModList(
	CSI_MeasConfig_csi_ReportConfigToAddModList_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint32    count = 0;
	count = Get_bits(buff, 6, bits_iter) + 1;
	o_decoded_field->length = count;

	for(uint32 i = 0; i < count; i++)
	{
		DecodeCSI_ReportConfig(&o_decoded_field->elm[i], buff, bits_iter, asn_error);
	}
}

void DecodeCSI_MeasConfig_csi_ReportConfigToReleaseList(
	CSI_MeasConfig_csi_ReportConfigToReleaseList_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint32    count = 0;
	count = Get_bits(buff, 6, bits_iter) + 1;
	o_decoded_field->length = count;

	for(uint32 i = 0; i < count; i++)
	{
		DecodeCSI_ReportConfigId(&o_decoded_field->elm[i], buff, bits_iter, asn_error);
	}
}

void DecodeCSI_MeasConfig_release(
	CSI_MeasConfig_release_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
}

void DecodeCSI_MeasConfig_aperiodicTriggerStateList(
	CSI_MeasConfig_aperiodicTriggerStateList_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint32    index = 0;

	index = Get_bits(buff, 1, bits_iter);
	o_decoded_field->type = index;
	switch (index)
	{
	case CSI_MEASCONFIG_APERIODICTRIGGERSTATELIST_RELEASE:
		DecodeCSI_MeasConfig_release(&o_decoded_field->a.release, buff, bits_iter, asn_error);
		break;

	case CSI_MEASCONFIG_APERIODICTRIGGERSTATELIST_SETUP:
		DecodeCSI_AperiodicTriggerStateList(&o_decoded_field->a.setup, buff, bits_iter, asn_error);
		break;

	default:
		break;

	}
}

void DecodeCSI_MeasConfig_release_1(
	CSI_MeasConfig_release_1_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
}

void DecodeCSI_MeasConfig_semiPersistentOnPUSCH_TriggerStateList(
	CSI_MeasConfig_semiPersistentOnPUSCH_TriggerStateList_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint32    index = 0;

	index = Get_bits(buff, 1, bits_iter);
	o_decoded_field->type = index;
	switch (index)
	{
	case CSI_MEASCONFIG_SEMIPERSISTENTONPUSCH_TRIGGERSTATELIST_RELEASE:
		DecodeCSI_MeasConfig_release_1(&o_decoded_field->a.release, buff, bits_iter, asn_error);
		break;

	case CSI_MEASCONFIG_SEMIPERSISTENTONPUSCH_TRIGGERSTATELIST_SETUP:
		DecodeCSI_SemiPersistentOnPUSCH_TriggerStateList(&o_decoded_field->a.setup, buff, bits_iter, asn_error);
		break;

	default:
		break;

	}
}

void DecodeCSI_MeasConfig(
	CSI_MeasConfig_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint8    flag = 0;
	uint8    ext_flag = 0;
	uint32    bits_width = 0;
	uint32    preamble_bitmap = 0;
	
	ext_flag = Get_bits(buff, 1, bits_iter);

	o_decoded_field->nzp_CSI_RS_ResourceToAddModList_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->nzp_CSI_RS_ResourceToReleaseList_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->nzp_CSI_RS_ResourceSetToAddModList_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->nzp_CSI_RS_ResourceSetToReleaseList_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->csi_IM_ResourceToAddModList_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->csi_IM_ResourceToReleaseList_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->csi_IM_ResourceSetToAddModList_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->csi_IM_ResourceSetToReleaseList_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->csi_SSB_ResourceSetToAddModList_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->csi_SSB_ResourceSetToAddReleaseList_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->csi_ResourceConfigToAddModList_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->csi_ResourceConfigToReleaseList_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->csi_ReportConfigToAddModList_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->csi_ReportConfigToReleaseList_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->reportTriggerSize_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->aperiodicTriggerStateList_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->semiPersistentOnPUSCH_TriggerStateList_exist = Get_bits(buff, 1, bits_iter);
	if(o_decoded_field->nzp_CSI_RS_ResourceToAddModList_exist == TRUE)
	{
		DecodeCSI_MeasConfig_nzp_CSI_RS_ResourceToAddModList(&o_decoded_field->nzp_CSI_RS_ResourceToAddModList, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->nzp_CSI_RS_ResourceToReleaseList_exist == TRUE)
	{
		DecodeCSI_MeasConfig_nzp_CSI_RS_ResourceToReleaseList(&o_decoded_field->nzp_CSI_RS_ResourceToReleaseList, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->nzp_CSI_RS_ResourceSetToAddModList_exist == TRUE)
	{
		DecodeCSI_MeasConfig_nzp_CSI_RS_ResourceSetToAddModList(&o_decoded_field->nzp_CSI_RS_ResourceSetToAddModList, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->nzp_CSI_RS_ResourceSetToReleaseList_exist == TRUE)
	{
		DecodeCSI_MeasConfig_nzp_CSI_RS_ResourceSetToReleaseList(&o_decoded_field->nzp_CSI_RS_ResourceSetToReleaseList, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->csi_IM_ResourceToAddModList_exist == TRUE)
	{
		DecodeCSI_MeasConfig_csi_IM_ResourceToAddModList(&o_decoded_field->csi_IM_ResourceToAddModList, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->csi_IM_ResourceToReleaseList_exist == TRUE)
	{
		DecodeCSI_MeasConfig_csi_IM_ResourceToReleaseList(&o_decoded_field->csi_IM_ResourceToReleaseList, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->csi_IM_ResourceSetToAddModList_exist == TRUE)
	{
		DecodeCSI_MeasConfig_csi_IM_ResourceSetToAddModList(&o_decoded_field->csi_IM_ResourceSetToAddModList, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->csi_IM_ResourceSetToReleaseList_exist == TRUE)
	{
		DecodeCSI_MeasConfig_csi_IM_ResourceSetToReleaseList(&o_decoded_field->csi_IM_ResourceSetToReleaseList, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->csi_SSB_ResourceSetToAddModList_exist == TRUE)
	{
		DecodeCSI_MeasConfig_csi_SSB_ResourceSetToAddModList(&o_decoded_field->csi_SSB_ResourceSetToAddModList, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->csi_SSB_ResourceSetToAddReleaseList_exist == TRUE)
	{
		DecodeCSI_MeasConfig_csi_SSB_ResourceSetToAddReleaseList(&o_decoded_field->csi_SSB_ResourceSetToAddReleaseList, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->csi_ResourceConfigToAddModList_exist == TRUE)
	{
		DecodeCSI_MeasConfig_csi_ResourceConfigToAddModList(&o_decoded_field->csi_ResourceConfigToAddModList, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->csi_ResourceConfigToReleaseList_exist == TRUE)
	{
		DecodeCSI_MeasConfig_csi_ResourceConfigToReleaseList(&o_decoded_field->csi_ResourceConfigToReleaseList, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->csi_ReportConfigToAddModList_exist == TRUE)
	{
		DecodeCSI_MeasConfig_csi_ReportConfigToAddModList(&o_decoded_field->csi_ReportConfigToAddModList, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->csi_ReportConfigToReleaseList_exist == TRUE)
	{
		DecodeCSI_MeasConfig_csi_ReportConfigToReleaseList(&o_decoded_field->csi_ReportConfigToReleaseList, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->reportTriggerSize_exist == TRUE)
	{
		o_decoded_field->reportTriggerSize = Get_bits(buff, 3, bits_iter);
	}

	if(o_decoded_field->aperiodicTriggerStateList_exist == TRUE)
	{
		DecodeCSI_MeasConfig_aperiodicTriggerStateList(&o_decoded_field->aperiodicTriggerStateList, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->semiPersistentOnPUSCH_TriggerStateList_exist == TRUE)
	{
		DecodeCSI_MeasConfig_semiPersistentOnPUSCH_TriggerStateList(&o_decoded_field->semiPersistentOnPUSCH_TriggerStateList, buff, bits_iter, asn_error);
	}

	if(ext_flag == 1)
	{
		//need to handle asn error.
	}
}

