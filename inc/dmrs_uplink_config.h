/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * dmrs_uplink_config.h - this is the header file for message: DMRS-UplinkConfig
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#ifndef _DMRS_UPLINK_CONFIG_H_
#define _DMRS_UPLINK_CONFIG_H_

#include "types.h"
#include "contants.h" 				
#include "handle_bits.h"
#include "ptrs_uplink_config.h"


typedef enum {
	DMRS_UPLINKCONFIG_DMRS_TYPE_TYPE2,
	DMRS_UPLINKCONFIG_DMRS_TYPE_max = 0x7FFFFFFF
}DMRS_UplinkConfig_dmrs_Type_e;


typedef enum {
	DMRS_UPLINKCONFIG_DMRS_ADDITIONALPOSITION_POS0,
	DMRS_UPLINKCONFIG_DMRS_ADDITIONALPOSITION_POS1,
	DMRS_UPLINKCONFIG_DMRS_ADDITIONALPOSITION_POS3,
	DMRS_UPLINKCONFIG_DMRS_ADDITIONALPOSITION_max = 0x7FFFFFFF
}DMRS_UplinkConfig_dmrs_AdditionalPosition_e;


typedef struct {
	uint32                                                             dummy;
}DMRS_UplinkConfig_release_t;


typedef enum {
	DMRS_UPLINKCONFIG_PHASETRACKINGRS_RELEASE,
	DMRS_UPLINKCONFIG_PHASETRACKINGRS_SETUP,
	DMRS_UPLINKCONFIG_PHASETRACKINGRS_max = 0x7FFFFFFF
}DMRS_UplinkConfig_phaseTrackingRS_e;


/* union corresponding asn: DMRS_UplinkConfig_phaseTrackingRS */
typedef union {
	DMRS_UplinkConfig_release_t                                        release;
	PTRS_UplinkConfig_t                                                setup;
}DMRS_UplinkConfig_phaseTrackingRS_u;


/* struct corresponding asn: DMRS_UplinkConfig_phaseTrackingRS */
typedef struct {
	DMRS_UplinkConfig_phaseTrackingRS_e                                type;
	DMRS_UplinkConfig_phaseTrackingRS_u                                a;
}DMRS_UplinkConfig_phaseTrackingRS_t;


typedef enum {
	DMRS_UPLINKCONFIG_MAXLENGTH_LEN2,
	DMRS_UPLINKCONFIG_MAXLENGTH_max = 0x7FFFFFFF
}DMRS_UplinkConfig_maxLength_e;


typedef struct {
	BOOLEAN                                                            scramblingID0_exist;
	uint32                                                             scramblingID0;
	BOOLEAN                                                            scramblingID1_exist;
	uint32                                                             scramblingID1;
	/* Extension marker start. */
}DMRS_UplinkConfig_transformPrecodingDisabled_t;


typedef enum {
	DMRS_UPLINKCONFIG_DISABLESEQUENCEGROUPHOPPING_DISABLED,
	DMRS_UPLINKCONFIG_DISABLESEQUENCEGROUPHOPPING_max = 0x7FFFFFFF
}DMRS_UplinkConfig_disableSequenceGroupHopping_e;


typedef enum {
	DMRS_UPLINKCONFIG_SEQUENCEHOPPINGENABLED_ENABLED,
	DMRS_UPLINKCONFIG_SEQUENCEHOPPINGENABLED_max = 0x7FFFFFFF
}DMRS_UplinkConfig_sequenceHoppingEnabled_e;


typedef struct {
	BOOLEAN                                                            nPUSCH_Identity_exist;
	uint32                                                             nPUSCH_Identity;
	BOOLEAN                                                            disableSequenceGroupHopping_exist;
	DMRS_UplinkConfig_disableSequenceGroupHopping_e                    disableSequenceGroupHopping;
	BOOLEAN                                                            sequenceHoppingEnabled_exist;
	DMRS_UplinkConfig_sequenceHoppingEnabled_e                         sequenceHoppingEnabled;
	/* Extension marker start. */
}DMRS_UplinkConfig_transformPrecodingEnabled_t;


typedef struct {
	BOOLEAN                                                            dmrs_Type_exist;
	DMRS_UplinkConfig_dmrs_Type_e                                      dmrs_Type;
	BOOLEAN                                                            dmrs_AdditionalPosition_exist;
	DMRS_UplinkConfig_dmrs_AdditionalPosition_e                        dmrs_AdditionalPosition;
	BOOLEAN                                                            phaseTrackingRS_exist;
	DMRS_UplinkConfig_phaseTrackingRS_t                                phaseTrackingRS;
	BOOLEAN                                                            maxLength_exist;
	DMRS_UplinkConfig_maxLength_e                                      maxLength;
	BOOLEAN                                                            transformPrecodingDisabled_exist;
	DMRS_UplinkConfig_transformPrecodingDisabled_t                     transformPrecodingDisabled;
	BOOLEAN                                                            transformPrecodingEnabled_exist;
	DMRS_UplinkConfig_transformPrecodingEnabled_t                      transformPrecodingEnabled;
	/* Extension marker start. */
}DMRS_UplinkConfig_t;


extern void EncodeDMRS_UplinkConfig(
	DMRS_UplinkConfig_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);
extern void DecodeDMRS_UplinkConfig(
	DMRS_UplinkConfig_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);

#endif
