/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * csi_report_config.c - codec the message of CSI-ReportConfig
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#include <assert.h>
#include "mem.h"
#include "csi_report_config.h"


void EncodeCSI_ReportConfig_pucch_CSI_ResourceList(
	CSI_ReportConfig_pucch_CSI_ResourceList_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field->length - 1, 2, bits_iter);
	for(uint32 i = 0; i < i_encoded_field->length; i++)
	{
		EncodePUCCH_CSI_Resource(&i_encoded_field->elm[i], buff, bits_iter, asn_error);
	}
}

void EncodeCSI_ReportConfig_periodic(
	CSI_ReportConfig_periodic_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	EncodeCSI_ReportPeriodicityAndOffset(&i_encoded_field->reportSlotConfig, buff, bits_iter, asn_error);

	EncodeCSI_ReportConfig_pucch_CSI_ResourceList(&i_encoded_field->pucch_CSI_ResourceList, buff, bits_iter, asn_error);

}

void EncodeCSI_ReportConfig_pucch_CSI_ResourceList_1(
	CSI_ReportConfig_pucch_CSI_ResourceList_1_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field->length - 1, 2, bits_iter);
	for(uint32 i = 0; i < i_encoded_field->length; i++)
	{
		EncodePUCCH_CSI_Resource(&i_encoded_field->elm[i], buff, bits_iter, asn_error);
	}
}

void EncodeCSI_ReportConfig_semiPersistentOnPUCCH(
	CSI_ReportConfig_semiPersistentOnPUCCH_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	EncodeCSI_ReportPeriodicityAndOffset(&i_encoded_field->reportSlotConfig, buff, bits_iter, asn_error);

	EncodeCSI_ReportConfig_pucch_CSI_ResourceList_1(&i_encoded_field->pucch_CSI_ResourceList, buff, bits_iter, asn_error);

}

void EncodeCSI_ReportConfig_reportSlotConfig(
	CSI_ReportConfig_reportSlotConfig_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 3, bits_iter);
}

void EncodeCSI_ReportConfig_reportSlotOffsetList(
	CSI_ReportConfig_reportSlotOffsetList_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field->length - 1, 4, bits_iter);
	for(uint32 i = 0; i < i_encoded_field->length; i++)
	{
		PutBits(buff, i_encoded_field->elm[i], 6, bits_iter);
	}
}

void EncodeCSI_ReportConfig_semiPersistentOnPUSCH(
	CSI_ReportConfig_semiPersistentOnPUSCH_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	EncodeCSI_ReportConfig_reportSlotConfig(i_encoded_field->reportSlotConfig, buff, bits_iter, asn_error);

	EncodeCSI_ReportConfig_reportSlotOffsetList(&i_encoded_field->reportSlotOffsetList, buff, bits_iter, asn_error);

	EncodeP0_PUSCH_AlphaSetId(&i_encoded_field->p0alpha, buff, bits_iter, asn_error);

}

void EncodeCSI_ReportConfig_reportSlotOffsetList_2(
	CSI_ReportConfig_reportSlotOffsetList_2_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field->length - 1, 4, bits_iter);
	for(uint32 i = 0; i < i_encoded_field->length; i++)
	{
		PutBits(buff, i_encoded_field->elm[i], 6, bits_iter);
	}
}

void EncodeCSI_ReportConfig_aperiodic(
	CSI_ReportConfig_aperiodic_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	EncodeCSI_ReportConfig_reportSlotOffsetList_2(&i_encoded_field->reportSlotOffsetList, buff, bits_iter, asn_error);

}

void EncodeCSI_ReportConfig_reportConfigType(
	CSI_ReportConfig_reportConfigType_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field->type, 2, bits_iter);
	switch (i_encoded_field->type)
	{
	case CSI_REPORTCONFIG_REPORTCONFIGTYPE_PERIODIC:
		EncodeCSI_ReportConfig_periodic(&i_encoded_field->a.periodic, buff, bits_iter, asn_error);
		break;

	case CSI_REPORTCONFIG_REPORTCONFIGTYPE_SEMIPERSISTENTONPUCCH:
		EncodeCSI_ReportConfig_semiPersistentOnPUCCH(&i_encoded_field->a.semiPersistentOnPUCCH, buff, bits_iter, asn_error);
		break;

	case CSI_REPORTCONFIG_REPORTCONFIGTYPE_SEMIPERSISTENTONPUSCH:
		EncodeCSI_ReportConfig_semiPersistentOnPUSCH(&i_encoded_field->a.semiPersistentOnPUSCH, buff, bits_iter, asn_error);
		break;

	case CSI_REPORTCONFIG_REPORTCONFIGTYPE_APERIODIC:
		EncodeCSI_ReportConfig_aperiodic(&i_encoded_field->a.aperiodic, buff, bits_iter, asn_error);
		break;

	default:
		break;	}
}

void EncodeCSI_ReportConfig_none(
	CSI_ReportConfig_none_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
}

void EncodeCSI_ReportConfig_cri_RI_PMI_CQI(
	CSI_ReportConfig_cri_RI_PMI_CQI_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
}

void EncodeCSI_ReportConfig_cri_RI_i1(
	CSI_ReportConfig_cri_RI_i1_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
}

void EncodeCSI_ReportConfig_pdsch_BundleSizeForCSI(
	CSI_ReportConfig_pdsch_BundleSizeForCSI_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 1, bits_iter);
}

void EncodeCSI_ReportConfig_cri_RI_i1_CQI(
	CSI_ReportConfig_cri_RI_i1_CQI_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	if(i_encoded_field->pdsch_BundleSizeForCSI_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->pdsch_BundleSizeForCSI_exist == TRUE)
	{
		EncodeCSI_ReportConfig_pdsch_BundleSizeForCSI(i_encoded_field->pdsch_BundleSizeForCSI, buff, bits_iter, asn_error);
	}

}

void EncodeCSI_ReportConfig_cri_RI_CQI(
	CSI_ReportConfig_cri_RI_CQI_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
}

void EncodeCSI_ReportConfig_cri_RSRP(
	CSI_ReportConfig_cri_RSRP_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
}

void EncodeCSI_ReportConfig_ssb_Index_RSRP(
	CSI_ReportConfig_ssb_Index_RSRP_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
}

void EncodeCSI_ReportConfig_cri_RI_LI_PMI_CQI(
	CSI_ReportConfig_cri_RI_LI_PMI_CQI_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
}

