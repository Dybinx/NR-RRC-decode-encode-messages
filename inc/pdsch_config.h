/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * pdsch_config.h - this is the header file for message: PDSCH-Config
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#ifndef _PDSCH_CONFIG_H_
#define _PDSCH_CONFIG_H_

#include "types.h"
#include "contants.h" 				
#include "handle_bits.h"
#include "dmrs_downlink_config.h"
#include "dmrs_downlink_config.h"
#include "tci_state.h"
#include "tci_state_id.h"
#include "pdsch_time_domain_resource_allocation_list.h"
#include "rate_match_pattern.h"
#include "rate_match_pattern_id.h"
#include "rate_match_pattern_group.h"
#include "rate_match_pattern_group.h"
#include "zp_csi_rs_resource.h"
#include "zp_csi_rs_resource_id.h"
#include "zp_csi_rs_resource_set.h"
#include "zp_csi_rs_resource_set_id.h"
#include "zp_csi_rs_resource_set.h"
#include "zp_csi_rs_resource_set_id.h"
#include "zp_csi_rs_resource_set.h"


typedef struct {
	uint32                                                             dummy;
}PDSCH_Config_release_t;


typedef enum {
	PDSCH_CONFIG_DMRS_DOWNLINKFORPDSCH_MAPPINGTYPEA_RELEASE,
	PDSCH_CONFIG_DMRS_DOWNLINKFORPDSCH_MAPPINGTYPEA_SETUP,
	PDSCH_CONFIG_DMRS_DOWNLINKFORPDSCH_MAPPINGTYPEA_max = 0x7FFFFFFF
}PDSCH_Config_dmrs_DownlinkForPDSCH_MappingTypeA_e;


/* union corresponding asn: PDSCH_Config_dmrs_DownlinkForPDSCH_MappingTypeA */
typedef union {
	PDSCH_Config_release_t                                             release;
	DMRS_DownlinkConfig_t                                              setup;
}PDSCH_Config_dmrs_DownlinkForPDSCH_MappingTypeA_u;


/* struct corresponding asn: PDSCH_Config_dmrs_DownlinkForPDSCH_MappingTypeA */
typedef struct {
	PDSCH_Config_dmrs_DownlinkForPDSCH_MappingTypeA_e                  type;
	PDSCH_Config_dmrs_DownlinkForPDSCH_MappingTypeA_u                  a;
}PDSCH_Config_dmrs_DownlinkForPDSCH_MappingTypeA_t;


typedef struct {
	uint32                                                             dummy;
}PDSCH_Config_release_1_t;


typedef enum {
	PDSCH_CONFIG_DMRS_DOWNLINKFORPDSCH_MAPPINGTYPEB_RELEASE,
	PDSCH_CONFIG_DMRS_DOWNLINKFORPDSCH_MAPPINGTYPEB_SETUP,
	PDSCH_CONFIG_DMRS_DOWNLINKFORPDSCH_MAPPINGTYPEB_max = 0x7FFFFFFF
}PDSCH_Config_dmrs_DownlinkForPDSCH_MappingTypeB_e;


/* union corresponding asn: PDSCH_Config_dmrs_DownlinkForPDSCH_MappingTypeB */
typedef union {
	PDSCH_Config_release_1_t                                           release;
	DMRS_DownlinkConfig_t                                              setup;
}PDSCH_Config_dmrs_DownlinkForPDSCH_MappingTypeB_u;


/* struct corresponding asn: PDSCH_Config_dmrs_DownlinkForPDSCH_MappingTypeB */
typedef struct {
	PDSCH_Config_dmrs_DownlinkForPDSCH_MappingTypeB_e                  type;
	PDSCH_Config_dmrs_DownlinkForPDSCH_MappingTypeB_u                  a;
}PDSCH_Config_dmrs_DownlinkForPDSCH_MappingTypeB_t;


typedef struct {
	uint32                                                             length;
	TCI_State_t                                                        elm[maxNrofTCI_States];
}PDSCH_Config_tci_StatesToAddModList_t;


typedef struct {
	uint32                                                             length;
	TCI_StateId_t                                                      elm[maxNrofTCI_States];
}PDSCH_Config_tci_StatesToReleaseList_t;


typedef enum {
	PDSCH_CONFIG_VRB_TOPRB_INTERLEAVER_N2,
	PDSCH_CONFIG_VRB_TOPRB_INTERLEAVER_N4,
	PDSCH_CONFIG_VRB_TOPRB_INTERLEAVER_max = 0x7FFFFFFF
}PDSCH_Config_vrb_ToPRB_Interleaver_e;


