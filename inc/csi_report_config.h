/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * csi_report_config.h - this is the header file for message: CSI-ReportConfig
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#ifndef _CSI_REPORT_CONFIG_H_
#define _CSI_REPORT_CONFIG_H_

#include "types.h"
#include "contants.h" 				
#include "handle_bits.h"
#include "csi_report_config_id.h"
#include "serv_cell_index.h"
#include "csi_resource_config_id.h"
#include "csi_resource_config_id.h"
#include "csi_resource_config_id.h"
#include "csi_report_periodicity_and_offset.h"
#include "pucch_csi_resource.h"
#include "csi_report_periodicity_and_offset.h"
#include "pucch_csi_resource.h"
#include "p0_pusch_alpha_set_id.h"
#include "codebook_config.h"
#include "port_index_for8_ranks.h"


typedef struct {
	uint32                                                             length;
	PUCCH_CSI_Resource_t                                               elm[maxNrofBWPs];
}CSI_ReportConfig_pucch_CSI_ResourceList_t;


typedef struct {
	CSI_ReportPeriodicityAndOffset_t                                   reportSlotConfig;
	CSI_ReportConfig_pucch_CSI_ResourceList_t                          pucch_CSI_ResourceList;
}CSI_ReportConfig_periodic_t;


typedef struct {
	uint32                                                             length;
	PUCCH_CSI_Resource_t                                               elm[maxNrofBWPs];
}CSI_ReportConfig_pucch_CSI_ResourceList_1_t;


typedef struct {
	CSI_ReportPeriodicityAndOffset_t                                   reportSlotConfig;
	CSI_ReportConfig_pucch_CSI_ResourceList_1_t                        pucch_CSI_ResourceList;
}CSI_ReportConfig_semiPersistentOnPUCCH_t;


typedef enum {
	CSI_REPORTCONFIG_REPORTSLOTCONFIG_SL5,
	CSI_REPORTCONFIG_REPORTSLOTCONFIG_SL10,
	CSI_REPORTCONFIG_REPORTSLOTCONFIG_SL20,
	CSI_REPORTCONFIG_REPORTSLOTCONFIG_SL40,
	CSI_REPORTCONFIG_REPORTSLOTCONFIG_SL80,
	CSI_REPORTCONFIG_REPORTSLOTCONFIG_SL160,
	CSI_REPORTCONFIG_REPORTSLOTCONFIG_SL320,
	CSI_REPORTCONFIG_REPORTSLOTCONFIG_max = 0x7FFFFFFF
}CSI_ReportConfig_reportSlotConfig_e;


typedef struct {
	uint32                                                             length;
	uint32                                                             elm[maxNrofUL_Allocations];
}CSI_ReportConfig_reportSlotOffsetList_t;


typedef struct {
	CSI_ReportConfig_reportSlotConfig_e                                reportSlotConfig;
	CSI_ReportConfig_reportSlotOffsetList_t                            reportSlotOffsetList;
	P0_PUSCH_AlphaSetId_t                                              p0alpha;
}CSI_ReportConfig_semiPersistentOnPUSCH_t;


typedef struct {
	uint32                                                             length;
	uint32                                                             elm[maxNrofUL_Allocations];
}CSI_ReportConfig_reportSlotOffsetList_2_t;


typedef struct {
	CSI_ReportConfig_reportSlotOffsetList_2_t                          reportSlotOffsetList;
}CSI_ReportConfig_aperiodic_t;


typedef enum {
	CSI_REPORTCONFIG_REPORTCONFIGTYPE_PERIODIC,
	CSI_REPORTCONFIG_REPORTCONFIGTYPE_SEMIPERSISTENTONPUCCH,
	CSI_REPORTCONFIG_REPORTCONFIGTYPE_SEMIPERSISTENTONPUSCH,
	CSI_REPORTCONFIG_REPORTCONFIGTYPE_APERIODIC,
	CSI_REPORTCONFIG_REPORTCONFIGTYPE_max = 0x7FFFFFFF
}CSI_ReportConfig_reportConfigType_e;