void EncodeCSI_ReportConfig_reportQuantity(
	CSI_ReportConfig_reportQuantity_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field->type, 3, bits_iter);
	switch (i_encoded_field->type)
	{
	case CSI_REPORTCONFIG_REPORTQUANTITY_NONE:
		EncodeCSI_ReportConfig_none(&i_encoded_field->a.none, buff, bits_iter, asn_error);
		break;

	case CSI_REPORTCONFIG_REPORTQUANTITY_CRI_RI_PMI_CQI:
		EncodeCSI_ReportConfig_cri_RI_PMI_CQI(&i_encoded_field->a.cri_RI_PMI_CQI, buff, bits_iter, asn_error);
		break;

	case CSI_REPORTCONFIG_REPORTQUANTITY_CRI_RI_I1:
		EncodeCSI_ReportConfig_cri_RI_i1(&i_encoded_field->a.cri_RI_i1, buff, bits_iter, asn_error);
		break;

	case CSI_REPORTCONFIG_REPORTQUANTITY_CRI_RI_I1_CQI:
		EncodeCSI_ReportConfig_cri_RI_i1_CQI(&i_encoded_field->a.cri_RI_i1_CQI, buff, bits_iter, asn_error);
		break;

	case CSI_REPORTCONFIG_REPORTQUANTITY_CRI_RI_CQI:
		EncodeCSI_ReportConfig_cri_RI_CQI(&i_encoded_field->a.cri_RI_CQI, buff, bits_iter, asn_error);
		break;

	case CSI_REPORTCONFIG_REPORTQUANTITY_CRI_RSRP:
		EncodeCSI_ReportConfig_cri_RSRP(&i_encoded_field->a.cri_RSRP, buff, bits_iter, asn_error);
		break;

	case CSI_REPORTCONFIG_REPORTQUANTITY_SSB_INDEX_RSRP:
		EncodeCSI_ReportConfig_ssb_Index_RSRP(&i_encoded_field->a.ssb_Index_RSRP, buff, bits_iter, asn_error);
		break;

	case CSI_REPORTCONFIG_REPORTQUANTITY_CRI_RI_LI_PMI_CQI:
		EncodeCSI_ReportConfig_cri_RI_LI_PMI_CQI(&i_encoded_field->a.cri_RI_LI_PMI_CQI, buff, bits_iter, asn_error);
		break;

	default:
		break;	}
}

void EncodeCSI_ReportConfig_cqi_FormatIndicator(
	CSI_ReportConfig_cqi_FormatIndicator_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 1, bits_iter);
}

void EncodeCSI_ReportConfig_pmi_FormatIndicator(
	CSI_ReportConfig_pmi_FormatIndicator_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 1, bits_iter);
}

void EncodeCSI_ReportConfig_subbands3(
	CSI_ReportConfig_subbands3_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBitsMore(buff, i_encoded_field->value, i_encoded_field->bits_num, bits_iter);
}

void EncodeCSI_ReportConfig_subbands4(
	CSI_ReportConfig_subbands4_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBitsMore(buff, i_encoded_field->value, i_encoded_field->bits_num, bits_iter);
}

void EncodeCSI_ReportConfig_subbands5(
	CSI_ReportConfig_subbands5_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBitsMore(buff, i_encoded_field->value, i_encoded_field->bits_num, bits_iter);
}

void EncodeCSI_ReportConfig_subbands6(
	CSI_ReportConfig_subbands6_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBitsMore(buff, i_encoded_field->value, i_encoded_field->bits_num, bits_iter);
}

void EncodeCSI_ReportConfig_subbands7(
	CSI_ReportConfig_subbands7_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBitsMore(buff, i_encoded_field->value, i_encoded_field->bits_num, bits_iter);
}

void EncodeCSI_ReportConfig_subbands8(
	CSI_ReportConfig_subbands8_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBitsMore(buff, i_encoded_field->value, i_encoded_field->bits_num, bits_iter);
}

void EncodeCSI_ReportConfig_subbands9(
	CSI_ReportConfig_subbands9_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBitsMore(buff, i_encoded_field->value, i_encoded_field->bits_num, bits_iter);
}

void EncodeCSI_ReportConfig_subbands10(
	CSI_ReportConfig_subbands10_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBitsMore(buff, i_encoded_field->value, i_encoded_field->bits_num, bits_iter);
}

void EncodeCSI_ReportConfig_subbands11(
	CSI_ReportConfig_subbands11_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBitsMore(buff, i_encoded_field->value, i_encoded_field->bits_num, bits_iter);
}

void EncodeCSI_ReportConfig_subbands12(
	CSI_ReportConfig_subbands12_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBitsMore(buff, i_encoded_field->value, i_encoded_field->bits_num, bits_iter);
}

void EncodeCSI_ReportConfig_subbands13(
	CSI_ReportConfig_subbands13_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBitsMore(buff, i_encoded_field->value, i_encoded_field->bits_num, bits_iter);
}

void EncodeCSI_ReportConfig_subbands14(
	CSI_ReportConfig_subbands14_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBitsMore(buff, i_encoded_field->value, i_encoded_field->bits_num, bits_iter);
}

void EncodeCSI_ReportConfig_subbands15(
	CSI_ReportConfig_subbands15_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBitsMore(buff, i_encoded_field->value, i_encoded_field->bits_num, bits_iter);
}

void EncodeCSI_ReportConfig_subbands16(
	CSI_ReportConfig_subbands16_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBitsMore(buff, i_encoded_field->value, i_encoded_field->bits_num, bits_iter);
}

void EncodeCSI_ReportConfig_subbands17(
	CSI_ReportConfig_subbands17_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBitsMore(buff, i_encoded_field->value, i_encoded_field->bits_num, bits_iter);
}

void EncodeCSI_ReportConfig_subbands18(
	CSI_ReportConfig_subbands18_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBitsMore(buff, i_encoded_field->value, i_encoded_field->bits_num, bits_iter);
}

