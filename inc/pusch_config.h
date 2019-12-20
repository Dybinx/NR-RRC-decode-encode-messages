/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * pusch_config.h - this is the header file for message: PUSCH-Config
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#ifndef _PUSCH_CONFIG_H_
#define _PUSCH_CONFIG_H_

#include "types.h"
#include "contants.h" 				
#include "handle_bits.h"
#include "dmrs_uplink_config.h"
#include "dmrs_uplink_config.h"
#include "pusch_power_control.h"
#include "pusch_time_domain_resource_allocation_list.h"
#include "uci_on_pusch.h"


typedef enum {
	PUSCH_CONFIG_TXCONFIG_CODEBOOK,
	PUSCH_CONFIG_TXCONFIG_NONCODEBOOK,
	PUSCH_CONFIG_TXCONFIG_max = 0x7FFFFFFF
}PUSCH_Config_txConfig_e;


typedef struct {
	uint32                                                             dummy;
}PUSCH_Config_release_t;


typedef enum {
	PUSCH_CONFIG_DMRS_UPLINKFORPUSCH_MAPPINGTYPEA_RELEASE,
	PUSCH_CONFIG_DMRS_UPLINKFORPUSCH_MAPPINGTYPEA_SETUP,
	PUSCH_CONFIG_DMRS_UPLINKFORPUSCH_MAPPINGTYPEA_max = 0x7FFFFFFF
}PUSCH_Config_dmrs_UplinkForPUSCH_MappingTypeA_e;


/* union corresponding asn: PUSCH_Config_dmrs_UplinkForPUSCH_MappingTypeA */
typedef union {
	PUSCH_Config_release_t                                             release;
	DMRS_UplinkConfig_t                                                setup;
}PUSCH_Config_dmrs_UplinkForPUSCH_MappingTypeA_u;


/* struct corresponding asn: PUSCH_Config_dmrs_UplinkForPUSCH_MappingTypeA */
typedef struct {
	PUSCH_Config_dmrs_UplinkForPUSCH_MappingTypeA_e                    type;
	PUSCH_Config_dmrs_UplinkForPUSCH_MappingTypeA_u                    a;
}PUSCH_Config_dmrs_UplinkForPUSCH_MappingTypeA_t;


typedef struct {
	uint32                                                             dummy;
}PUSCH_Config_release_1_t;


typedef enum {
	PUSCH_CONFIG_DMRS_UPLINKFORPUSCH_MAPPINGTYPEB_RELEASE,
	PUSCH_CONFIG_DMRS_UPLINKFORPUSCH_MAPPINGTYPEB_SETUP,
	PUSCH_CONFIG_DMRS_UPLINKFORPUSCH_MAPPINGTYPEB_max = 0x7FFFFFFF
}PUSCH_Config_dmrs_UplinkForPUSCH_MappingTypeB_e;


/* union corresponding asn: PUSCH_Config_dmrs_UplinkForPUSCH_MappingTypeB */
typedef union {
	PUSCH_Config_release_1_t                                           release;
	DMRS_UplinkConfig_t                                                setup;
}PUSCH_Config_dmrs_UplinkForPUSCH_MappingTypeB_u;


/* struct corresponding asn: PUSCH_Config_dmrs_UplinkForPUSCH_MappingTypeB */
typedef struct {
	PUSCH_Config_dmrs_UplinkForPUSCH_MappingTypeB_e                    type;
	PUSCH_Config_dmrs_UplinkForPUSCH_MappingTypeB_u                    a;
}PUSCH_Config_dmrs_UplinkForPUSCH_MappingTypeB_t;


typedef enum {
	PUSCH_CONFIG_FREQUENCYHOPPING_MODE1,
	PUSCH_CONFIG_FREQUENCYHOPPING_MODE2,
	PUSCH_CONFIG_FREQUENCYHOPPING_max = 0x7FFFFFFF
}PUSCH_Config_frequencyHopping_e;


typedef struct {
	uint32                                                             length;
	uint32                                                             elm[4];
}PUSCH_Config_frequencyHoppingOffsetLists_t;


