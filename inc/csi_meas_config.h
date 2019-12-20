/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * csi_meas_config.h - this is the header file for message: CSI-MeasConfig
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#ifndef _CSI_MEAS_CONFIG_H_
#define _CSI_MEAS_CONFIG_H_

#include "types.h"
#include "contants.h" 				
#include "handle_bits.h"
#include "nzp_csi_rs_resource.h"
#include "nzp_csi_rs_resource_id.h"
#include "nzp_csi_rs_resource_set.h"
#include "nzp_csi_rs_resource_set_id.h"
#include "csi_im_resource.h"
#include "csi_im_resource_id.h"
#include "csi_im_resource_set.h"
#include "csi_im_resource_set_id.h"
#include "csi_ssb_resource_set.h"
#include "csi_ssb_resource_set_id.h"
#include "csi_resource_config.h"
#include "csi_resource_config_id.h"
#include "csi_report_config.h"
#include "csi_report_config_id.h"
#include "csi_aperiodic_trigger_state_list.h"
#include "csi_semi_persistent_on_pusch_trigger_state_list.h"


typedef struct {
	uint32                                                             length;
	NZP_CSI_RS_Resource_t                                              elm[maxNrofNZP_CSI_RS_Resources];
}CSI_MeasConfig_nzp_CSI_RS_ResourceToAddModList_t;


typedef struct {
	uint32                                                             length;
	NZP_CSI_RS_ResourceId_t                                            elm[maxNrofNZP_CSI_RS_Resources];
}CSI_MeasConfig_nzp_CSI_RS_ResourceToReleaseList_t;


typedef struct {
	uint32                                                             length;
	NZP_CSI_RS_ResourceSet_t                                           elm[maxNrofNZP_CSI_RS_ResourceSets];
}CSI_MeasConfig_nzp_CSI_RS_ResourceSetToAddModList_t;


typedef struct {
	uint32                                                             length;
	NZP_CSI_RS_ResourceSetId_t                                         elm[maxNrofNZP_CSI_RS_ResourceSets];
}CSI_MeasConfig_nzp_CSI_RS_ResourceSetToReleaseList_t;


typedef struct {
	uint32                                                             length;
	CSI_IM_Resource_t                                                  elm[maxNrofCSI_IM_Resources];
}CSI_MeasConfig_csi_IM_ResourceToAddModList_t;


typedef struct {
	uint32                                                             length;
	CSI_IM_ResourceId_t                                                elm[maxNrofCSI_IM_Resources];
}CSI_MeasConfig_csi_IM_ResourceToReleaseList_t;


typedef struct {
	uint32                                                             length;
	CSI_IM_ResourceSet_t                                               elm[maxNrofCSI_IM_ResourceSets];
}CSI_MeasConfig_csi_IM_ResourceSetToAddModList_t;


typedef struct {
	uint32                                                             length;
	CSI_IM_ResourceSetId_t                                             elm[maxNrofCSI_IM_ResourceSets];
}CSI_MeasConfig_csi_IM_ResourceSetToReleaseList_t;


typedef struct {
	uint32                                                             length;
	CSI_SSB_ResourceSet_t                                              elm[maxNrofCSI_SSB_ResourceSets];
}CSI_MeasConfig_csi_SSB_ResourceSetToAddModList_t;


typedef struct {
	uint32                                                             length;
	CSI_SSB_ResourceSetId_t                                            elm[maxNrofCSI_SSB_ResourceSets];
}CSI_MeasConfig_csi_SSB_ResourceSetToAddReleaseList_t;


typedef struct {
	uint32                                                             length;
	CSI_ResourceConfig_t                                               elm[maxNrofCSI_ResourceConfigurations];
}CSI_MeasConfig_csi_ResourceConfigToAddModList_t;


typedef struct {
	uint32                                                             length;
	CSI_ResourceConfigId_t                                             elm[maxNrofCSI_ResourceConfigurations];
}CSI_MeasConfig_csi_ResourceConfigToReleaseList_t;


typedef struct {
	uint32                                                             length;
	CSI_ReportConfig_t                                                 elm[maxNrofCSI_ReportConfigurations];
}CSI_MeasConfig_csi_ReportConfigToAddModList_t;


typedef struct {
	uint32                                                             length;
	CSI_ReportConfigId_t                                               elm[maxNrofCSI_ReportConfigurations];
}CSI_MeasConfig_csi_ReportConfigToReleaseList_t;


typedef struct {
	uint32                                                             dummy;
}CSI_MeasConfig_release_t;


typedef enum {
	CSI_MEASCONFIG_APERIODICTRIGGERSTATELIST_RELEASE,
	CSI_MEASCONFIG_APERIODICTRIGGERSTATELIST_SETUP,
	CSI_MEASCONFIG_APERIODICTRIGGERSTATELIST_max = 0x7FFFFFFF
}CSI_MeasConfig_aperiodicTriggerStateList_e;


/* union corresponding asn: CSI_MeasConfig_aperiodicTriggerStateList */
typedef union {
	CSI_MeasConfig_release_t                                           release;
	CSI_AperiodicTriggerStateList_t                                    setup;
}CSI_MeasConfig_aperiodicTriggerStateList_u;


/* struct corresponding asn: CSI_MeasConfig_aperiodicTriggerStateList */
typedef struct {
	CSI_MeasConfig_aperiodicTriggerStateList_e                         type;
	CSI_MeasConfig_aperiodicTriggerStateList_u                         a;
}CSI_MeasConfig_aperiodicTriggerStateList_t;