void EncodeCSI_ReportConfig_csi_ReportingBand(
	CSI_ReportConfig_csi_ReportingBand_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	/*flag for extension marker, within extension root.*/
	PutBits(buff, 0, 1, bits_iter);
	PutBits(buff, i_encoded_field->type, 4, bits_iter);
	switch (i_encoded_field->type)
	{
	case CSI_REPORTCONFIG_CSI_REPORTINGBAND_SUBBANDS3:
		EncodeCSI_ReportConfig_subbands3(&i_encoded_field->a.subbands3, buff, bits_iter, asn_error);
		break;

	case CSI_REPORTCONFIG_CSI_REPORTINGBAND_SUBBANDS4:
		EncodeCSI_ReportConfig_subbands4(&i_encoded_field->a.subbands4, buff, bits_iter, asn_error);
		break;

	case CSI_REPORTCONFIG_CSI_REPORTINGBAND_SUBBANDS5:
		EncodeCSI_ReportConfig_subbands5(&i_encoded_field->a.subbands5, buff, bits_iter, asn_error);
		break;

	case CSI_REPORTCONFIG_CSI_REPORTINGBAND_SUBBANDS6:
		EncodeCSI_ReportConfig_subbands6(&i_encoded_field->a.subbands6, buff, bits_iter, asn_error);
		break;

	case CSI_REPORTCONFIG_CSI_REPORTINGBAND_SUBBANDS7:
		EncodeCSI_ReportConfig_subbands7(&i_encoded_field->a.subbands7, buff, bits_iter, asn_error);
		break;

	case CSI_REPORTCONFIG_CSI_REPORTINGBAND_SUBBANDS8:
		EncodeCSI_ReportConfig_subbands8(&i_encoded_field->a.subbands8, buff, bits_iter, asn_error);
		break;

	case CSI_REPORTCONFIG_CSI_REPORTINGBAND_SUBBANDS9:
		EncodeCSI_ReportConfig_subbands9(&i_encoded_field->a.subbands9, buff, bits_iter, asn_error);
		break;

	case CSI_REPORTCONFIG_CSI_REPORTINGBAND_SUBBANDS10:
		EncodeCSI_ReportConfig_subbands10(&i_encoded_field->a.subbands10, buff, bits_iter, asn_error);
		break;

	case CSI_REPORTCONFIG_CSI_REPORTINGBAND_SUBBANDS11:
		EncodeCSI_ReportConfig_subbands11(&i_encoded_field->a.subbands11, buff, bits_iter, asn_error);
		break;

	case CSI_REPORTCONFIG_CSI_REPORTINGBAND_SUBBANDS12:
		EncodeCSI_ReportConfig_subbands12(&i_encoded_field->a.subbands12, buff, bits_iter, asn_error);
		break;

	case CSI_REPORTCONFIG_CSI_REPORTINGBAND_SUBBANDS13:
		EncodeCSI_ReportConfig_subbands13(&i_encoded_field->a.subbands13, buff, bits_iter, asn_error);
		break;

	case CSI_REPORTCONFIG_CSI_REPORTINGBAND_SUBBANDS14:
		EncodeCSI_ReportConfig_subbands14(&i_encoded_field->a.subbands14, buff, bits_iter, asn_error);
		break;

	case CSI_REPORTCONFIG_CSI_REPORTINGBAND_SUBBANDS15:
		EncodeCSI_ReportConfig_subbands15(&i_encoded_field->a.subbands15, buff, bits_iter, asn_error);
		break;

	case CSI_REPORTCONFIG_CSI_REPORTINGBAND_SUBBANDS16:
		EncodeCSI_ReportConfig_subbands16(&i_encoded_field->a.subbands16, buff, bits_iter, asn_error);
		break;

	case CSI_REPORTCONFIG_CSI_REPORTINGBAND_SUBBANDS17:
		EncodeCSI_ReportConfig_subbands17(&i_encoded_field->a.subbands17, buff, bits_iter, asn_error);
		break;

	case CSI_REPORTCONFIG_CSI_REPORTINGBAND_SUBBANDS18:
		EncodeCSI_ReportConfig_subbands18(&i_encoded_field->a.subbands18, buff, bits_iter, asn_error);
		break;

	default:
		break;	}
}

void EncodeCSI_ReportConfig_reportFreqConfiguration(
	CSI_ReportConfig_reportFreqConfiguration_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	if(i_encoded_field->cqi_FormatIndicator_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->pmi_FormatIndicator_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->csi_ReportingBand_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->cqi_FormatIndicator_exist == TRUE)
	{
		EncodeCSI_ReportConfig_cqi_FormatIndicator(i_encoded_field->cqi_FormatIndicator, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->pmi_FormatIndicator_exist == TRUE)
	{
		EncodeCSI_ReportConfig_pmi_FormatIndicator(i_encoded_field->pmi_FormatIndicator, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->csi_ReportingBand_exist == TRUE)
	{
		EncodeCSI_ReportConfig_csi_ReportingBand(&i_encoded_field->csi_ReportingBand, buff, bits_iter, asn_error);
	}

}

void EncodeCSI_ReportConfig_timeRestrictionForChannelMeasurements(
	CSI_ReportConfig_timeRestrictionForChannelMeasurements_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 1, bits_iter);
}

void EncodeCSI_ReportConfig_timeRestrictionForInterferenceMeasurements(
	CSI_ReportConfig_timeRestrictionForInterferenceMeasurements_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 1, bits_iter);
}

void EncodeCSI_ReportConfig_nrofCQIsPerReport(
	CSI_ReportConfig_nrofCQIsPerReport_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 1, bits_iter);
}

void EncodeCSI_ReportConfig_enabled(
	CSI_ReportConfig_enabled_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
}

void EncodeCSI_ReportConfig_nrofReportedRS(
	CSI_ReportConfig_nrofReportedRS_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 2, bits_iter);
}

void EncodeCSI_ReportConfig_disabled(
	CSI_ReportConfig_disabled_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	if(i_encoded_field->nrofReportedRS_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->nrofReportedRS_exist == TRUE)
	{
		EncodeCSI_ReportConfig_nrofReportedRS(i_encoded_field->nrofReportedRS, buff, bits_iter, asn_error);
	}

}

void EncodeCSI_ReportConfig_groupBasedBeamReporting(
	CSI_ReportConfig_groupBasedBeamReporting_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field->type, 1, bits_iter);
	switch (i_encoded_field->type)
	{
	case CSI_REPORTCONFIG_GROUPBASEDBEAMREPORTING_ENABLED:
		EncodeCSI_ReportConfig_enabled(&i_encoded_field->a.enabled, buff, bits_iter, asn_error);
		break;

	case CSI_REPORTCONFIG_GROUPBASEDBEAMREPORTING_DISABLED:
		EncodeCSI_ReportConfig_disabled(&i_encoded_field->a.disabled, buff, bits_iter, asn_error);
		break;

	default:
		break;	}
}

void EncodeCSI_ReportConfig_cqi_Table(
	CSI_ReportConfig_cqi_Table_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 2, bits_iter);
}

void EncodeCSI_ReportConfig_subbandSize(
	CSI_ReportConfig_subbandSize_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 1, bits_iter);
}

void EncodeCSI_ReportConfig_non_PMI_PortIndication(
	CSI_ReportConfig_non_PMI_PortIndication_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field->length - 1, 7, bits_iter);
	for(uint32 i = 0; i < i_encoded_field->length; i++)
	{
		EncodePortIndexFor8Ranks(&i_encoded_field->elm[i], buff, bits_iter, asn_error);
	}
}