/* union corresponding asn: CSI_ReportConfig_reportConfigType */
typedef union {
	CSI_ReportConfig_periodic_t                                        periodic;
	CSI_ReportConfig_semiPersistentOnPUCCH_t                           semiPersistentOnPUCCH;
	CSI_ReportConfig_semiPersistentOnPUSCH_t                           semiPersistentOnPUSCH;
	CSI_ReportConfig_aperiodic_t                                       aperiodic;
}CSI_ReportConfig_reportConfigType_u;


/* struct corresponding asn: CSI_ReportConfig_reportConfigType */
typedef struct {
	CSI_ReportConfig_reportConfigType_e                                type;
	CSI_ReportConfig_reportConfigType_u                                a;
}CSI_ReportConfig_reportConfigType_t;


typedef struct {
	uint32                                                             dummy;
}CSI_ReportConfig_none_t;


typedef struct {
	uint32                                                             dummy;
}CSI_ReportConfig_cri_RI_PMI_CQI_t;


typedef struct {
	uint32                                                             dummy;
}CSI_ReportConfig_cri_RI_i1_t;


typedef enum {
	CSI_REPORTCONFIG_PDSCH_BUNDLESIZEFORCSI_N2,
	CSI_REPORTCONFIG_PDSCH_BUNDLESIZEFORCSI_N4,
	CSI_REPORTCONFIG_PDSCH_BUNDLESIZEFORCSI_max = 0x7FFFFFFF
}CSI_ReportConfig_pdsch_BundleSizeForCSI_e;


typedef struct {
	BOOLEAN                                                            pdsch_BundleSizeForCSI_exist;
	CSI_ReportConfig_pdsch_BundleSizeForCSI_e                          pdsch_BundleSizeForCSI;
}CSI_ReportConfig_cri_RI_i1_CQI_t;


typedef struct {
	uint32                                                             dummy;
}CSI_ReportConfig_cri_RI_CQI_t;


typedef struct {
	uint32                                                             dummy;
}CSI_ReportConfig_cri_RSRP_t;


typedef struct {
	uint32                                                             dummy;
}CSI_ReportConfig_ssb_Index_RSRP_t;


typedef struct {
	uint32                                                             dummy;
}CSI_ReportConfig_cri_RI_LI_PMI_CQI_t;


typedef enum {
	CSI_REPORTCONFIG_REPORTQUANTITY_NONE,
	CSI_REPORTCONFIG_REPORTQUANTITY_CRI_RI_PMI_CQI,
	CSI_REPORTCONFIG_REPORTQUANTITY_CRI_RI_I1,
	CSI_REPORTCONFIG_REPORTQUANTITY_CRI_RI_I1_CQI,
	CSI_REPORTCONFIG_REPORTQUANTITY_CRI_RI_CQI,
	CSI_REPORTCONFIG_REPORTQUANTITY_CRI_RSRP,
	CSI_REPORTCONFIG_REPORTQUANTITY_SSB_INDEX_RSRP,
	CSI_REPORTCONFIG_REPORTQUANTITY_CRI_RI_LI_PMI_CQI,
	CSI_REPORTCONFIG_REPORTQUANTITY_max = 0x7FFFFFFF
}CSI_ReportConfig_reportQuantity_e;


/* union corresponding asn: CSI_ReportConfig_reportQuantity */
typedef union {
	CSI_ReportConfig_none_t                                            none;
	CSI_ReportConfig_cri_RI_PMI_CQI_t                                  cri_RI_PMI_CQI;
	CSI_ReportConfig_cri_RI_i1_t                                       cri_RI_i1;
	CSI_ReportConfig_cri_RI_i1_CQI_t                                   cri_RI_i1_CQI;
	CSI_ReportConfig_cri_RI_CQI_t                                      cri_RI_CQI;
	CSI_ReportConfig_cri_RSRP_t                                        cri_RSRP;
	CSI_ReportConfig_ssb_Index_RSRP_t                                  ssb_Index_RSRP;
	CSI_ReportConfig_cri_RI_LI_PMI_CQI_t                               cri_RI_LI_PMI_CQI;
}CSI_ReportConfig_reportQuantity_u;