typedef enum {
	PDSCH_CONFIG_RESOURCEALLOCATION_RESOURCEALLOCATIONTYPE0,
	PDSCH_CONFIG_RESOURCEALLOCATION_RESOURCEALLOCATIONTYPE1,
	PDSCH_CONFIG_RESOURCEALLOCATION_DYNAMICSWITCH,
	PDSCH_CONFIG_RESOURCEALLOCATION_max = 0x7FFFFFFF
}PDSCH_Config_resourceAllocation_e;


typedef struct {
	uint32                                                             dummy;
}PDSCH_Config_release_2_t;


typedef enum {
	PDSCH_CONFIG_PDSCH_TIMEDOMAINALLOCATIONLIST_RELEASE,
	PDSCH_CONFIG_PDSCH_TIMEDOMAINALLOCATIONLIST_SETUP,
	PDSCH_CONFIG_PDSCH_TIMEDOMAINALLOCATIONLIST_max = 0x7FFFFFFF
}PDSCH_Config_pdsch_TimeDomainAllocationList_e;


/* union corresponding asn: PDSCH_Config_pdsch_TimeDomainAllocationList */
typedef union {
	PDSCH_Config_release_2_t                                           release;
	PDSCH_TimeDomainResourceAllocationList_t                           setup;
}PDSCH_Config_pdsch_TimeDomainAllocationList_u;


/* struct corresponding asn: PDSCH_Config_pdsch_TimeDomainAllocationList */
typedef struct {
	PDSCH_Config_pdsch_TimeDomainAllocationList_e                      type;
	PDSCH_Config_pdsch_TimeDomainAllocationList_u                      a;
}PDSCH_Config_pdsch_TimeDomainAllocationList_t;


typedef enum {
	PDSCH_CONFIG_PDSCH_AGGREGATIONFACTOR_N2,
	PDSCH_CONFIG_PDSCH_AGGREGATIONFACTOR_N4,
	PDSCH_CONFIG_PDSCH_AGGREGATIONFACTOR_N8,
	PDSCH_CONFIG_PDSCH_AGGREGATIONFACTOR_max = 0x7FFFFFFF
}PDSCH_Config_pdsch_AggregationFactor_e;


typedef struct {
	uint32                                                             length;
	RateMatchPattern_t                                                 elm[maxNrofRateMatchPatterns];
}PDSCH_Config_rateMatchPatternToAddModList_t;


typedef struct {
	uint32                                                             length;
	RateMatchPatternId_t                                               elm[maxNrofRateMatchPatterns];
}PDSCH_Config_rateMatchPatternToReleaseList_t;


typedef enum {
	PDSCH_CONFIG_RBG_SIZE_CONFIG1,
	PDSCH_CONFIG_RBG_SIZE_CONFIG2,
	PDSCH_CONFIG_RBG_SIZE_max = 0x7FFFFFFF
}PDSCH_Config_rbg_Size_e;


typedef enum {
	PDSCH_CONFIG_MCS_TABLE_QAM256,
	PDSCH_CONFIG_MCS_TABLE_SPARE1,
	PDSCH_CONFIG_MCS_TABLE_max = 0x7FFFFFFF
}PDSCH_Config_mcs_Table_e;


typedef enum {
	PDSCH_CONFIG_MAXNROFCODEWORDSSCHEDULEDBYDCI_N1,
	PDSCH_CONFIG_MAXNROFCODEWORDSSCHEDULEDBYDCI_N2,
	PDSCH_CONFIG_MAXNROFCODEWORDSSCHEDULEDBYDCI_max = 0x7FFFFFFF
}PDSCH_Config_maxNrofCodeWordsScheduledByDCI_e;


typedef enum {
	PDSCH_CONFIG_BUNDLESIZE_N4,
	PDSCH_CONFIG_BUNDLESIZE_WIDEBAND,
	PDSCH_CONFIG_BUNDLESIZE_max = 0x7FFFFFFF
}PDSCH_Config_bundleSize_e;


typedef struct {
	BOOLEAN                                                            bundleSize_exist;
	PDSCH_Config_bundleSize_e                                          bundleSize;
}PDSCH_Config_staticBundling_t;


typedef enum {
	PDSCH_CONFIG_BUNDLESIZESET1_N4,
	PDSCH_CONFIG_BUNDLESIZESET1_WIDEBAND,
	PDSCH_CONFIG_BUNDLESIZESET1_N2_WIDEBAND,
	PDSCH_CONFIG_BUNDLESIZESET1_N4_WIDEBAND,
	PDSCH_CONFIG_BUNDLESIZESET1_max = 0x7FFFFFFF
}PDSCH_Config_bundleSizeSet1_e;


