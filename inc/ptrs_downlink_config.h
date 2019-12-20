/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * ptrs_downlink_config.h - this is the header file for message: PTRS-DownlinkConfig
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#ifndef _PTRS_DOWNLINK_CONFIG_H_
#define _PTRS_DOWNLINK_CONFIG_H_

#include "types.h"
#include "contants.h" 				
#include "handle_bits.h"


typedef struct {
	uint32                                                             length;
	uint32                                                             elm[2];
}PTRS_DownlinkConfig_frequencyDensity_t;


typedef struct {
	uint32                                                             length;
	uint32                                                             elm[3];
}PTRS_DownlinkConfig_timeDensity_t;


typedef enum {
	PTRS_DOWNLINKCONFIG_RESOURCEELEMENTOFFSET_OFFSET01,
	PTRS_DOWNLINKCONFIG_RESOURCEELEMENTOFFSET_OFFSET10,
	PTRS_DOWNLINKCONFIG_RESOURCEELEMENTOFFSET_OFFSET11,
	PTRS_DOWNLINKCONFIG_RESOURCEELEMENTOFFSET_max = 0x7FFFFFFF
}PTRS_DownlinkConfig_resourceElementOffset_e;


typedef struct {
	BOOLEAN                                                            frequencyDensity_exist;
	PTRS_DownlinkConfig_frequencyDensity_t                             frequencyDensity;
	BOOLEAN                                                            timeDensity_exist;
	PTRS_DownlinkConfig_timeDensity_t                                  timeDensity;
	BOOLEAN                                                            epre_Ratio_exist;
	uint32                                                             epre_Ratio;
	BOOLEAN                                                            resourceElementOffset_exist;
	PTRS_DownlinkConfig_resourceElementOffset_e                        resourceElementOffset;
	/* Extension marker start. */
}PTRS_DownlinkConfig_t;


extern void EncodePTRS_DownlinkConfig(
	PTRS_DownlinkConfig_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);
extern void DecodePTRS_DownlinkConfig(
	PTRS_DownlinkConfig_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);

#endif
