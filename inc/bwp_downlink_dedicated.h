/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * bwp_downlink_dedicated.h - this is the header file for message: BWP-DownlinkDedicated
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#ifndef _BWP_DOWNLINK_DEDICATED_H_
#define _BWP_DOWNLINK_DEDICATED_H_

#include "types.h"
#include "contants.h" 				
#include "handle_bits.h"
#include "pdcch_config.h"
#include "pdsch_config.h"
#include "sps_config.h"
#include "radio_link_monitoring_config.h"


typedef struct {
	uint32                                                             dummy;
}BWP_DownlinkDedicated_release_t;


typedef enum {
	BWP_DOWNLINKDEDICATED_PDCCH_CONFIG_RELEASE,
	BWP_DOWNLINKDEDICATED_PDCCH_CONFIG_SETUP,
	BWP_DOWNLINKDEDICATED_PDCCH_CONFIG_max = 0x7FFFFFFF
}BWP_DownlinkDedicated_pdcch_Config_e;


/* union corresponding asn: BWP_DownlinkDedicated_pdcch_Config */
typedef union {
	BWP_DownlinkDedicated_release_t                                    release;
	PDCCH_Config_t                                                     setup;
}BWP_DownlinkDedicated_pdcch_Config_u;


/* struct corresponding asn: BWP_DownlinkDedicated_pdcch_Config */
typedef struct {
	BWP_DownlinkDedicated_pdcch_Config_e                               type;
	BWP_DownlinkDedicated_pdcch_Config_u                               a;
}BWP_DownlinkDedicated_pdcch_Config_t;


typedef struct {
	uint32                                                             dummy;
}BWP_DownlinkDedicated_release_1_t;


typedef enum {
	BWP_DOWNLINKDEDICATED_PDSCH_CONFIG_RELEASE,
	BWP_DOWNLINKDEDICATED_PDSCH_CONFIG_SETUP,
	BWP_DOWNLINKDEDICATED_PDSCH_CONFIG_max = 0x7FFFFFFF
}BWP_DownlinkDedicated_pdsch_Config_e;


/* union corresponding asn: BWP_DownlinkDedicated_pdsch_Config */
typedef union {
	BWP_DownlinkDedicated_release_1_t                                  release;
	PDSCH_Config_t                                                     setup;
}BWP_DownlinkDedicated_pdsch_Config_u;


/* struct corresponding asn: BWP_DownlinkDedicated_pdsch_Config */
typedef struct {
	BWP_DownlinkDedicated_pdsch_Config_e                               type;
	BWP_DownlinkDedicated_pdsch_Config_u                               a;
}BWP_DownlinkDedicated_pdsch_Config_t;


typedef struct {
	uint32                                                             dummy;
}BWP_DownlinkDedicated_release_2_t;


typedef enum {
	BWP_DOWNLINKDEDICATED_SPS_CONFIG_RELEASE,
	BWP_DOWNLINKDEDICATED_SPS_CONFIG_SETUP,
	BWP_DOWNLINKDEDICATED_SPS_CONFIG_max = 0x7FFFFFFF
}BWP_DownlinkDedicated_sps_Config_e;


/* union corresponding asn: BWP_DownlinkDedicated_sps_Config */
typedef union {
	BWP_DownlinkDedicated_release_2_t                                  release;
	SPS_Config_t                                                       setup;
}BWP_DownlinkDedicated_sps_Config_u;


/* struct corresponding asn: BWP_DownlinkDedicated_sps_Config */
typedef struct {
	BWP_DownlinkDedicated_sps_Config_e                                 type;
	BWP_DownlinkDedicated_sps_Config_u                                 a;
}BWP_DownlinkDedicated_sps_Config_t;


typedef struct {
	uint32                                                             dummy;
}BWP_DownlinkDedicated_release_3_t;


typedef enum {
	BWP_DOWNLINKDEDICATED_RADIOLINKMONITORINGCONFIG_RELEASE,
	BWP_DOWNLINKDEDICATED_RADIOLINKMONITORINGCONFIG_SETUP,
	BWP_DOWNLINKDEDICATED_RADIOLINKMONITORINGCONFIG_max = 0x7FFFFFFF
}BWP_DownlinkDedicated_radioLinkMonitoringConfig_e;


/* union corresponding asn: BWP_DownlinkDedicated_radioLinkMonitoringConfig */
typedef union {
	BWP_DownlinkDedicated_release_3_t                                  release;
	RadioLinkMonitoringConfig_t                                        setup;
}BWP_DownlinkDedicated_radioLinkMonitoringConfig_u;


/* struct corresponding asn: BWP_DownlinkDedicated_radioLinkMonitoringConfig */
typedef struct {
	BWP_DownlinkDedicated_radioLinkMonitoringConfig_e                  type;
	BWP_DownlinkDedicated_radioLinkMonitoringConfig_u                  a;
}BWP_DownlinkDedicated_radioLinkMonitoringConfig_t;


typedef struct {
	BOOLEAN                                                            pdcch_Config_exist;
	BWP_DownlinkDedicated_pdcch_Config_t                               pdcch_Config;
	BOOLEAN                                                            pdsch_Config_exist;
	BWP_DownlinkDedicated_pdsch_Config_t                               pdsch_Config;
	BOOLEAN                                                            sps_Config_exist;
	BWP_DownlinkDedicated_sps_Config_t                                 sps_Config;
	BOOLEAN                                                            radioLinkMonitoringConfig_exist;
	BWP_DownlinkDedicated_radioLinkMonitoringConfig_t                  radioLinkMonitoringConfig;
	/* Extension marker start. */
}BWP_DownlinkDedicated_t;


extern void EncodeBWP_DownlinkDedicated(
	BWP_DownlinkDedicated_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);
extern void DecodeBWP_DownlinkDedicated(
	BWP_DownlinkDedicated_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);

#endif
