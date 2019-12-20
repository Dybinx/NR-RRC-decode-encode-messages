/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * bwp_uplink_common.h - this is the header file for message: BWP-UplinkCommon
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#ifndef _BWP_UPLINK_COMMON_H_
#define _BWP_UPLINK_COMMON_H_

#include "types.h"
#include "contants.h" 				
#include "handle_bits.h"
#include "bwp.h"
#include "rach_config_common.h"
#include "pusch_config_common.h"
#include "pucch_config_common.h"


typedef struct {
	uint32                                                             dummy;
}BWP_UplinkCommon_release_t;


typedef enum {
	BWP_UPLINKCOMMON_RACH_CONFIGCOMMON_RELEASE,
	BWP_UPLINKCOMMON_RACH_CONFIGCOMMON_SETUP,
	BWP_UPLINKCOMMON_RACH_CONFIGCOMMON_max = 0x7FFFFFFF
}BWP_UplinkCommon_rach_ConfigCommon_e;


/* union corresponding asn: BWP_UplinkCommon_rach_ConfigCommon */
typedef union {
	BWP_UplinkCommon_release_t                                         release;
	RACH_ConfigCommon_t                                                setup;
}BWP_UplinkCommon_rach_ConfigCommon_u;


/* struct corresponding asn: BWP_UplinkCommon_rach_ConfigCommon */
typedef struct {
	BWP_UplinkCommon_rach_ConfigCommon_e                               type;
	BWP_UplinkCommon_rach_ConfigCommon_u                               a;
}BWP_UplinkCommon_rach_ConfigCommon_t;


typedef struct {
	uint32                                                             dummy;
}BWP_UplinkCommon_release_1_t;


typedef enum {
	BWP_UPLINKCOMMON_PUSCH_CONFIGCOMMON_RELEASE,
	BWP_UPLINKCOMMON_PUSCH_CONFIGCOMMON_SETUP,
	BWP_UPLINKCOMMON_PUSCH_CONFIGCOMMON_max = 0x7FFFFFFF
}BWP_UplinkCommon_pusch_ConfigCommon_e;


/* union corresponding asn: BWP_UplinkCommon_pusch_ConfigCommon */
typedef union {
	BWP_UplinkCommon_release_1_t                                       release;
	PUSCH_ConfigCommon_t                                               setup;
}BWP_UplinkCommon_pusch_ConfigCommon_u;


/* struct corresponding asn: BWP_UplinkCommon_pusch_ConfigCommon */
typedef struct {
	BWP_UplinkCommon_pusch_ConfigCommon_e                              type;
	BWP_UplinkCommon_pusch_ConfigCommon_u                              a;
}BWP_UplinkCommon_pusch_ConfigCommon_t;


typedef struct {
	uint32                                                             dummy;
}BWP_UplinkCommon_release_2_t;


typedef enum {
	BWP_UPLINKCOMMON_PUCCH_CONFIGCOMMON_RELEASE,
	BWP_UPLINKCOMMON_PUCCH_CONFIGCOMMON_SETUP,
	BWP_UPLINKCOMMON_PUCCH_CONFIGCOMMON_max = 0x7FFFFFFF
}BWP_UplinkCommon_pucch_ConfigCommon_e;


/* union corresponding asn: BWP_UplinkCommon_pucch_ConfigCommon */
typedef union {
	BWP_UplinkCommon_release_2_t                                       release;
	PUCCH_ConfigCommon_t                                               setup;
}BWP_UplinkCommon_pucch_ConfigCommon_u;


/* struct corresponding asn: BWP_UplinkCommon_pucch_ConfigCommon */
typedef struct {
	BWP_UplinkCommon_pucch_ConfigCommon_e                              type;
	BWP_UplinkCommon_pucch_ConfigCommon_u                              a;
}BWP_UplinkCommon_pucch_ConfigCommon_t;


typedef struct {
	BWP_t                                                              genericParameters;
	BOOLEAN                                                            rach_ConfigCommon_exist;
	BWP_UplinkCommon_rach_ConfigCommon_t                               rach_ConfigCommon;
	BOOLEAN                                                            pusch_ConfigCommon_exist;
	BWP_UplinkCommon_pusch_ConfigCommon_t                              pusch_ConfigCommon;
	BOOLEAN                                                            pucch_ConfigCommon_exist;
	BWP_UplinkCommon_pucch_ConfigCommon_t                              pucch_ConfigCommon;
	/* Extension marker start. */
}BWP_UplinkCommon_t;


extern void EncodeBWP_UplinkCommon(
	BWP_UplinkCommon_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);
extern void DecodeBWP_UplinkCommon(
	BWP_UplinkCommon_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);

#endif
