/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * dmrs_downlink_config.h - this is the header file for message: DMRS-DownlinkConfig
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#ifndef _DMRS_DOWNLINK_CONFIG_H_
#define _DMRS_DOWNLINK_CONFIG_H_

#include "types.h"
#include "contants.h" 				
#include "handle_bits.h"
#include "ptrs_downlink_config.h"


typedef enum {
	DMRS_DOWNLINKCONFIG_DMRS_TYPE_TYPE2,
	DMRS_DOWNLINKCONFIG_DMRS_TYPE_max = 0x7FFFFFFF
}DMRS_DownlinkConfig_dmrs_Type_e;


typedef enum {
	DMRS_DOWNLINKCONFIG_DMRS_ADDITIONALPOSITION_POS0,
	DMRS_DOWNLINKCONFIG_DMRS_ADDITIONALPOSITION_POS1,
	DMRS_DOWNLINKCONFIG_DMRS_ADDITIONALPOSITION_POS3,
	DMRS_DOWNLINKCONFIG_DMRS_ADDITIONALPOSITION_max = 0x7FFFFFFF
}DMRS_DownlinkConfig_dmrs_AdditionalPosition_e;


typedef enum {
	DMRS_DOWNLINKCONFIG_MAXLENGTH_LEN2,
	DMRS_DOWNLINKCONFIG_MAXLENGTH_max = 0x7FFFFFFF
}DMRS_DownlinkConfig_maxLength_e;


typedef struct {
	uint32                                                             dummy;
}DMRS_DownlinkConfig_release_t;


typedef enum {
	DMRS_DOWNLINKCONFIG_PHASETRACKINGRS_RELEASE,
	DMRS_DOWNLINKCONFIG_PHASETRACKINGRS_SETUP,
	DMRS_DOWNLINKCONFIG_PHASETRACKINGRS_max = 0x7FFFFFFF
}DMRS_DownlinkConfig_phaseTrackingRS_e;


/* union corresponding asn: DMRS_DownlinkConfig_phaseTrackingRS */
typedef union {
	DMRS_DownlinkConfig_release_t                                      release;
	PTRS_DownlinkConfig_t                                              setup;
}DMRS_DownlinkConfig_phaseTrackingRS_u;


/* struct corresponding asn: DMRS_DownlinkConfig_phaseTrackingRS */
typedef struct {
	DMRS_DownlinkConfig_phaseTrackingRS_e                              type;
	DMRS_DownlinkConfig_phaseTrackingRS_u                              a;
}DMRS_DownlinkConfig_phaseTrackingRS_t;


typedef struct {
	BOOLEAN                                                            dmrs_Type_exist;
	DMRS_DownlinkConfig_dmrs_Type_e                                    dmrs_Type;
	BOOLEAN                                                            dmrs_AdditionalPosition_exist;
	DMRS_DownlinkConfig_dmrs_AdditionalPosition_e                      dmrs_AdditionalPosition;
	BOOLEAN                                                            maxLength_exist;
	DMRS_DownlinkConfig_maxLength_e                                    maxLength;
	BOOLEAN                                                            scramblingID0_exist;
	uint32                                                             scramblingID0;
	BOOLEAN                                                            scramblingID1_exist;
	uint32                                                             scramblingID1;
	BOOLEAN                                                            phaseTrackingRS_exist;
	DMRS_DownlinkConfig_phaseTrackingRS_t                              phaseTrackingRS;
	/* Extension marker start. */
}DMRS_DownlinkConfig_t;


extern void EncodeDMRS_DownlinkConfig(
	DMRS_DownlinkConfig_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);
extern void DecodeDMRS_DownlinkConfig(
	DMRS_DownlinkConfig_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);

#endif