typedef struct {
	uint32                                                             dummy;
}CSI_MeasConfig_release_1_t;


typedef enum {
	CSI_MEASCONFIG_SEMIPERSISTENTONPUSCH_TRIGGERSTATELIST_RELEASE,
	CSI_MEASCONFIG_SEMIPERSISTENTONPUSCH_TRIGGERSTATELIST_SETUP,
	CSI_MEASCONFIG_SEMIPERSISTENTONPUSCH_TRIGGERSTATELIST_max = 0x7FFFFFFF
}CSI_MeasConfig_semiPersistentOnPUSCH_TriggerStateList_e;


/* union corresponding asn: CSI_MeasConfig_semiPersistentOnPUSCH_TriggerStateList */
typedef union {
	CSI_MeasConfig_release_1_t                                         release;
	CSI_SemiPersistentOnPUSCH_TriggerStateList_t                       setup;
}CSI_MeasConfig_semiPersistentOnPUSCH_TriggerStateList_u;


/* struct corresponding asn: CSI_MeasConfig_semiPersistentOnPUSCH_TriggerStateList */
typedef struct {
	CSI_MeasConfig_semiPersistentOnPUSCH_TriggerStateList_e            type;
	CSI_MeasConfig_semiPersistentOnPUSCH_TriggerStateList_u            a;
}CSI_MeasConfig_semiPersistentOnPUSCH_TriggerStateList_t;


typedef struct {
	BOOLEAN                                                            nzp_CSI_RS_ResourceToAddModList_exist;
	CSI_MeasConfig_nzp_CSI_RS_ResourceToAddModList_t                   nzp_CSI_RS_ResourceToAddModList;
	BOOLEAN                                                            nzp_CSI_RS_ResourceToReleaseList_exist;
	CSI_MeasConfig_nzp_CSI_RS_ResourceToReleaseList_t                  nzp_CSI_RS_ResourceToReleaseList;
	BOOLEAN                                                            nzp_CSI_RS_ResourceSetToAddModList_exist;
	CSI_MeasConfig_nzp_CSI_RS_ResourceSetToAddModList_t                nzp_CSI_RS_ResourceSetToAddModList;
	BOOLEAN                                                            nzp_CSI_RS_ResourceSetToReleaseList_exist;
	CSI_MeasConfig_nzp_CSI_RS_ResourceSetToReleaseList_t               nzp_CSI_RS_ResourceSetToReleaseList;
	BOOLEAN                                                            csi_IM_ResourceToAddModList_exist;
	CSI_MeasConfig_csi_IM_ResourceToAddModList_t                       csi_IM_ResourceToAddModList;
	BOOLEAN                                                            csi_IM_ResourceToReleaseList_exist;
	CSI_MeasConfig_csi_IM_ResourceToReleaseList_t                      csi_IM_ResourceToReleaseList;
	BOOLEAN                                                            csi_IM_ResourceSetToAddModList_exist;
	CSI_MeasConfig_csi_IM_ResourceSetToAddModList_t                    csi_IM_ResourceSetToAddModList;
	BOOLEAN                                                            csi_IM_ResourceSetToReleaseList_exist;
	CSI_MeasConfig_csi_IM_ResourceSetToReleaseList_t                   csi_IM_ResourceSetToReleaseList;
	BOOLEAN                                                            csi_SSB_ResourceSetToAddModList_exist;
	CSI_MeasConfig_csi_SSB_ResourceSetToAddModList_t                   csi_SSB_ResourceSetToAddModList;
	BOOLEAN                                                            csi_SSB_ResourceSetToAddReleaseList_exist;
	CSI_MeasConfig_csi_SSB_ResourceSetToAddReleaseList_t               csi_SSB_ResourceSetToAddReleaseList;
	BOOLEAN                                                            csi_ResourceConfigToAddModList_exist;
	CSI_MeasConfig_csi_ResourceConfigToAddModList_t                    csi_ResourceConfigToAddModList;
	BOOLEAN                                                            csi_ResourceConfigToReleaseList_exist;
	CSI_MeasConfig_csi_ResourceConfigToReleaseList_t                   csi_ResourceConfigToReleaseList;
	BOOLEAN                                                            csi_ReportConfigToAddModList_exist;
	CSI_MeasConfig_csi_ReportConfigToAddModList_t                      csi_ReportConfigToAddModList;
	BOOLEAN                                                            csi_ReportConfigToReleaseList_exist;
	CSI_MeasConfig_csi_ReportConfigToReleaseList_t                     csi_ReportConfigToReleaseList;
	BOOLEAN                                                            reportTriggerSize_exist;
	uint32                                                             reportTriggerSize;
	BOOLEAN                                                            aperiodicTriggerStateList_exist;
	CSI_MeasConfig_aperiodicTriggerStateList_t                         aperiodicTriggerStateList;
	BOOLEAN                                                            semiPersistentOnPUSCH_TriggerStateList_exist;
	CSI_MeasConfig_semiPersistentOnPUSCH_TriggerStateList_t            semiPersistentOnPUSCH_TriggerStateList;
	/* Extension marker start. */
}CSI_MeasConfig_t;


extern void EncodeCSI_MeasConfig(
	CSI_MeasConfig_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);
extern void DecodeCSI_MeasConfig(
	CSI_MeasConfig_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);

#endif