typedef enum {
	PDSCH_CONFIG_BUNDLESIZESET2_N4,
	PDSCH_CONFIG_BUNDLESIZESET2_WIDEBAND,
	PDSCH_CONFIG_BUNDLESIZESET2_max = 0x7FFFFFFF
}PDSCH_Config_bundleSizeSet2_e;


typedef struct {
	BOOLEAN                                                            bundleSizeSet1_exist;
	PDSCH_Config_bundleSizeSet1_e                                      bundleSizeSet1;
	BOOLEAN                                                            bundleSizeSet2_exist;
	PDSCH_Config_bundleSizeSet2_e                                      bundleSizeSet2;
}PDSCH_Config_dynamicBundling_t;


typedef enum {
	PDSCH_CONFIG_PRB_BUNDLINGTYPE_STATICBUNDLING,
	PDSCH_CONFIG_PRB_BUNDLINGTYPE_DYNAMICBUNDLING,
	PDSCH_CONFIG_PRB_BUNDLINGTYPE_max = 0x7FFFFFFF
}PDSCH_Config_prb_BundlingType_e;


/* union corresponding asn: PDSCH_Config_prb_BundlingType */
typedef union {
	PDSCH_Config_staticBundling_t                                      staticBundling;
	PDSCH_Config_dynamicBundling_t                                     dynamicBundling;
}PDSCH_Config_prb_BundlingType_u;


/* struct corresponding asn: PDSCH_Config_prb_BundlingType */
typedef struct {
	PDSCH_Config_prb_BundlingType_e                                    type;
	PDSCH_Config_prb_BundlingType_u                                    a;
}PDSCH_Config_prb_BundlingType_t;


typedef struct {
	uint32                                                             length;
	ZP_CSI_RS_Resource_t                                               elm[maxNrofZP_CSI_RS_Resources];
}PDSCH_Config_zp_CSI_RS_ResourceToAddModList_t;


typedef struct {
	uint32                                                             length;
	ZP_CSI_RS_ResourceId_t                                             elm[maxNrofZP_CSI_RS_Resources];
}PDSCH_Config_zp_CSI_RS_ResourceToReleaseList_t;


typedef struct {
	uint32                                                             length;
	ZP_CSI_RS_ResourceSet_t                                            elm[maxNrofZP_CSI_RS_ResourceSets];
}PDSCH_Config_aperiodic_ZP_CSI_RS_ResourceSetsToAddModList_t;


typedef struct {
	uint32                                                             length;
	ZP_CSI_RS_ResourceSetId_t                                          elm[maxNrofZP_CSI_RS_ResourceSets];
}PDSCH_Config_aperiodic_ZP_CSI_RS_ResourceSetsToReleaseList_t;


typedef struct {
	uint32                                                             length;
	ZP_CSI_RS_ResourceSet_t                                            elm[maxNrofZP_CSI_RS_ResourceSets];
}PDSCH_Config_sp_ZP_CSI_RS_ResourceSetsToAddModList_t;


typedef struct {
	uint32                                                             length;
	ZP_CSI_RS_ResourceSetId_t                                          elm[maxNrofZP_CSI_RS_ResourceSets];
}PDSCH_Config_sp_ZP_CSI_RS_ResourceSetsToReleaseList_t;


typedef struct {
	uint32                                                             dummy;
}PDSCH_Config_release_3_t;


typedef enum {
	PDSCH_CONFIG_P_ZP_CSI_RS_RESOURCESET_RELEASE,
	PDSCH_CONFIG_P_ZP_CSI_RS_RESOURCESET_SETUP,
	PDSCH_CONFIG_P_ZP_CSI_RS_RESOURCESET_max = 0x7FFFFFFF
}PDSCH_Config_p_ZP_CSI_RS_ResourceSet_e;


/* union corresponding asn: PDSCH_Config_p_ZP_CSI_RS_ResourceSet */
typedef union {
	PDSCH_Config_release_3_t                                           release;
	ZP_CSI_RS_ResourceSet_t                                            setup;
}PDSCH_Config_p_ZP_CSI_RS_ResourceSet_u;


/* struct corresponding asn: PDSCH_Config_p_ZP_CSI_RS_ResourceSet */
typedef struct {
	PDSCH_Config_p_ZP_CSI_RS_ResourceSet_e                             type;
	PDSCH_Config_p_ZP_CSI_RS_ResourceSet_u                             a;
}PDSCH_Config_p_ZP_CSI_RS_ResourceSet_t;