void EncodeCSI_ReportConfig(
	CSI_ReportConfig_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	/*flag for extension marker, within extension root. */
	PutBits(buff, 0, 1, bits_iter);
	if(i_encoded_field->carrier_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->csi_IM_ResourcesForInterference_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->nzp_CSI_RS_ResourcesForInterference_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->reportFreqConfiguration_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->codebookConfig_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->nrofCQIsPerReport_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->cqi_Table_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->non_PMI_PortIndication_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	EncodeCSI_ReportConfigId(&i_encoded_field->reportConfigId, buff, bits_iter, asn_error);

	if(i_encoded_field->carrier_exist == TRUE)
	{
		EncodeServCellIndex(&i_encoded_field->carrier, buff, bits_iter, asn_error);
	}

	EncodeCSI_ResourceConfigId(&i_encoded_field->resourcesForChannelMeasurement, buff, bits_iter, asn_error);

	if(i_encoded_field->csi_IM_ResourcesForInterference_exist == TRUE)
	{
		EncodeCSI_ResourceConfigId(&i_encoded_field->csi_IM_ResourcesForInterference, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->nzp_CSI_RS_ResourcesForInterference_exist == TRUE)
	{
		EncodeCSI_ResourceConfigId(&i_encoded_field->nzp_CSI_RS_ResourcesForInterference, buff, bits_iter, asn_error);
	}

	EncodeCSI_ReportConfig_reportConfigType(&i_encoded_field->reportConfigType, buff, bits_iter, asn_error);

	EncodeCSI_ReportConfig_reportQuantity(&i_encoded_field->reportQuantity, buff, bits_iter, asn_error);

	if(i_encoded_field->reportFreqConfiguration_exist == TRUE)
	{
		EncodeCSI_ReportConfig_reportFreqConfiguration(&i_encoded_field->reportFreqConfiguration, buff, bits_iter, asn_error);
	}

	EncodeCSI_ReportConfig_timeRestrictionForChannelMeasurements(i_encoded_field->timeRestrictionForChannelMeasurements, buff, bits_iter, asn_error);

	EncodeCSI_ReportConfig_timeRestrictionForInterferenceMeasurements(i_encoded_field->timeRestrictionForInterferenceMeasurements, buff, bits_iter, asn_error);

	if(i_encoded_field->codebookConfig_exist == TRUE)
	{
		EncodeCodebookConfig(&i_encoded_field->codebookConfig, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->nrofCQIsPerReport_exist == TRUE)
	{
		EncodeCSI_ReportConfig_nrofCQIsPerReport(i_encoded_field->nrofCQIsPerReport, buff, bits_iter, asn_error);
	}

	EncodeCSI_ReportConfig_groupBasedBeamReporting(&i_encoded_field->groupBasedBeamReporting, buff, bits_iter, asn_error);

	if(i_encoded_field->cqi_Table_exist == TRUE)
	{
		EncodeCSI_ReportConfig_cqi_Table(i_encoded_field->cqi_Table, buff, bits_iter, asn_error);
	}

	EncodeCSI_ReportConfig_subbandSize(i_encoded_field->subbandSize, buff, bits_iter, asn_error);

	if(i_encoded_field->non_PMI_PortIndication_exist == TRUE)
	{
		EncodeCSI_ReportConfig_non_PMI_PortIndication(&i_encoded_field->non_PMI_PortIndication, buff, bits_iter, asn_error);
	}

}

void DecodeCSI_ReportConfig_pucch_CSI_ResourceList(
	CSI_ReportConfig_pucch_CSI_ResourceList_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint32    count = 0;
	count = Get_bits(buff, 2, bits_iter) + 1;
	o_decoded_field->length = count;

	for(uint32 i = 0; i < count; i++)
	{
		DecodePUCCH_CSI_Resource(&o_decoded_field->elm[i], buff, bits_iter, asn_error);
	}
}

void DecodeCSI_ReportConfig_periodic(
	CSI_ReportConfig_periodic_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	DecodeCSI_ReportPeriodicityAndOffset(&o_decoded_field->reportSlotConfig, buff, bits_iter, asn_error);
	DecodeCSI_ReportConfig_pucch_CSI_ResourceList(&o_decoded_field->pucch_CSI_ResourceList, buff, bits_iter, asn_error);
}

void DecodeCSI_ReportConfig_pucch_CSI_ResourceList_1(
	CSI_ReportConfig_pucch_CSI_ResourceList_1_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint32    count = 0;
	count = Get_bits(buff, 2, bits_iter) + 1;
	o_decoded_field->length = count;

	for(uint32 i = 0; i < count; i++)
	{
		DecodePUCCH_CSI_Resource(&o_decoded_field->elm[i], buff, bits_iter, asn_error);
	}
}

void DecodeCSI_ReportConfig_semiPersistentOnPUCCH(
	CSI_ReportConfig_semiPersistentOnPUCCH_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	DecodeCSI_ReportPeriodicityAndOffset(&o_decoded_field->reportSlotConfig, buff, bits_iter, asn_error);
	DecodeCSI_ReportConfig_pucch_CSI_ResourceList_1(&o_decoded_field->pucch_CSI_ResourceList, buff, bits_iter, asn_error);
}

void DecodeCSI_ReportConfig_reportSlotConfig(
	CSI_ReportConfig_reportSlotConfig_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = Get_bits(buff, 3, bits_iter);
}

void DecodeCSI_ReportConfig_reportSlotOffsetList(
	CSI_ReportConfig_reportSlotOffsetList_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint32    count = 0;
	count = Get_bits(buff, 4, bits_iter) + 1;
	o_decoded_field->length = count;

	for(uint32 i = 0; i < count; i++)
	{
		o_decoded_field->elm[i] = Get_bits(buff, 6, bits_iter);
	}
}

void DecodeCSI_ReportConfig_semiPersistentOnPUSCH(
	CSI_ReportConfig_semiPersistentOnPUSCH_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	DecodeCSI_ReportConfig_reportSlotConfig(&o_decoded_field->reportSlotConfig, buff, bits_iter, asn_error);
	DecodeCSI_ReportConfig_reportSlotOffsetList(&o_decoded_field->reportSlotOffsetList, buff, bits_iter, asn_error);
	DecodeP0_PUSCH_AlphaSetId(&o_decoded_field->p0alpha, buff, bits_iter, asn_error);
}

void DecodeCSI_ReportConfig_reportSlotOffsetList_2(
	CSI_ReportConfig_reportSlotOffsetList_2_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint32    count = 0;
	count = Get_bits(buff, 4, bits_iter) + 1;
	o_decoded_field->length = count;

	for(uint32 i = 0; i < count; i++)
	{
		o_decoded_field->elm[i] = Get_bits(buff, 6, bits_iter);
	}
}

void DecodeCSI_ReportConfig_aperiodic(
	CSI_ReportConfig_aperiodic_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	DecodeCSI_ReportConfig_reportSlotOffsetList_2(&o_decoded_field->reportSlotOffsetList, buff, bits_iter, asn_error);
}

void DecodeCSI_ReportConfig_reportConfigType(
	CSI_ReportConfig_reportConfigType_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint32    index = 0;

	index = Get_bits(buff, 2, bits_iter);
	o_decoded_field->type = index;
	switch (index)
	{
	case CSI_REPORTCONFIG_REPORTCONFIGTYPE_PERIODIC:
		DecodeCSI_ReportConfig_periodic(&o_decoded_field->a.periodic, buff, bits_iter, asn_error);
		break;

	case CSI_REPORTCONFIG_REPORTCONFIGTYPE_SEMIPERSISTENTONPUCCH:
		DecodeCSI_ReportConfig_semiPersistentOnPUCCH(&o_decoded_field->a.semiPersistentOnPUCCH, buff, bits_iter, asn_error);
		break;

	case CSI_REPORTCONFIG_REPORTCONFIGTYPE_SEMIPERSISTENTONPUSCH:
		DecodeCSI_ReportConfig_semiPersistentOnPUSCH(&o_decoded_field->a.semiPersistentOnPUSCH, buff, bits_iter, asn_error);
		break;

	case CSI_REPORTCONFIG_REPORTCONFIGTYPE_APERIODIC:
		DecodeCSI_ReportConfig_aperiodic(&o_decoded_field->a.aperiodic, buff, bits_iter, asn_error);
		break;

	default:
		break;

	}
}

void DecodeCSI_ReportConfig_none(
	CSI_ReportConfig_none_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
}

void DecodeCSI_ReportConfig_cri_RI_PMI_CQI(
	CSI_ReportConfig_cri_RI_PMI_CQI_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
}

void DecodeCSI_ReportConfig_cri_RI_i1(
	CSI_ReportConfig_cri_RI_i1_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
}

void DecodeCSI_ReportConfig_pdsch_BundleSizeForCSI(
	CSI_ReportConfig_pdsch_BundleSizeForCSI_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = Get_bits(buff, 1, bits_iter);
}

void DecodeCSI_ReportConfig_cri_RI_i1_CQI(
	CSI_ReportConfig_cri_RI_i1_CQI_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	o_decoded_field->pdsch_BundleSizeForCSI_exist = Get_bits(buff, 1, bits_iter);
	if(o_decoded_field->pdsch_BundleSizeForCSI_exist == TRUE)
	{
		DecodeCSI_ReportConfig_pdsch_BundleSizeForCSI(&o_decoded_field->pdsch_BundleSizeForCSI, buff, bits_iter, asn_error);
	}

}

void DecodeCSI_ReportConfig_cri_RI_CQI(
	CSI_ReportConfig_cri_RI_CQI_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
}

void DecodeCSI_ReportConfig_cri_RSRP(
	CSI_ReportConfig_cri_RSRP_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
}

void DecodeCSI_ReportConfig_ssb_Index_RSRP(
	CSI_ReportConfig_ssb_Index_RSRP_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
}

void DecodeCSI_ReportConfig_cri_RI_LI_PMI_CQI(
	CSI_ReportConfig_cri_RI_LI_PMI_CQI_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
}

void DecodeCSI_ReportConfig_reportQuantity(
	CSI_ReportConfig_reportQuantity_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint32    index = 0;

	index = Get_bits(buff, 3, bits_iter);
	o_decoded_field->type = index;
	switch (index)
	{
	case CSI_REPORTCONFIG_REPORTQUANTITY_NONE:
		DecodeCSI_ReportConfig_none(&o_decoded_field->a.none, buff, bits_iter, asn_error);
		break;

	case CSI_REPORTCONFIG_REPORTQUANTITY_CRI_RI_PMI_CQI:
		DecodeCSI_ReportConfig_cri_RI_PMI_CQI(&o_decoded_field->a.cri_RI_PMI_CQI, buff, bits_iter, asn_error);
		break;

	case CSI_REPORTCONFIG_REPORTQUANTITY_CRI_RI_I1:
		DecodeCSI_ReportConfig_cri_RI_i1(&o_decoded_field->a.cri_RI_i1, buff, bits_iter, asn_error);
		break;

	case CSI_REPORTCONFIG_REPORTQUANTITY_CRI_RI_I1_CQI:
		DecodeCSI_ReportConfig_cri_RI_i1_CQI(&o_decoded_field->a.cri_RI_i1_CQI, buff, bits_iter, asn_error);
		break;

	case CSI_REPORTCONFIG_REPORTQUANTITY_CRI_RI_CQI:
		DecodeCSI_ReportConfig_cri_RI_CQI(&o_decoded_field->a.cri_RI_CQI, buff, bits_iter, asn_error);
		break;

	case CSI_REPORTCONFIG_REPORTQUANTITY_CRI_RSRP:
		DecodeCSI_ReportConfig_cri_RSRP(&o_decoded_field->a.cri_RSRP, buff, bits_iter, asn_error);
		break;

	case CSI_REPORTCONFIG_REPORTQUANTITY_SSB_INDEX_RSRP:
		DecodeCSI_ReportConfig_ssb_Index_RSRP(&o_decoded_field->a.ssb_Index_RSRP, buff, bits_iter, asn_error);
		break;

	case CSI_REPORTCONFIG_REPORTQUANTITY_CRI_RI_LI_PMI_CQI:
		DecodeCSI_ReportConfig_cri_RI_LI_PMI_CQI(&o_decoded_field->a.cri_RI_LI_PMI_CQI, buff, bits_iter, asn_error);
		break;

	default:
		break;

	}
}

void DecodeCSI_ReportConfig_cqi_FormatIndicator(
	CSI_ReportConfig_cqi_FormatIndicator_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = Get_bits(buff, 1, bits_iter);
}

void DecodeCSI_ReportConfig_pmi_FormatIndicator(
	CSI_ReportConfig_pmi_FormatIndicator_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = Get_bits(buff, 1, bits_iter);
}

void DecodeCSI_ReportConfig_subbands3(
	CSI_ReportConfig_subbands3_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint32    bits_num = 0;

	bits_num = 3;
	o_decoded_field->bits_num = bits_num;
	o_decoded_field->value[0] = Get_bits(buff, bits_num, bits_iter);

}

void DecodeCSI_ReportConfig_subbands4(
	CSI_ReportConfig_subbands4_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint32    bits_num = 0;

	bits_num = 4;
	o_decoded_field->bits_num = bits_num;
	o_decoded_field->value[0] = Get_bits(buff, bits_num, bits_iter);

}

void DecodeCSI_ReportConfig_subbands5(
	CSI_ReportConfig_subbands5_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint32    bits_num = 0;

	bits_num = 5;
	o_decoded_field->bits_num = bits_num;
	o_decoded_field->value[0] = Get_bits(buff, bits_num, bits_iter);

}

void DecodeCSI_ReportConfig_subbands6(
	CSI_ReportConfig_subbands6_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint32    bits_num = 0;

	bits_num = 6;
	o_decoded_field->bits_num = bits_num;
	o_decoded_field->value[0] = Get_bits(buff, bits_num, bits_iter);

}

void DecodeCSI_ReportConfig_subbands7(
	CSI_ReportConfig_subbands7_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint32    bits_num = 0;

	bits_num = 7;
	o_decoded_field->bits_num = bits_num;
	o_decoded_field->value[0] = Get_bits(buff, bits_num, bits_iter);

}

void DecodeCSI_ReportConfig_subbands8(
	CSI_ReportConfig_subbands8_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint32    bits_num = 0;

	bits_num = 8;
	o_decoded_field->bits_num = bits_num;
	o_decoded_field->value[0] = Get_bits(buff, bits_num, bits_iter);

}

void DecodeCSI_ReportConfig_subbands9(
	CSI_ReportConfig_subbands9_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint32    bits_num = 0;
	uint32    octets_num = 0;
	uint32    i = 0;

	bits_num = 9;
	o_decoded_field->bits_num = bits_num;
	octets_num = bits_num / 8 + (bits_num % 8 == 0 ? 0 : 1);

	if(bits_num % 8 != 0)
	{
		o_decoded_field->value[0] = Get_bits(buff, bits_num % 8, bits_iter);
		i = 1;
	}

	for(; i < octets_num; i++)
	{
		o_decoded_field->value[i] = Get_bits(buff, 8, bits_iter);
	}
}

void DecodeCSI_ReportConfig_subbands10(
	CSI_ReportConfig_subbands10_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint32    bits_num = 0;
	uint32    octets_num = 0;
	uint32    i = 0;

	bits_num = 10;
	o_decoded_field->bits_num = bits_num;
	octets_num = bits_num / 8 + (bits_num % 8 == 0 ? 0 : 1);

	if(bits_num % 8 != 0)
	{
		o_decoded_field->value[0] = Get_bits(buff, bits_num % 8, bits_iter);
		i = 1;
	}

	for(; i < octets_num; i++)
	{
		o_decoded_field->value[i] = Get_bits(buff, 8, bits_iter);
	}
}

void DecodeCSI_ReportConfig_subbands11(
	CSI_ReportConfig_subbands11_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint32    bits_num = 0;
	uint32    octets_num = 0;
	uint32    i = 0;

	bits_num = 11;
	o_decoded_field->bits_num = bits_num;
	octets_num = bits_num / 8 + (bits_num % 8 == 0 ? 0 : 1);

	if(bits_num % 8 != 0)
	{
		o_decoded_field->value[0] = Get_bits(buff, bits_num % 8, bits_iter);
		i = 1;
	}

	for(; i < octets_num; i++)
	{
		o_decoded_field->value[i] = Get_bits(buff, 8, bits_iter);
	}
}

void DecodeCSI_ReportConfig_subbands12(
	CSI_ReportConfig_subbands12_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint32    bits_num = 0;
	uint32    octets_num = 0;
	uint32    i = 0;

	bits_num = 12;
	o_decoded_field->bits_num = bits_num;
	octets_num = bits_num / 8 + (bits_num % 8 == 0 ? 0 : 1);

	if(bits_num % 8 != 0)
	{
		o_decoded_field->value[0] = Get_bits(buff, bits_num % 8, bits_iter);
		i = 1;
	}

	for(; i < octets_num; i++)
	{
		o_decoded_field->value[i] = Get_bits(buff, 8, bits_iter);
	}
}

void DecodeCSI_ReportConfig_subbands13(
	CSI_ReportConfig_subbands13_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint32    bits_num = 0;
	uint32    octets_num = 0;
	uint32    i = 0;

	bits_num = 13;
	o_decoded_field->bits_num = bits_num;
	octets_num = bits_num / 8 + (bits_num % 8 == 0 ? 0 : 1);

	if(bits_num % 8 != 0)
	{
		o_decoded_field->value[0] = Get_bits(buff, bits_num % 8, bits_iter);
		i = 1;
	}

	for(; i < octets_num; i++)
	{
		o_decoded_field->value[i] = Get_bits(buff, 8, bits_iter);
	}
}

void DecodeCSI_ReportConfig_subbands14(
	CSI_ReportConfig_subbands14_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint32    bits_num = 0;
	uint32    octets_num = 0;
	uint32    i = 0;

	bits_num = 14;
	o_decoded_field->bits_num = bits_num;
	octets_num = bits_num / 8 + (bits_num % 8 == 0 ? 0 : 1);

	if(bits_num % 8 != 0)
	{
		o_decoded_field->value[0] = Get_bits(buff, bits_num % 8, bits_iter);
		i = 1;
	}

	for(; i < octets_num; i++)
	{
		o_decoded_field->value[i] = Get_bits(buff, 8, bits_iter);
	}
}

void DecodeCSI_ReportConfig_subbands15(
	CSI_ReportConfig_subbands15_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint32    bits_num = 0;
	uint32    octets_num = 0;
	uint32    i = 0;

	bits_num = 15;
	o_decoded_field->bits_num = bits_num;
	octets_num = bits_num / 8 + (bits_num % 8 == 0 ? 0 : 1);

	if(bits_num % 8 != 0)
	{
		o_decoded_field->value[0] = Get_bits(buff, bits_num % 8, bits_iter);
		i = 1;
	}

	for(; i < octets_num; i++)
	{
		o_decoded_field->value[i] = Get_bits(buff, 8, bits_iter);
	}
}

void DecodeCSI_ReportConfig_subbands16(
	CSI_ReportConfig_subbands16_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint32    bits_num = 0;
	uint32    octets_num = 0;
	uint32    i = 0;

	bits_num = 16;
	o_decoded_field->bits_num = bits_num;
	octets_num = bits_num / 8 + (bits_num % 8 == 0 ? 0 : 1);

	if(bits_num % 8 != 0)
	{
		o_decoded_field->value[0] = Get_bits(buff, bits_num % 8, bits_iter);
		i = 1;
	}

	for(; i < octets_num; i++)
	{
		o_decoded_field->value[i] = Get_bits(buff, 8, bits_iter);
	}
}

void DecodeCSI_ReportConfig_subbands17(
	CSI_ReportConfig_subbands17_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint32    bits_num = 0;
	uint32    octets_num = 0;
	uint32    i = 0;

	bits_num = 17;
	o_decoded_field->bits_num = bits_num;
	octets_num = bits_num / 8 + (bits_num % 8 == 0 ? 0 : 1);

	if(bits_num % 8 != 0)
	{
		o_decoded_field->value[0] = Get_bits(buff, bits_num % 8, bits_iter);
		i = 1;
	}

	for(; i < octets_num; i++)
	{
		o_decoded_field->value[i] = Get_bits(buff, 8, bits_iter);
	}
}

void DecodeCSI_ReportConfig_subbands18(
	CSI_ReportConfig_subbands18_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint32    bits_num = 0;
	uint32    octets_num = 0;
	uint32    i = 0;

	bits_num = 18;
	o_decoded_field->bits_num = bits_num;
	octets_num = bits_num / 8 + (bits_num % 8 == 0 ? 0 : 1);

	if(bits_num % 8 != 0)
	{
		o_decoded_field->value[0] = Get_bits(buff, bits_num % 8, bits_iter);
		i = 1;
	}

	for(; i < octets_num; i++)
	{
		o_decoded_field->value[i] = Get_bits(buff, 8, bits_iter);
	}
}

void DecodeCSI_ReportConfig_csi_ReportingBand(
	CSI_ReportConfig_csi_ReportingBand_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint32    index = 0;
	uint8    ext_flag = 0;
	uint8    flag = 0;

	ext_flag = Get_bits(buff, 1, bits_iter);
	if(ext_flag == 0)
	{
		index = Get_bits(buff, 4, bits_iter);
	}
	else
	{
		//need to handle this asn error.
	}

	o_decoded_field->type = index;
	switch (index)
	{
	case CSI_REPORTCONFIG_CSI_REPORTINGBAND_SUBBANDS3:
		DecodeCSI_ReportConfig_subbands3(&o_decoded_field->a.subbands3, buff, bits_iter, asn_error);
		break;

	case CSI_REPORTCONFIG_CSI_REPORTINGBAND_SUBBANDS4:
		DecodeCSI_ReportConfig_subbands4(&o_decoded_field->a.subbands4, buff, bits_iter, asn_error);
		break;

	case CSI_REPORTCONFIG_CSI_REPORTINGBAND_SUBBANDS5:
		DecodeCSI_ReportConfig_subbands5(&o_decoded_field->a.subbands5, buff, bits_iter, asn_error);
		break;

	case CSI_REPORTCONFIG_CSI_REPORTINGBAND_SUBBANDS6:
		DecodeCSI_ReportConfig_subbands6(&o_decoded_field->a.subbands6, buff, bits_iter, asn_error);
		break;

	case CSI_REPORTCONFIG_CSI_REPORTINGBAND_SUBBANDS7:
		DecodeCSI_ReportConfig_subbands7(&o_decoded_field->a.subbands7, buff, bits_iter, asn_error);
		break;

	case CSI_REPORTCONFIG_CSI_REPORTINGBAND_SUBBANDS8:
		DecodeCSI_ReportConfig_subbands8(&o_decoded_field->a.subbands8, buff, bits_iter, asn_error);
		break;

	case CSI_REPORTCONFIG_CSI_REPORTINGBAND_SUBBANDS9:
		DecodeCSI_ReportConfig_subbands9(&o_decoded_field->a.subbands9, buff, bits_iter, asn_error);
		break;

	case CSI_REPORTCONFIG_CSI_REPORTINGBAND_SUBBANDS10:
		DecodeCSI_ReportConfig_subbands10(&o_decoded_field->a.subbands10, buff, bits_iter, asn_error);
		break;

	case CSI_REPORTCONFIG_CSI_REPORTINGBAND_SUBBANDS11:
		DecodeCSI_ReportConfig_subbands11(&o_decoded_field->a.subbands11, buff, bits_iter, asn_error);
		break;

	case CSI_REPORTCONFIG_CSI_REPORTINGBAND_SUBBANDS12:
		DecodeCSI_ReportConfig_subbands12(&o_decoded_field->a.subbands12, buff, bits_iter, asn_error);
		break;

	case CSI_REPORTCONFIG_CSI_REPORTINGBAND_SUBBANDS13:
		DecodeCSI_ReportConfig_subbands13(&o_decoded_field->a.subbands13, buff, bits_iter, asn_error);
		break;

	case CSI_REPORTCONFIG_CSI_REPORTINGBAND_SUBBANDS14:
		DecodeCSI_ReportConfig_subbands14(&o_decoded_field->a.subbands14, buff, bits_iter, asn_error);
		break;

	case CSI_REPORTCONFIG_CSI_REPORTINGBAND_SUBBANDS15:
		DecodeCSI_ReportConfig_subbands15(&o_decoded_field->a.subbands15, buff, bits_iter, asn_error);
		break;

	case CSI_REPORTCONFIG_CSI_REPORTINGBAND_SUBBANDS16:
		DecodeCSI_ReportConfig_subbands16(&o_decoded_field->a.subbands16, buff, bits_iter, asn_error);
		break;

	case CSI_REPORTCONFIG_CSI_REPORTINGBAND_SUBBANDS17:
		DecodeCSI_ReportConfig_subbands17(&o_decoded_field->a.subbands17, buff, bits_iter, asn_error);
		break;

	case CSI_REPORTCONFIG_CSI_REPORTINGBAND_SUBBANDS18:
		DecodeCSI_ReportConfig_subbands18(&o_decoded_field->a.subbands18, buff, bits_iter, asn_error);
		break;

	default:
		break;

	}
}

void DecodeCSI_ReportConfig_reportFreqConfiguration(
	CSI_ReportConfig_reportFreqConfiguration_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	o_decoded_field->cqi_FormatIndicator_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->pmi_FormatIndicator_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->csi_ReportingBand_exist = Get_bits(buff, 1, bits_iter);
	if(o_decoded_field->cqi_FormatIndicator_exist == TRUE)
	{
		DecodeCSI_ReportConfig_cqi_FormatIndicator(&o_decoded_field->cqi_FormatIndicator, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->pmi_FormatIndicator_exist == TRUE)
	{
		DecodeCSI_ReportConfig_pmi_FormatIndicator(&o_decoded_field->pmi_FormatIndicator, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->csi_ReportingBand_exist == TRUE)
	{
		DecodeCSI_ReportConfig_csi_ReportingBand(&o_decoded_field->csi_ReportingBand, buff, bits_iter, asn_error);
	}

}

void DecodeCSI_ReportConfig_timeRestrictionForChannelMeasurements(
	CSI_ReportConfig_timeRestrictionForChannelMeasurements_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = Get_bits(buff, 1, bits_iter);
}

void DecodeCSI_ReportConfig_timeRestrictionForInterferenceMeasurements(
	CSI_ReportConfig_timeRestrictionForInterferenceMeasurements_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = Get_bits(buff, 1, bits_iter);
}

void DecodeCSI_ReportConfig_nrofCQIsPerReport(
	CSI_ReportConfig_nrofCQIsPerReport_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = Get_bits(buff, 1, bits_iter);
}

void DecodeCSI_ReportConfig_enabled(
	CSI_ReportConfig_enabled_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
}

void DecodeCSI_ReportConfig_nrofReportedRS(
	CSI_ReportConfig_nrofReportedRS_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = Get_bits(buff, 2, bits_iter);
}

void DecodeCSI_ReportConfig_disabled(
	CSI_ReportConfig_disabled_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	o_decoded_field->nrofReportedRS_exist = Get_bits(buff, 1, bits_iter);
	if(o_decoded_field->nrofReportedRS_exist == TRUE)
	{
		DecodeCSI_ReportConfig_nrofReportedRS(&o_decoded_field->nrofReportedRS, buff, bits_iter, asn_error);
	}

}

void DecodeCSI_ReportConfig_groupBasedBeamReporting(
	CSI_ReportConfig_groupBasedBeamReporting_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint32    index = 0;

	index = Get_bits(buff, 1, bits_iter);
	o_decoded_field->type = index;
	switch (index)
	{
	case CSI_REPORTCONFIG_GROUPBASEDBEAMREPORTING_ENABLED:
		DecodeCSI_ReportConfig_enabled(&o_decoded_field->a.enabled, buff, bits_iter, asn_error);
		break;

	case CSI_REPORTCONFIG_GROUPBASEDBEAMREPORTING_DISABLED:
		DecodeCSI_ReportConfig_disabled(&o_decoded_field->a.disabled, buff, bits_iter, asn_error);
		break;

	default:
		break;

	}
}

void DecodeCSI_ReportConfig_cqi_Table(
	CSI_ReportConfig_cqi_Table_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = Get_bits(buff, 2, bits_iter);
}

void DecodeCSI_ReportConfig_subbandSize(
	CSI_ReportConfig_subbandSize_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = Get_bits(buff, 1, bits_iter);
}

void DecodeCSI_ReportConfig_non_PMI_PortIndication(
	CSI_ReportConfig_non_PMI_PortIndication_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint32    count = 0;
	count = Get_bits(buff, 7, bits_iter) + 1;
	o_decoded_field->length = count;

	for(uint32 i = 0; i < count; i++)
	{
		DecodePortIndexFor8Ranks(&o_decoded_field->elm[i], buff, bits_iter, asn_error);
	}
}

void DecodeCSI_ReportConfig(
	CSI_ReportConfig_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint8    flag = 0;
	uint8    ext_flag = 0;
	uint32    bits_width = 0;
	uint32    preamble_bitmap = 0;
	
	ext_flag = Get_bits(buff, 1, bits_iter);

	o_decoded_field->carrier_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->csi_IM_ResourcesForInterference_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->nzp_CSI_RS_ResourcesForInterference_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->reportFreqConfiguration_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->codebookConfig_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->nrofCQIsPerReport_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->cqi_Table_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->non_PMI_PortIndication_exist = Get_bits(buff, 1, bits_iter);
	DecodeCSI_ReportConfigId(&o_decoded_field->reportConfigId, buff, bits_iter, asn_error);
	if(o_decoded_field->carrier_exist == TRUE)
	{
		DecodeServCellIndex(&o_decoded_field->carrier, buff, bits_iter, asn_error);
	}

	DecodeCSI_ResourceConfigId(&o_decoded_field->resourcesForChannelMeasurement, buff, bits_iter, asn_error);
	if(o_decoded_field->csi_IM_ResourcesForInterference_exist == TRUE)
	{
		DecodeCSI_ResourceConfigId(&o_decoded_field->csi_IM_ResourcesForInterference, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->nzp_CSI_RS_ResourcesForInterference_exist == TRUE)
	{
		DecodeCSI_ResourceConfigId(&o_decoded_field->nzp_CSI_RS_ResourcesForInterference, buff, bits_iter, asn_error);
	}

	DecodeCSI_ReportConfig_reportConfigType(&o_decoded_field->reportConfigType, buff, bits_iter, asn_error);
	DecodeCSI_ReportConfig_reportQuantity(&o_decoded_field->reportQuantity, buff, bits_iter, asn_error);
	if(o_decoded_field->reportFreqConfiguration_exist == TRUE)
	{
		DecodeCSI_ReportConfig_reportFreqConfiguration(&o_decoded_field->reportFreqConfiguration, buff, bits_iter, asn_error);
	}

	DecodeCSI_ReportConfig_timeRestrictionForChannelMeasurements(&o_decoded_field->timeRestrictionForChannelMeasurements, buff, bits_iter, asn_error);
	DecodeCSI_ReportConfig_timeRestrictionForInterferenceMeasurements(&o_decoded_field->timeRestrictionForInterferenceMeasurements, buff, bits_iter, asn_error);
	if(o_decoded_field->codebookConfig_exist == TRUE)
	{
		DecodeCodebookConfig(&o_decoded_field->codebookConfig, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->nrofCQIsPerReport_exist == TRUE)
	{
		DecodeCSI_ReportConfig_nrofCQIsPerReport(&o_decoded_field->nrofCQIsPerReport, buff, bits_iter, asn_error);
	}

	DecodeCSI_ReportConfig_groupBasedBeamReporting(&o_decoded_field->groupBasedBeamReporting, buff, bits_iter, asn_error);
	if(o_decoded_field->cqi_Table_exist == TRUE)
	{
		DecodeCSI_ReportConfig_cqi_Table(&o_decoded_field->cqi_Table, buff, bits_iter, asn_error);
	}

	DecodeCSI_ReportConfig_subbandSize(&o_decoded_field->subbandSize, buff, bits_iter, asn_error);
	if(o_decoded_field->non_PMI_PortIndication_exist == TRUE)
	{
		DecodeCSI_ReportConfig_non_PMI_PortIndication(&o_decoded_field->non_PMI_PortIndication, buff, bits_iter, asn_error);
	}

	if(ext_flag == 1)
	{
		//need to handle asn error.
	}
}