typedef enum {
	PUSCH_CONFIG_RESOURCEALLOCATION_RESOURCEALLOCATIONTYPE0,
	PUSCH_CONFIG_RESOURCEALLOCATION_RESOURCEALLOCATIONTYPE1,
	PUSCH_CONFIG_RESOURCEALLOCATION_DYNAMICSWITCH,
	PUSCH_CONFIG_RESOURCEALLOCATION_max = 0x7FFFFFFF
}PUSCH_Config_resourceAllocation_e;


typedef struct {
	uint32                                                             dummy;
}PUSCH_Config_release_2_t;


typedef enum {
	PUSCH_CONFIG_PUSCH_TIMEDOMAINALLOCATIONLIST_RELEASE,
	PUSCH_CONFIG_PUSCH_TIMEDOMAINALLOCATIONLIST_SETUP,
	PUSCH_CONFIG_PUSCH_TIMEDOMAINALLOCATIONLIST_max = 0x7FFFFFFF
}PUSCH_Config_pusch_TimeDomainAllocationList_e;


/* union corresponding asn: PUSCH_Config_pusch_TimeDomainAllocationList */
typedef union {
	PUSCH_Config_release_2_t                                           release;
	PUSCH_TimeDomainResourceAllocationList_t                           setup;
}PUSCH_Config_pusch_TimeDomainAllocationList_u;


/* struct corresponding asn: PUSCH_Config_pusch_TimeDomainAllocationList */
typedef struct {
	PUSCH_Config_pusch_TimeDomainAllocationList_e                      type;
	PUSCH_Config_pusch_TimeDomainAllocationList_u                      a;
}PUSCH_Config_pusch_TimeDomainAllocationList_t;


typedef enum {
	PUSCH_CONFIG_PUSCH_AGGREGATIONFACTOR_N2,
	PUSCH_CONFIG_PUSCH_AGGREGATIONFACTOR_N4,
	PUSCH_CONFIG_PUSCH_AGGREGATIONFACTOR_N8,
	PUSCH_CONFIG_PUSCH_AGGREGATIONFACTOR_max = 0x7FFFFFFF
}PUSCH_Config_pusch_AggregationFactor_e;


typedef enum {
	PUSCH_CONFIG_MCS_TABLE_QAM256,
	PUSCH_CONFIG_MCS_TABLE_SPARE1,
	PUSCH_CONFIG_MCS_TABLE_max = 0x7FFFFFFF
}PUSCH_Config_mcs_Table_e;


typedef enum {
	PUSCH_CONFIG_MCS_TABLETRANSFORMPRECODER_QAM256,
	PUSCH_CONFIG_MCS_TABLETRANSFORMPRECODER_SPARE1,
	PUSCH_CONFIG_MCS_TABLETRANSFORMPRECODER_max = 0x7FFFFFFF
}PUSCH_Config_mcs_TableTransformPrecoder_e;


typedef enum {
	PUSCH_CONFIG_TRANSFORMPRECODER_ENABLED,
	PUSCH_CONFIG_TRANSFORMPRECODER_DISABLED,
	PUSCH_CONFIG_TRANSFORMPRECODER_max = 0x7FFFFFFF
}PUSCH_Config_transformPrecoder_e;


typedef enum {
	PUSCH_CONFIG_CODEBOOKSUBSET_FULLYANDPARTIALANDNONCOHERENT,
	PUSCH_CONFIG_CODEBOOKSUBSET_PARTIALANDNONCOHERENT,
	PUSCH_CONFIG_CODEBOOKSUBSET_NONCOHERENT,
	PUSCH_CONFIG_CODEBOOKSUBSET_max = 0x7FFFFFFF
}PUSCH_Config_codebookSubset_e;


typedef enum {
	PUSCH_CONFIG_RBG_SIZE_CONFIG2,
	PUSCH_CONFIG_RBG_SIZE_max = 0x7FFFFFFF
}PUSCH_Config_rbg_Size_e;


typedef struct {
	uint32                                                             dummy;
}PUSCH_Config_release_3_t;


