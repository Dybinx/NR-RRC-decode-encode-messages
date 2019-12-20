/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * radio_bearer_config.h - this is the header file for message: RadioBearerConfig
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#ifndef _RADIO_BEARER_CONFIG_H_
#define _RADIO_BEARER_CONFIG_H_

#include "types.h"
#include "contants.h" 				
#include "handle_bits.h"
#include "srb_to_add_mod_list.h"
#include "drb_to_add_mod_list.h"
#include "drb_to_release_list.h"
#include "security_config.h"


typedef enum {
	RADIOBEARERCONFIG_SRB3_TORELEASE_TRUE,
	RADIOBEARERCONFIG_SRB3_TORELEASE_max = 0x7FFFFFFF
}RadioBearerConfig_srb3_ToRelease_e;


typedef struct {
	BOOLEAN                                                            srb_ToAddModList_exist;
	SRB_ToAddModList_t                                                 srb_ToAddModList;
	BOOLEAN                                                            srb3_ToRelease_exist;
	RadioBearerConfig_srb3_ToRelease_e                                 srb3_ToRelease;
	BOOLEAN                                                            drb_ToAddModList_exist;
	DRB_ToAddModList_t                                                 drb_ToAddModList;
	BOOLEAN                                                            drb_ToReleaseList_exist;
	DRB_ToReleaseList_t                                                drb_ToReleaseList;
	BOOLEAN                                                            securityConfig_exist;
	SecurityConfig_t                                                   securityConfig;
	/* Extension marker start. */
}RadioBearerConfig_t;


extern void EncodeRadioBearerConfig(
	RadioBearerConfig_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);
extern void DecodeRadioBearerConfig(
	RadioBearerConfig_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);

#endif