/* struct corresponding asn: CSI_ReportConfig_reportQuantity */
typedef struct {
	CSI_ReportConfig_reportQuantity_e                                  type;
	CSI_ReportConfig_reportQuantity_u                                  a;
}CSI_ReportConfig_reportQuantity_t;


typedef enum {
	CSI_REPORTCONFIG_CQI_FORMATINDICATOR_WIDEBANDCQI,
	CSI_REPORTCONFIG_CQI_FORMATINDICATOR_SUBBANDCQI,
	CSI_REPORTCONFIG_CQI_FORMATINDICATOR_max = 0x7FFFFFFF
}CSI_ReportConfig_cqi_FormatIndicator_e;


typedef enum {
	CSI_REPORTCONFIG_PMI_FORMATINDICATOR_WIDEBANDPMI,
	CSI_REPORTCONFIG_PMI_FORMATINDICATOR_SUBBANDPMI,
	CSI_REPORTCONFIG_PMI_FORMATINDICATOR_max = 0x7FFFFFFF
}CSI_ReportConfig_pmi_FormatIndicator_e;


/* struct corresponding asn: CSI_ReportConfig_subbands3 */
/* ASN: BIT STRING SIZE(3) */
typedef struct {
	uint32                                                             bits_num;
	uint8                                                              value[1];
}CSI_ReportConfig_subbands3_t;


/* struct corresponding asn: CSI_ReportConfig_subbands4 */
/* ASN: BIT STRING SIZE(4) */
typedef struct {
	uint32                                                             bits_num;
	uint8                                                              value[1];
}CSI_ReportConfig_subbands4_t;


/* struct corresponding asn: CSI_ReportConfig_subbands5 */
/* ASN: BIT STRING SIZE(5) */
typedef struct {
	uint32                                                             bits_num;
	uint8                                                              value[1];
}CSI_ReportConfig_subbands5_t;


/* struct corresponding asn: CSI_ReportConfig_subbands6 */
/* ASN: BIT STRING SIZE(6) */
typedef struct {
	uint32                                                             bits_num;
	uint8                                                              value[1];
}CSI_ReportConfig_subbands6_t;


/* struct corresponding asn: CSI_ReportConfig_subbands7 */
/* ASN: BIT STRING SIZE(7) */
typedef struct {
	uint32                                                             bits_num;
	uint8                                                              value[1];
}CSI_ReportConfig_subbands7_t;


/* struct corresponding asn: CSI_ReportConfig_subbands8 */
/* ASN: BIT STRING SIZE(8) */
typedef struct {
	uint32                                                             bits_num;
	uint8                                                              value[1];
}CSI_ReportConfig_subbands8_t;


/* struct corresponding asn: CSI_ReportConfig_subbands9 */
/* ASN: BIT STRING SIZE(9) */
typedef struct {
	uint32                                                             bits_num;
	uint8                                                              value[2];
}CSI_ReportConfig_subbands9_t;


/* struct corresponding asn: CSI_ReportConfig_subbands10 */
/* ASN: BIT STRING SIZE(10) */
typedef struct {
	uint32                                                             bits_num;
	uint8                                                              value[2];
}CSI_ReportConfig_subbands10_t;


/* struct corresponding asn: CSI_ReportConfig_subbands11 */
/* ASN: BIT STRING SIZE(11) */
typedef struct {
	uint32                                                             bits_num;
	uint8                                                              value[2];
}CSI_ReportConfig_subbands11_t;


/* struct corresponding asn: CSI_ReportConfig_subbands12 */
/* ASN: BIT STRING SIZE(12) */
typedef struct {
	uint32                                                             bits_num;
	uint8                                                              value[2];
}CSI_ReportConfig_subbands12_t;


