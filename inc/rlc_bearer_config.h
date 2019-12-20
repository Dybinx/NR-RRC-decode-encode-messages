/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * rlc_bearer_config.h - this is the header file for message: RLC-BearerConfig
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#ifndef _RLC_BEARER_CONFIG_H_
#define _RLC_BEARER_CONFIG_H_

#include "types.h"
#include "contants.h" 				
#include "handle_bits.h"
#include "logical_channel_identity.h"
#include "srb_identity.h"
#include "drb_identity.h"
#include "rlc_config.h"
#include "logical_channel_config.h"


typedef enum {
	RLC_BEARERCONFIG_SERVEDRADIOBEARER_SRB_IDENTITY,
	RLC_BEARERCONFIG_SERVEDRADIOBEARER_DRB_IDENTITY,
	RLC_BEARERCONFIG_SERVEDRADIOBEARER_max = 0x7FFFFFFF
}RLC_BearerConfig_servedRadioBearer_e;


/* union corresponding asn: RLC_BearerConfig_servedRadioBearer */
typedef union {
	SRB_Identity_t                                                     srb_Identity;
	DRB_Identity_t                                                     drb_Identity;
}RLC_BearerConfig_servedRadioBearer_u;


/* struct corresponding asn: RLC_BearerConfig_servedRadioBearer */
typedef struct {
	RLC_BearerConfig_servedRadioBearer_e                               type;
	RLC_BearerConfig_servedRadioBearer_u                               a;
}RLC_BearerConfig_servedRadioBearer_t;


typedef enum {
	RLC_BEARERCONFIG_REESTABLISHRLC_TRUE,
	RLC_BEARERCONFIG_REESTABLISHRLC_max = 0x7FFFFFFF
}RLC_BearerConfig_reestablishRLC_e;


typedef struct {
	LogicalChannelIdentity_t                                           logicalChannelIdentity;
	BOOLEAN                                                            servedRadioBearer_exist;
	RLC_BearerConfig_servedRadioBearer_t                               servedRadioBearer;
	BOOLEAN                                                            reestablishRLC_exist;
	RLC_BearerConfig_reestablishRLC_e                                  reestablishRLC;
	BOOLEAN                                                            rlc_Config_exist;
	RLC_Config_t                                                       rlc_Config;
	BOOLEAN                                                            mac_LogicalChannelConfig_exist;
	LogicalChannelConfig_t                                             mac_LogicalChannelConfig;
	/* Extension marker start. */
}RLC_BearerConfig_t;


extern void EncodeRLC_BearerConfig(
	RLC_BearerConfig_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);
extern void DecodeRLC_BearerConfig(
	RLC_BearerConfig_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);

#endif
