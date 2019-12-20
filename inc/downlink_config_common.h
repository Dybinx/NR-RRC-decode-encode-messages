/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * downlink_config_common.h - this is the header file for message: DownlinkConfigCommon
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#ifndef _DOWNLINK_CONFIG_COMMON_H_
#define _DOWNLINK_CONFIG_COMMON_H_

#include "types.h"
#include "contants.h" 				
#include "handle_bits.h"
#include "frequency_info_dl.h"
#include "bwp_downlink_common.h"


typedef struct {
	BOOLEAN                                                            frequencyInfoDL_exist;
	FrequencyInfoDL_t                                                  frequencyInfoDL;
	BOOLEAN                                                            initialDownlinkBWP_exist;
	BWP_DownlinkCommon_t                                               initialDownlinkBWP;
	/* Extension marker start. */
}DownlinkConfigCommon_t;


extern void EncodeDownlinkConfigCommon(
	DownlinkConfigCommon_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);
extern void DecodeDownlinkConfigCommon(
	DownlinkConfigCommon_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);

#endif
