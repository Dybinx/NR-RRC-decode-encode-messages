/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * configured_grant_config.h - this is the header file for message: ConfiguredGrantConfig
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#ifndef _CONFIGURED_GRANT_CONFIG_H_
#define _CONFIGURED_GRANT_CONFIG_H_

#include "types.h"
#include "contants.h" 				
#include "handle_bits.h"
#include "dmrs_uplink_config.h"
#include "cg_uci_on_pusch.h"
#include "p0_pusch_alpha_set_id.h"


typedef enum {
	CONFIGUREDGRANTCONFIG_FREQUENCYHOPPING_MODE1,
	CONFIGUREDGRANTCONFIG_FREQUENCYHOPPING_MODE2,
	CONFIGUREDGRANTCONFIG_FREQUENCYHOPPING_max = 0x7FFFFFFF
}ConfiguredGrantConfig_frequencyHopping_e;


typedef enum {
	CONFIGUREDGRANTCONFIG_MCS_TABLE_QAM256,
	CONFIGUREDGRANTCONFIG_MCS_TABLE_SPARE1,
	CONFIGUREDGRANTCONFIG_MCS_TABLE_max = 0x7FFFFFFF
}ConfiguredGrantConfig_mcs_Table_e;


typedef enum {
	CONFIGUREDGRANTCONFIG_MCS_TABLETRANSFORMPRECODER_QAM256,
	CONFIGUREDGRANTCONFIG_MCS_TABLETRANSFORMPRECODER_SPARE1,
	CONFIGUREDGRANTCONFIG_MCS_TABLETRANSFORMPRECODER_max = 0x7FFFFFFF
}ConfiguredGrantConfig_mcs_TableTransformPrecoder_e;


typedef struct {
	uint32                                                             dummy;
}ConfiguredGrantConfig_release_t;


typedef enum {
	CONFIGUREDGRANTCONFIG_UCI_ONPUSCH_RELEASE,
	CONFIGUREDGRANTCONFIG_UCI_ONPUSCH_SETUP,
	CONFIGUREDGRANTCONFIG_UCI_ONPUSCH_max = 0x7FFFFFFF
}ConfiguredGrantConfig_uci_OnPUSCH_e;


/* union corresponding asn: ConfiguredGrantConfig_uci_OnPUSCH */
typedef union {
	ConfiguredGrantConfig_release_t                                    release;
	CG_UCI_OnPUSCH_t                                                   setup;
}ConfiguredGrantConfig_uci_OnPUSCH_u;


/* struct corresponding asn: ConfiguredGrantConfig_uci_OnPUSCH */
typedef struct {
	ConfiguredGrantConfig_uci_OnPUSCH_e                                type;
	ConfiguredGrantConfig_uci_OnPUSCH_u                                a;
}ConfiguredGrantConfig_uci_OnPUSCH_t;


typedef enum {
	CONFIGUREDGRANTCONFIG_RESOURCEALLOCATION_RESOURCEALLOCATIONTYPE0,
	CONFIGUREDGRANTCONFIG_RESOURCEALLOCATION_RESOURCEALLOCATIONTYPE1,
	CONFIGUREDGRANTCONFIG_RESOURCEALLOCATION_DYNAMICSWITCH,
	CONFIGUREDGRANTCONFIG_RESOURCEALLOCATION_max = 0x7FFFFFFF
}ConfiguredGrantConfig_resourceAllocation_e;


typedef enum {
	CONFIGUREDGRANTCONFIG_RBG_SIZE_CONFIG2,
	CONFIGUREDGRANTCONFIG_RBG_SIZE_max = 0x7FFFFFFF
}ConfiguredGrantConfig_rbg_Size_e;


typedef enum {
	CONFIGUREDGRANTCONFIG_POWERCONTROLLOOPTOUSE_N0,
	CONFIGUREDGRANTCONFIG_POWERCONTROLLOOPTOUSE_N1,
	CONFIGUREDGRANTCONFIG_POWERCONTROLLOOPTOUSE_max = 0x7FFFFFFF
}ConfiguredGrantConfig_powerControlLoopToUse_e;


