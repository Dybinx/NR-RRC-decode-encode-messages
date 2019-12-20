/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * uplink_config_common.h - this is the header file for message: UplinkConfigCommon
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#ifndef _UPLINK_CONFIG_COMMON_H_
#define _UPLINK_CONFIG_COMMON_H_

#include "types.h"
#include "contants.h" 				
#include "handle_bits.h"
#include "frequency_info_ul.h"
#include "bwp_uplink_common.h"
#include "time_alignment_timer.h"


typedef struct {
	BOOLEAN                                                            frequencyInfoUL_exist;
	FrequencyInfoUL_t                                                  frequencyInfoUL;
	BOOLEAN                                                            initialUplinkBWP_exist;
	BWP_UplinkCommon_t                                                 initialUplinkBWP;
	TimeAlignmentTimer_e                                               timeAlignmentTimerCommon;
}UplinkConfigCommon_t;


extern void EncodeUplinkConfigCommon(
	UplinkConfigCommon_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);
extern void DecodeUplinkConfigCommon(
	UplinkConfigCommon_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);

#endif