typedef struct {
	BOOLEAN                                                            dataScramblingIdentityPDSCH_exist;
	uint32                                                             dataScramblingIdentityPDSCH;
	BOOLEAN                                                            dmrs_DownlinkForPDSCH_MappingTypeA_exist;
	PDSCH_Config_dmrs_DownlinkForPDSCH_MappingTypeA_t                  dmrs_DownlinkForPDSCH_MappingTypeA;
	BOOLEAN                                                            dmrs_DownlinkForPDSCH_MappingTypeB_exist;
	PDSCH_Config_dmrs_DownlinkForPDSCH_MappingTypeB_t                  dmrs_DownlinkForPDSCH_MappingTypeB;
	BOOLEAN                                                            tci_StatesToAddModList_exist;
	PDSCH_Config_tci_StatesToAddModList_t                              tci_StatesToAddModList;
	BOOLEAN                                                            tci_StatesToReleaseList_exist;
	PDSCH_Config_tci_StatesToReleaseList_t                             tci_StatesToReleaseList;
	BOOLEAN                                                            vrb_ToPRB_Interleaver_exist;
	PDSCH_Config_vrb_ToPRB_Interleaver_e                               vrb_ToPRB_Interleaver;
	PDSCH_Config_resourceAllocation_e                                  resourceAllocation;
	BOOLEAN                                                            pdsch_TimeDomainAllocationList_exist;
	PDSCH_Config_pdsch_TimeDomainAllocationList_t                      pdsch_TimeDomainAllocationList;
	BOOLEAN                                                            pdsch_AggregationFactor_exist;
	PDSCH_Config_pdsch_AggregationFactor_e                             pdsch_AggregationFactor;
	BOOLEAN                                                            rateMatchPatternToAddModList_exist;
	PDSCH_Config_rateMatchPatternToAddModList_t                        rateMatchPatternToAddModList;
	BOOLEAN                                                            rateMatchPatternToReleaseList_exist;
	PDSCH_Config_rateMatchPatternToReleaseList_t                       rateMatchPatternToReleaseList;
	BOOLEAN                                                            rateMatchPatternGroup1_exist;
	RateMatchPatternGroup_t                                            rateMatchPatternGroup1;
	BOOLEAN                                                            rateMatchPatternGroup2_exist;
	RateMatchPatternGroup_t                                            rateMatchPatternGroup2;
	PDSCH_Config_rbg_Size_e                                            rbg_Size;
	BOOLEAN                                                            mcs_Table_exist;
	PDSCH_Config_mcs_Table_e                                           mcs_Table;
	BOOLEAN                                                            maxNrofCodeWordsScheduledByDCI_exist;
	PDSCH_Config_maxNrofCodeWordsScheduledByDCI_e                      maxNrofCodeWordsScheduledByDCI;
	PDSCH_Config_prb_BundlingType_t                                    prb_BundlingType;
	BOOLEAN                                                            zp_CSI_RS_ResourceToAddModList_exist;
	PDSCH_Config_zp_CSI_RS_ResourceToAddModList_t                      zp_CSI_RS_ResourceToAddModList;
	BOOLEAN                                                            zp_CSI_RS_ResourceToReleaseList_exist;
	PDSCH_Config_zp_CSI_RS_ResourceToReleaseList_t                     zp_CSI_RS_ResourceToReleaseList;
	BOOLEAN                                                            aperiodic_ZP_CSI_RS_ResourceSetsToAddModList_exist;
	PDSCH_Config_aperiodic_ZP_CSI_RS_ResourceSetsToAddModList_t        aperiodic_ZP_CSI_RS_ResourceSetsToAddModList;
	BOOLEAN                                                            aperiodic_ZP_CSI_RS_ResourceSetsToReleaseList_exist;
	PDSCH_Config_aperiodic_ZP_CSI_RS_ResourceSetsToReleaseList_t       aperiodic_ZP_CSI_RS_ResourceSetsToReleaseList;
	BOOLEAN                                                            sp_ZP_CSI_RS_ResourceSetsToAddModList_exist;
	PDSCH_Config_sp_ZP_CSI_RS_ResourceSetsToAddModList_t               sp_ZP_CSI_RS_ResourceSetsToAddModList;
	BOOLEAN                                                            sp_ZP_CSI_RS_ResourceSetsToReleaseList_exist;
	PDSCH_Config_sp_ZP_CSI_RS_ResourceSetsToReleaseList_t              sp_ZP_CSI_RS_ResourceSetsToReleaseList;
	BOOLEAN                                                            p_ZP_CSI_RS_ResourceSet_exist;
	PDSCH_Config_p_ZP_CSI_RS_ResourceSet_t                             p_ZP_CSI_RS_ResourceSet;
	/* Extension marker start. */
}PDSCH_Config_t;


extern void EncodePDSCH_Config(
	PDSCH_Config_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);
extern void DecodePDSCH_Config(
	PDSCH_Config_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);

#endif