/* struct corresponding asn: CSI_ReportConfig_subbands13 */
/* ASN: BIT STRING SIZE(13) */
typedef struct {
	uint32                                                             bits_num;
	uint8                                                              value[2];
}CSI_ReportConfig_subbands13_t;


/* struct corresponding asn: CSI_ReportConfig_subbands14 */
/* ASN: BIT STRING SIZE(14) */
typedef struct {
	uint32                                                             bits_num;
	uint8                                                              value[2];
}CSI_ReportConfig_subbands14_t;


/* struct corresponding asn: CSI_ReportConfig_subbands15 */
/* ASN: BIT STRING SIZE(15) */
typedef struct {
	uint32                                                             bits_num;
	uint8                                                              value[2];
}CSI_ReportConfig_subbands15_t;


/* struct corresponding asn: CSI_ReportConfig_subbands16 */
/* ASN: BIT STRING SIZE(16) */
typedef struct {
	uint32                                                             bits_num;
	uint8                                                              value[2];
}CSI_ReportConfig_subbands16_t;


/* struct corresponding asn: CSI_ReportConfig_subbands17 */
/* ASN: BIT STRING SIZE(17) */
typedef struct {
	uint32                                                             bits_num;
	uint8                                                              value[3];
}CSI_ReportConfig_subbands17_t;


/* struct corresponding asn: CSI_ReportConfig_subbands18 */
/* ASN: BIT STRING SIZE(18) */
typedef struct {
	uint32                                                             bits_num;
	uint8                                                              value[3];
}CSI_ReportConfig_subbands18_t;


typedef enum {
	CSI_REPORTCONFIG_CSI_REPORTINGBAND_SUBBANDS3,
	CSI_REPORTCONFIG_CSI_REPORTINGBAND_SUBBANDS4,
	CSI_REPORTCONFIG_CSI_REPORTINGBAND_SUBBANDS5,
	CSI_REPORTCONFIG_CSI_REPORTINGBAND_SUBBANDS6,
	CSI_REPORTCONFIG_CSI_REPORTINGBAND_SUBBANDS7,
	CSI_REPORTCONFIG_CSI_REPORTINGBAND_SUBBANDS8,
	CSI_REPORTCONFIG_CSI_REPORTINGBAND_SUBBANDS9,
	CSI_REPORTCONFIG_CSI_REPORTINGBAND_SUBBANDS10,
	CSI_REPORTCONFIG_CSI_REPORTINGBAND_SUBBANDS11,
	CSI_REPORTCONFIG_CSI_REPORTINGBAND_SUBBANDS12,
	CSI_REPORTCONFIG_CSI_REPORTINGBAND_SUBBANDS13,
	CSI_REPORTCONFIG_CSI_REPORTINGBAND_SUBBANDS14,
	CSI_REPORTCONFIG_CSI_REPORTINGBAND_SUBBANDS15,
	CSI_REPORTCONFIG_CSI_REPORTINGBAND_SUBBANDS16,
	CSI_REPORTCONFIG_CSI_REPORTINGBAND_SUBBANDS17,
	CSI_REPORTCONFIG_CSI_REPORTINGBAND_SUBBANDS18,
	/* Extension marker start. */
	CSI_REPORTCONFIG_CSI_REPORTINGBAND_max = 0x7FFFFFFF
}CSI_ReportConfig_csi_ReportingBand_e;


/* union corresponding asn: CSI_ReportConfig_csi_ReportingBand */
typedef union {
	CSI_ReportConfig_subbands3_t                                       subbands3;
	CSI_ReportConfig_subbands4_t                                       subbands4;
	CSI_ReportConfig_subbands5_t                                       subbands5;
	CSI_ReportConfig_subbands6_t                                       subbands6;
	CSI_ReportConfig_subbands7_t                                       subbands7;
	CSI_ReportConfig_subbands8_t                                       subbands8;
	CSI_ReportConfig_subbands9_t                                       subbands9;
	CSI_ReportConfig_subbands10_t                                      subbands10;
	CSI_ReportConfig_subbands11_t                                      subbands11;
	CSI_ReportConfig_subbands12_t                                      subbands12;
	CSI_ReportConfig_subbands13_t                                      subbands13;
	CSI_ReportConfig_subbands14_t                                      subbands14;
	CSI_ReportConfig_subbands15_t                                      subbands15;
	CSI_ReportConfig_subbands16_t                                      subbands16;
	CSI_ReportConfig_subbands17_t                                      subbands17;
	CSI_ReportConfig_subbands18_t                                      subbands18;
	/* Extension marker start. */
}CSI_ReportConfig_csi_ReportingBand_u;


