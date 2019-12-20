/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * bwp_uplink_dedicated.h - this is the header file for message: BWP-UplinkDedicated
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#ifndef _BWP_UPLINK_DEDICATED_H_
#define _BWP_UPLINK_DEDICATED_H_

#include "types.h"
#include "contants.h" 				
#include "handle_bits.h"
#include "pucch_config.h"
#include "pusch_config.h"
#include "configured_grant_config.h"
#include "srs_config.h"
#include "beam_failure_recovery_config.h"


typedef struct {
	uint32                                                             dummy;
}BWP_UplinkDedicated_release_t;


typedef enum {
	BWP_UPLINKDEDICATED_PUCCH_CONFIG_RELEASE,
	BWP_UPLINKDEDICATED_PUCCH_CONFIG_SETUP,
	BWP_UPLINKDEDICATED_PUCCH_CONFIG_max = 0x7FFFFFFF
}BWP_UplinkDedicated_pucch_Config_e;


/* union corresponding asn: BWP_UplinkDedicated_pucch_Config */
typedef union {
	BWP_UplinkDedicated_release_t                                      release;
	PUCCH_Config_t                                                     setup;
}BWP_UplinkDedicated_pucch_Config_u;


/* struct corresponding asn: BWP_UplinkDedicated_pucch_Config */
typedef struct {
	BWP_UplinkDedicated_pucch_Config_e                                 type;
	BWP_UplinkDedicated_pucch_Config_u                                 a;
}BWP_UplinkDedicated_pucch_Config_t;


typedef struct {
	uint32                                                             dummy;
}BWP_UplinkDedicated_release_1_t;


typedef enum {
	BWP_UPLINKDEDICATED_PUSCH_CONFIG_RELEASE,
	BWP_UPLINKDEDICATED_PUSCH_CONFIG_SETUP,
	BWP_UPLINKDEDICATED_PUSCH_CONFIG_max = 0x7FFFFFFF
}BWP_UplinkDedicated_pusch_Config_e;


/* union corresponding asn: BWP_UplinkDedicated_pusch_Config */
typedef union {
	BWP_UplinkDedicated_release_1_t                                    release;
	PUSCH_Config_t                                                     setup;
}BWP_UplinkDedicated_pusch_Config_u;


/* struct corresponding asn: BWP_UplinkDedicated_pusch_Config */
typedef struct {
	BWP_UplinkDedicated_pusch_Config_e                                 type;
	BWP_UplinkDedicated_pusch_Config_u                                 a;
}BWP_UplinkDedicated_pusch_Config_t;


typedef struct {
	uint32                                                             dummy;
}BWP_UplinkDedicated_release_2_t;


typedef enum {
	BWP_UPLINKDEDICATED_CONFIGUREDGRANTCONFIG_RELEASE,
	BWP_UPLINKDEDICATED_CONFIGUREDGRANTCONFIG_SETUP,
	BWP_UPLINKDEDICATED_CONFIGUREDGRANTCONFIG_max = 0x7FFFFFFF
}BWP_UplinkDedicated_configuredGrantConfig_e;


/* union corresponding asn: BWP_UplinkDedicated_configuredGrantConfig */
typedef union {
	BWP_UplinkDedicated_release_2_t                                    release;
	ConfiguredGrantConfig_t                                            setup;
}BWP_UplinkDedicated_configuredGrantConfig_u;


/* struct corresponding asn: BWP_UplinkDedicated_configuredGrantConfig */
typedef struct {
	BWP_UplinkDedicated_configuredGrantConfig_e                        type;
	BWP_UplinkDedicated_configuredGrantConfig_u                        a;
}BWP_UplinkDedicated_configuredGrantConfig_t;


typedef struct {
	uint32                                                             dummy;
}BWP_UplinkDedicated_release_3_t;


typedef enum {
	BWP_UPLINKDEDICATED_SRS_CONFIG_RELEASE,
	BWP_UPLINKDEDICATED_SRS_CONFIG_SETUP,
	BWP_UPLINKDEDICATED_SRS_CONFIG_max = 0x7FFFFFFF
}BWP_UplinkDedicated_srs_Config_e;


/* union corresponding asn: BWP_UplinkDedicated_srs_Config */
typedef union {
	BWP_UplinkDedicated_release_3_t                                    release;
	SRS_Config_t                                                       setup;
}BWP_UplinkDedicated_srs_Config_u;


/* struct corresponding asn: BWP_UplinkDedicated_srs_Config */
typedef struct {
	BWP_UplinkDedicated_srs_Config_e                                   type;
	BWP_UplinkDedicated_srs_Config_u                                   a;
}BWP_UplinkDedicated_srs_Config_t;


typedef struct {
	uint32                                                             dummy;
}BWP_UplinkDedicated_release_4_t;


typedef enum {
	BWP_UPLINKDEDICATED_BEAMFAILURERECOVERYCONFIG_RELEASE,
	BWP_UPLINKDEDICATED_BEAMFAILURERECOVERYCONFIG_SETUP,
	BWP_UPLINKDEDICATED_BEAMFAILURERECOVERYCONFIG_max = 0x7FFFFFFF
}BWP_UplinkDedicated_beamFailureRecoveryConfig_e;


/* union corresponding asn: BWP_UplinkDedicated_beamFailureRecoveryConfig */
typedef union {
	BWP_UplinkDedicated_release_4_t                                    release;
	BeamFailureRecoveryConfig_t                                        setup;
}BWP_UplinkDedicated_beamFailureRecoveryConfig_u;


/* struct corresponding asn: BWP_UplinkDedicated_beamFailureRecoveryConfig */
typedef struct {
	BWP_UplinkDedicated_beamFailureRecoveryConfig_e                    type;
	BWP_UplinkDedicated_beamFailureRecoveryConfig_u                    a;
}BWP_UplinkDedicated_beamFailureRecoveryConfig_t;


typedef struct {
	BOOLEAN                                                            pucch_Config_exist;
	BWP_UplinkDedicated_pucch_Config_t                                 pucch_Config;
	BOOLEAN                                                            pusch_Config_exist;
	BWP_UplinkDedicated_pusch_Config_t                                 pusch_Config;
	BOOLEAN                                                            configuredGrantConfig_exist;
	BWP_UplinkDedicated_configuredGrantConfig_t                        configuredGrantConfig;
	BOOLEAN                                                            srs_Config_exist;
	BWP_UplinkDedicated_srs_Config_t                                   srs_Config;
	BOOLEAN                                                            beamFailureRecoveryConfig_exist;
	BWP_UplinkDedicated_beamFailureRecoveryConfig_t                    beamFailureRecoveryConfig;
	/* Extension marker start. */
}BWP_UplinkDedicated_t;


extern void EncodeBWP_UplinkDedicated(
	BWP_UplinkDedicated_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);
extern void DecodeBWP_UplinkDedicated(
	BWP_UplinkDedicated_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);

#endif