typedef enum {
	CONFIGUREDGRANTCONFIG_TRANSFORMPRECODER_ENABLED,
	CONFIGUREDGRANTCONFIG_TRANSFORMPRECODER_max = 0x7FFFFFFF
}ConfiguredGrantConfig_transformPrecoder_e;


typedef enum {
	CONFIGUREDGRANTCONFIG_REPK_N1,
	CONFIGUREDGRANTCONFIG_REPK_N2,
	CONFIGUREDGRANTCONFIG_REPK_N4,
	CONFIGUREDGRANTCONFIG_REPK_N8,
	CONFIGUREDGRANTCONFIG_REPK_max = 0x7FFFFFFF
}ConfiguredGrantConfig_repK_e;


typedef enum {
	CONFIGUREDGRANTCONFIG_REPK_RV_S1_0231,
	CONFIGUREDGRANTCONFIG_REPK_RV_S2_0303,
	CONFIGUREDGRANTCONFIG_REPK_RV_S3_0000,
	CONFIGUREDGRANTCONFIG_REPK_RV_max = 0x7FFFFFFF
}ConfiguredGrantConfig_repK_RV_e;


typedef enum {
	CONFIGUREDGRANTCONFIG_PERIODICITY_SYM2,
	CONFIGUREDGRANTCONFIG_PERIODICITY_SYM7,
	CONFIGUREDGRANTCONFIG_PERIODICITY_SYM1X14,
	CONFIGUREDGRANTCONFIG_PERIODICITY_SYM2X14,
	CONFIGUREDGRANTCONFIG_PERIODICITY_SYM4X14,
	CONFIGUREDGRANTCONFIG_PERIODICITY_SYM5X14,
	CONFIGUREDGRANTCONFIG_PERIODICITY_SYM8X14,
	CONFIGUREDGRANTCONFIG_PERIODICITY_SYM10X14,
	CONFIGUREDGRANTCONFIG_PERIODICITY_SYM16X14,
	CONFIGUREDGRANTCONFIG_PERIODICITY_SYM20X14,
	CONFIGUREDGRANTCONFIG_PERIODICITY_SYM32X14,
	CONFIGUREDGRANTCONFIG_PERIODICITY_SYM40X14,
	CONFIGUREDGRANTCONFIG_PERIODICITY_SYM64X14,
	CONFIGUREDGRANTCONFIG_PERIODICITY_SYM80X14,
	CONFIGUREDGRANTCONFIG_PERIODICITY_SYM128X14,
	CONFIGUREDGRANTCONFIG_PERIODICITY_SYM160X14,
	CONFIGUREDGRANTCONFIG_PERIODICITY_SYM256X14,
	CONFIGUREDGRANTCONFIG_PERIODICITY_SYM320X14,
	CONFIGUREDGRANTCONFIG_PERIODICITY_SYM512X14,
	CONFIGUREDGRANTCONFIG_PERIODICITY_SYM640X14,
	CONFIGUREDGRANTCONFIG_PERIODICITY_SYM1024X14,
	CONFIGUREDGRANTCONFIG_PERIODICITY_SYM1280X14,
	CONFIGUREDGRANTCONFIG_PERIODICITY_SYM2560X14,
	CONFIGUREDGRANTCONFIG_PERIODICITY_SYM5120X14,
	CONFIGUREDGRANTCONFIG_PERIODICITY_SYM6,
	CONFIGUREDGRANTCONFIG_PERIODICITY_SYM1X12,
	CONFIGUREDGRANTCONFIG_PERIODICITY_SYM2X12,
	CONFIGUREDGRANTCONFIG_PERIODICITY_SYM4X12,
	CONFIGUREDGRANTCONFIG_PERIODICITY_SYM5X12,
	CONFIGUREDGRANTCONFIG_PERIODICITY_SYM8X12,
	CONFIGUREDGRANTCONFIG_PERIODICITY_SYM10X12,
	CONFIGUREDGRANTCONFIG_PERIODICITY_SYM16X12,
	CONFIGUREDGRANTCONFIG_PERIODICITY_SYM20X12,
	CONFIGUREDGRANTCONFIG_PERIODICITY_SYM32X12,
	CONFIGUREDGRANTCONFIG_PERIODICITY_SYM40X12,
	CONFIGUREDGRANTCONFIG_PERIODICITY_SYM64X12,
	CONFIGUREDGRANTCONFIG_PERIODICITY_SYM80X12,
	CONFIGUREDGRANTCONFIG_PERIODICITY_SYM128X12,
	CONFIGUREDGRANTCONFIG_PERIODICITY_SYM160X12,
	CONFIGUREDGRANTCONFIG_PERIODICITY_SYM256X12,
	CONFIGUREDGRANTCONFIG_PERIODICITY_SYM320X12,
	CONFIGUREDGRANTCONFIG_PERIODICITY_SYM512X12,
	CONFIGUREDGRANTCONFIG_PERIODICITY_SYM640X12,
	CONFIGUREDGRANTCONFIG_PERIODICITY_SYM1280X12,
	CONFIGUREDGRANTCONFIG_PERIODICITY_SYM2560X12,
	CONFIGUREDGRANTCONFIG_PERIODICITY_max = 0x7FFFFFFF
}ConfiguredGrantConfig_periodicity_e;