typedef enum {
	PUSCH_CONFIG_UCI_ONPUSCH_RELEASE,
	PUSCH_CONFIG_UCI_ONPUSCH_SETUP,
	PUSCH_CONFIG_UCI_ONPUSCH_max = 0x7FFFFFFF
}PUSCH_Config_uci_OnPUSCH_e;


/* union corresponding asn: PUSCH_Config_uci_OnPUSCH */
typedef union {
	PUSCH_Config_release_3_t                                           release;
	UCI_OnPUSCH_t                                                      setup;
}PUSCH_Config_uci_OnPUSCH_u;


/* struct corresponding asn: PUSCH_Config_uci_OnPUSCH */
typedef struct {
	PUSCH_Config_uci_OnPUSCH_e                                         type;
	PUSCH_Config_uci_OnPUSCH_u                                         a;
}PUSCH_Config_uci_OnPUSCH_t;


typedef enum {
	PUSCH_CONFIG_TP_PI2BPSK_ENABLED,
	PUSCH_CONFIG_TP_PI2BPSK_max = 0x7FFFFFFF
}PUSCH_Config_tp_pi2BPSK_e;


typedef struct {
	BOOLEAN                                                            dataScramblingIdentityPUSCH_exist;
	uint32                                                             dataScramblingIdentityPUSCH;
	BOOLEAN                                                            txConfig_exist;
	PUSCH_Config_txConfig_e                                            txConfig;
	BOOLEAN                                                            dmrs_UplinkForPUSCH_MappingTypeA_exist;
	PUSCH_Config_dmrs_UplinkForPUSCH_MappingTypeA_t                    dmrs_UplinkForPUSCH_MappingTypeA;
	BOOLEAN                                                            dmrs_UplinkForPUSCH_MappingTypeB_exist;
	PUSCH_Config_dmrs_UplinkForPUSCH_MappingTypeB_t                    dmrs_UplinkForPUSCH_MappingTypeB;
	BOOLEAN                                                            pusch_PowerControl_exist;
	PUSCH_PowerControl_t                                               pusch_PowerControl;
	BOOLEAN                                                            frequencyHopping_exist;
	PUSCH_Config_frequencyHopping_e                                    frequencyHopping;
	BOOLEAN                                                            frequencyHoppingOffsetLists_exist;
	PUSCH_Config_frequencyHoppingOffsetLists_t                         frequencyHoppingOffsetLists;
	PUSCH_Config_resourceAllocation_e                                  resourceAllocation;
	BOOLEAN                                                            pusch_TimeDomainAllocationList_exist;
	PUSCH_Config_pusch_TimeDomainAllocationList_t                      pusch_TimeDomainAllocationList;
	BOOLEAN                                                            pusch_AggregationFactor_exist;
	PUSCH_Config_pusch_AggregationFactor_e                             pusch_AggregationFactor;
	BOOLEAN                                                            mcs_Table_exist;
	PUSCH_Config_mcs_Table_e                                           mcs_Table;
	BOOLEAN                                                            mcs_TableTransformPrecoder_exist;
	PUSCH_Config_mcs_TableTransformPrecoder_e                          mcs_TableTransformPrecoder;
	BOOLEAN                                                            transformPrecoder_exist;
	PUSCH_Config_transformPrecoder_e                                   transformPrecoder;
	BOOLEAN                                                            codebookSubset_exist;
	PUSCH_Config_codebookSubset_e                                      codebookSubset;
	BOOLEAN                                                            maxRank_exist;
	uint32                                                             maxRank;
	BOOLEAN                                                            rbg_Size_exist;
	PUSCH_Config_rbg_Size_e                                            rbg_Size;
	BOOLEAN                                                            uci_OnPUSCH_exist;
	PUSCH_Config_uci_OnPUSCH_t                                         uci_OnPUSCH;
	BOOLEAN                                                            tp_pi2BPSK_exist;
	PUSCH_Config_tp_pi2BPSK_e                                          tp_pi2BPSK;
	/* Extension marker start. */
}PUSCH_Config_t;


extern void EncodePUSCH_Config(
	PUSCH_Config_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);
extern void DecodePUSCH_Config(
	PUSCH_Config_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);

#endif