/* struct corresponding asn: CSI_ReportConfig_csi_ReportingBand */
typedef struct {
	CSI_ReportConfig_csi_ReportingBand_e                               type;
	CSI_ReportConfig_csi_ReportingBand_u                               a;
}CSI_ReportConfig_csi_ReportingBand_t;


typedef struct {
	BOOLEAN                                                            cqi_FormatIndicator_exist;
	CSI_ReportConfig_cqi_FormatIndicator_e                             cqi_FormatIndicator;
	BOOLEAN                                                            pmi_FormatIndicator_exist;
	CSI_ReportConfig_pmi_FormatIndicator_e                             pmi_FormatIndicator;
	BOOLEAN                                                            csi_ReportingBand_exist;
	CSI_ReportConfig_csi_ReportingBand_t                               csi_ReportingBand;
}CSI_ReportConfig_reportFreqConfiguration_t;


typedef enum {
	CSI_REPORTCONFIG_TIMERESTRICTIONFORCHANNELMEASUREMENTS_CONFIGURED,
	CSI_REPORTCONFIG_TIMERESTRICTIONFORCHANNELMEASUREMENTS_NOTCONFIGURED,
	CSI_REPORTCONFIG_TIMERESTRICTIONFORCHANNELMEASUREMENTS_max = 0x7FFFFFFF
}CSI_ReportConfig_timeRestrictionForChannelMeasurements_e;


typedef enum {
	CSI_REPORTCONFIG_TIMERESTRICTIONFORINTERFERENCEMEASUREMENTS_CONFIGURED,
	CSI_REPORTCONFIG_TIMERESTRICTIONFORINTERFERENCEMEASUREMENTS_NOTCONFIGURED,
	CSI_REPORTCONFIG_TIMERESTRICTIONFORINTERFERENCEMEASUREMENTS_max = 0x7FFFFFFF
}CSI_ReportConfig_timeRestrictionForInterferenceMeasurements_e;


typedef enum {
	CSI_REPORTCONFIG_NROFCQISPERREPORT_N1,
	CSI_REPORTCONFIG_NROFCQISPERREPORT_N2,
	CSI_REPORTCONFIG_NROFCQISPERREPORT_max = 0x7FFFFFFF
}CSI_ReportConfig_nrofCQIsPerReport_e;


typedef struct {
	uint32                                                             dummy;
}CSI_ReportConfig_enabled_t;


typedef enum {
	CSI_REPORTCONFIG_NROFREPORTEDRS_N1,
	CSI_REPORTCONFIG_NROFREPORTEDRS_N2,
	CSI_REPORTCONFIG_NROFREPORTEDRS_N3,
	CSI_REPORTCONFIG_NROFREPORTEDRS_N4,
	CSI_REPORTCONFIG_NROFREPORTEDRS_max = 0x7FFFFFFF
}CSI_ReportConfig_nrofReportedRS_e;


typedef struct {
	BOOLEAN                                                            nrofReportedRS_exist;
	CSI_ReportConfig_nrofReportedRS_e                                  nrofReportedRS;
}CSI_ReportConfig_disabled_t;


typedef enum {
	CSI_REPORTCONFIG_GROUPBASEDBEAMREPORTING_ENABLED,
	CSI_REPORTCONFIG_GROUPBASEDBEAMREPORTING_DISABLED,
	CSI_REPORTCONFIG_GROUPBASEDBEAMREPORTING_max = 0x7FFFFFFF
}CSI_ReportConfig_groupBasedBeamReporting_e;