/* struct corresponding asn: ConfiguredGrantConfig_frequencyDomainAllocation */
/* ASN: BIT STRING SIZE(18) */
typedef struct {
	uint32                                                             bits_num;
	uint8                                                              value[3];
}ConfiguredGrantConfig_frequencyDomainAllocation_t;


typedef struct {
	uint32                                                             timeDomainOffset;
	uint32                                                             timeDomainAllocation;
	ConfiguredGrantConfig_frequencyDomainAllocation_t                  frequencyDomainAllocation;
	uint32                                                             antennaPort;
	BOOLEAN                                                            dmrs_SeqInitialization_exist;
	uint32                                                             dmrs_SeqInitialization;
	uint32                                                             precodingAndNumberOfLayers;
	uint32                                                             srs_ResourceIndicator;
	uint32                                                             mcsAndTBS;
	BOOLEAN                                                            frequencyHoppingOffset_exist;
	uint32                                                             frequencyHoppingOffset;
	uint32                                                             pathlossReferenceIndex;
	/* Extension marker start. */
}ConfiguredGrantConfig_rrc_ConfiguredUplinkGrant_t;


typedef struct {
	BOOLEAN                                                            frequencyHopping_exist;
	ConfiguredGrantConfig_frequencyHopping_e                           frequencyHopping;
	DMRS_UplinkConfig_t                                                cg_DMRS_Configuration;
	BOOLEAN                                                            mcs_Table_exist;
	ConfiguredGrantConfig_mcs_Table_e                                  mcs_Table;
	BOOLEAN                                                            mcs_TableTransformPrecoder_exist;
	ConfiguredGrantConfig_mcs_TableTransformPrecoder_e                 mcs_TableTransformPrecoder;
	ConfiguredGrantConfig_uci_OnPUSCH_t                                uci_OnPUSCH;
	ConfiguredGrantConfig_resourceAllocation_e                         resourceAllocation;
	BOOLEAN                                                            rbg_Size_exist;
	ConfiguredGrantConfig_rbg_Size_e                                   rbg_Size;
	ConfiguredGrantConfig_powerControlLoopToUse_e                      powerControlLoopToUse;
	P0_PUSCH_AlphaSetId_t                                              p0_PUSCH_Alpha;
	BOOLEAN                                                            transformPrecoder_exist;
	ConfiguredGrantConfig_transformPrecoder_e                          transformPrecoder;
	uint32                                                             nrofHARQ_Processes;
	ConfiguredGrantConfig_repK_e                                       repK;
	BOOLEAN                                                            repK_RV_exist;
	ConfiguredGrantConfig_repK_RV_e                                    repK_RV;
	ConfiguredGrantConfig_periodicity_e                                periodicity;
	BOOLEAN                                                            configuredGrantTimer_exist;
	uint32                                                             configuredGrantTimer;
	BOOLEAN                                                            rrc_ConfiguredUplinkGrant_exist;
	ConfiguredGrantConfig_rrc_ConfiguredUplinkGrant_t                  rrc_ConfiguredUplinkGrant;
}ConfiguredGrantConfig_t;


extern void EncodeConfiguredGrantConfig(
	ConfiguredGrantConfig_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);
extern void DecodeConfiguredGrantConfig(
	ConfiguredGrantConfig_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);

#endif
