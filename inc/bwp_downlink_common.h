/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * bwp_downlink_common.h - this is the header file for message: BWP-DownlinkCommon
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#ifndef _BWP_DOWNLINK_COMMON_H_
#define _BWP_DOWNLINK_COMMON_H_

#include "types.h"
#include "contants.h" 				
#include "handle_bits.h"
#include "bwp.h"
#include "pdcch_config_common.h"
#include "pdsch_config_common.h"


typedef struct {
	uint32                                                             dummy;
}BWP_DownlinkCommon_release_t;


typedef enum {
	BWP_DOWNLINKCOMMON_PDCCH_CONFIGCOMMON_RELEASE,
	BWP_DOWNLINKCOMMON_PDCCH_CONFIGCOMMON_SETUP,
	BWP_DOWNLINKCOMMON_PDCCH_CONFIGCOMMON_max = 0x7FFFFFFF
}BWP_DownlinkCommon_pdcch_ConfigCommon_e;


/* union corresponding asn: BWP_DownlinkCommon_pdcch_ConfigCommon */
typedef union {
	BWP_DownlinkCommon_release_t                                       release;
	PDCCH_ConfigCommon_t                                               setup;
}BWP_DownlinkCommon_pdcch_ConfigCommon_u;


/* struct corresponding asn: BWP_DownlinkCommon_pdcch_ConfigCommon */
typedef struct {
	BWP_DownlinkCommon_pdcch_ConfigCommon_e                            type;
	BWP_DownlinkCommon_pdcch_ConfigCommon_u                            a;
}BWP_DownlinkCommon_pdcch_ConfigCommon_t;


typedef struct {
	uint32                                                             dummy;
}BWP_DownlinkCommon_release_1_t;


typedef enum {
	BWP_DOWNLINKCOMMON_PDSCH_CONFIGCOMMON_RELEASE,
	BWP_DOWNLINKCOMMON_PDSCH_CONFIGCOMMON_SETUP,
	BWP_DOWNLINKCOMMON_PDSCH_CONFIGCOMMON_max = 0x7FFFFFFF
}BWP_DownlinkCommon_pdsch_ConfigCommon_e;


/* union corresponding asn: BWP_DownlinkCommon_pdsch_ConfigCommon */
typedef union {
	BWP_DownlinkCommon_release_1_t                                     release;
	PDSCH_ConfigCommon_t                                               setup;
}BWP_DownlinkCommon_pdsch_ConfigCommon_u;


/* struct corresponding asn: BWP_DownlinkCommon_pdsch_ConfigCommon */
typedef struct {
	BWP_DownlinkCommon_pdsch_ConfigCommon_e                            type;
	BWP_DownlinkCommon_pdsch_ConfigCommon_u                            a;
}BWP_DownlinkCommon_pdsch_ConfigCommon_t;


typedef struct {
	BWP_t                                                              genericParameters;
	BOOLEAN                                                            pdcch_ConfigCommon_exist;
	BWP_DownlinkCommon_pdcch_ConfigCommon_t                            pdcch_ConfigCommon;
	BOOLEAN                                                            pdsch_ConfigCommon_exist;
	BWP_DownlinkCommon_pdsch_ConfigCommon_t                            pdsch_ConfigCommon;
	/* Extension marker start. */
}BWP_DownlinkCommon_t;


extern void EncodeBWP_DownlinkCommon(
	BWP_DownlinkCommon_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);
extern void DecodeBWP_DownlinkCommon(
	BWP_DownlinkCommon_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);

#endif