/* union corresponding asn: CSI_ReportConfig_groupBasedBeamReporting */
typedef union {
	CSI_ReportConfig_enabled_t                                         enabled;
	CSI_ReportConfig_disabled_t                                        disabled;
}CSI_ReportConfig_groupBasedBeamReporting_u;


/* struct corresponding asn: CSI_ReportConfig_groupBasedBeamReporting */
typedef struct {
	CSI_ReportConfig_groupBasedBeamReporting_e                         type;
	CSI_ReportConfig_groupBasedBeamReporting_u                         a;
}CSI_ReportConfig_groupBasedBeamReporting_t;


typedef enum {
	CSI_REPORTCONFIG_CQI_TABLE_TABLE1,
	CSI_REPORTCONFIG_CQI_TABLE_TABLE2,
	CSI_REPORTCONFIG_CQI_TABLE_SPARE2,
	CSI_REPORTCONFIG_CQI_TABLE_SPARE1,
	CSI_REPORTCONFIG_CQI_TABLE_max = 0x7FFFFFFF
}CSI_ReportConfig_cqi_Table_e;


typedef enum {
	CSI_REPORTCONFIG_SUBBANDSIZE_VALUE1,
	CSI_REPORTCONFIG_SUBBANDSIZE_VALUE2,
	CSI_REPORTCONFIG_SUBBANDSIZE_max = 0x7FFFFFFF
}CSI_ReportConfig_subbandSize_e;


typedef struct {
	uint32                                                             length;
	PortIndexFor8Ranks_t                                               elm[maxNrofNZP_CSI_RS_ResourcesPerConfig];
}CSI_ReportConfig_non_PMI_PortIndication_t;


typedef struct {
	CSI_ReportConfigId_t                                               reportConfigId;
	BOOLEAN                                                            carrier_exist;
	ServCellIndex_t                                                    carrier;
	CSI_ResourceConfigId_t                                             resourcesForChannelMeasurement;
	BOOLEAN                                                            csi_IM_ResourcesForInterference_exist;
	CSI_ResourceConfigId_t                                             csi_IM_ResourcesForInterference;
	BOOLEAN                                                            nzp_CSI_RS_ResourcesForInterference_exist;
	CSI_ResourceConfigId_t                                             nzp_CSI_RS_ResourcesForInterference;
	CSI_ReportConfig_reportConfigType_t                                reportConfigType;
	CSI_ReportConfig_reportQuantity_t                                  reportQuantity;
	BOOLEAN                                                            reportFreqConfiguration_exist;
	CSI_ReportConfig_reportFreqConfiguration_t                         reportFreqConfiguration;
	CSI_ReportConfig_timeRestrictionForChannelMeasurements_e           timeRestrictionForChannelMeasurements;
	CSI_ReportConfig_timeRestrictionForInterferenceMeasurements_e      timeRestrictionForInterferenceMeasurements;
	BOOLEAN                                                            codebookConfig_exist;
	CodebookConfig_t                                                   codebookConfig;
	BOOLEAN                                                            nrofCQIsPerReport_exist;
	CSI_ReportConfig_nrofCQIsPerReport_e                               nrofCQIsPerReport;
	CSI_ReportConfig_groupBasedBeamReporting_t                         groupBasedBeamReporting;
	BOOLEAN                                                            cqi_Table_exist;
	CSI_ReportConfig_cqi_Table_e                                       cqi_Table;
	CSI_ReportConfig_subbandSize_e                                     subbandSize;
	BOOLEAN                                                            non_PMI_PortIndication_exist;
	CSI_ReportConfig_non_PMI_PortIndication_t                          non_PMI_PortIndication;
	/* Extension marker start. */
}CSI_ReportConfig_t;


extern void EncodeCSI_ReportConfig(
	CSI_ReportConfig_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);
extern void DecodeCSI_ReportConfig(
	CSI_ReportConfig_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);

#endif
