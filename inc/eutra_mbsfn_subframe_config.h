/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * eutra_mbsfn_subframe_config.h - this is the header file for message: EUTRA-MBSFN-SubframeConfig
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#ifndef _EUTRA_MBSFN_SUBFRAME_CONFIG_H_
#define _EUTRA_MBSFN_SUBFRAME_CONFIG_H_

#include "types.h"
#include "contants.h" 				
#include "handle_bits.h"


typedef enum {
	EUTRA_MBSFN_SUBFRAMECONFIG_RADIOFRAMEALLOCATIONPERIOD_N1,
	EUTRA_MBSFN_SUBFRAMECONFIG_RADIOFRAMEALLOCATIONPERIOD_N2,
	EUTRA_MBSFN_SUBFRAMECONFIG_RADIOFRAMEALLOCATIONPERIOD_N4,
	EUTRA_MBSFN_SUBFRAMECONFIG_RADIOFRAMEALLOCATIONPERIOD_N8,
	EUTRA_MBSFN_SUBFRAMECONFIG_RADIOFRAMEALLOCATIONPERIOD_N16,
	EUTRA_MBSFN_SUBFRAMECONFIG_RADIOFRAMEALLOCATIONPERIOD_N32,
	EUTRA_MBSFN_SUBFRAMECONFIG_RADIOFRAMEALLOCATIONPERIOD_max = 0x7FFFFFFF
}EUTRA_MBSFN_SubframeConfig_radioframeAllocationPeriod_e;


/* struct corresponding asn: EUTRA_MBSFN_SubframeConfig_oneFrame */
/* ASN: BIT STRING SIZE(6) */
typedef struct {
	uint32                                                             bits_num;
	uint8                                                              value[1];
}EUTRA_MBSFN_SubframeConfig_oneFrame_t;


/* struct corresponding asn: EUTRA_MBSFN_SubframeConfig_fourFrames */
/* ASN: BIT STRING SIZE(24) */
typedef struct {
	uint32                                                             bits_num;
	uint8                                                              value[3];
}EUTRA_MBSFN_SubframeConfig_fourFrames_t;


typedef enum {
	EUTRA_MBSFN_SUBFRAMECONFIG_SUBFRAMEALLOCATION_ONEFRAME,
	EUTRA_MBSFN_SUBFRAMECONFIG_SUBFRAMEALLOCATION_FOURFRAMES,
	EUTRA_MBSFN_SUBFRAMECONFIG_SUBFRAMEALLOCATION_max = 0x7FFFFFFF
}EUTRA_MBSFN_SubframeConfig_subframeAllocation_e;


/* union corresponding asn: EUTRA_MBSFN_SubframeConfig_subframeAllocation */
typedef union {
	EUTRA_MBSFN_SubframeConfig_oneFrame_t                              oneFrame;
	EUTRA_MBSFN_SubframeConfig_fourFrames_t                            fourFrames;
}EUTRA_MBSFN_SubframeConfig_subframeAllocation_u;


/* struct corresponding asn: EUTRA_MBSFN_SubframeConfig_subframeAllocation */
typedef struct {
	EUTRA_MBSFN_SubframeConfig_subframeAllocation_e                    type;
	EUTRA_MBSFN_SubframeConfig_subframeAllocation_u                    a;
}EUTRA_MBSFN_SubframeConfig_subframeAllocation_t;


/* struct corresponding asn: EUTRA_MBSFN_SubframeConfig_oneFrame_v1430 */
/* ASN: BIT STRING SIZE(2) */
typedef struct {
	uint32                                                             bits_num;
	uint8                                                              value[1];
}EUTRA_MBSFN_SubframeConfig_oneFrame_v1430_t;


/* struct corresponding asn: EUTRA_MBSFN_SubframeConfig_fourFrames_v1430 */
/* ASN: BIT STRING SIZE(8) */
typedef struct {
	uint32                                                             bits_num;
	uint8                                                              value[1];
}EUTRA_MBSFN_SubframeConfig_fourFrames_v1430_t;


typedef enum {
	EUTRA_MBSFN_SUBFRAMECONFIG_SUBFRAMEALLOCATION_V1430_ONEFRAME_V1430,
	EUTRA_MBSFN_SUBFRAMECONFIG_SUBFRAMEALLOCATION_V1430_FOURFRAMES_V1430,
	EUTRA_MBSFN_SUBFRAMECONFIG_SUBFRAMEALLOCATION_V1430_max = 0x7FFFFFFF
}EUTRA_MBSFN_SubframeConfig_subframeAllocation_v1430_e;


/* union corresponding asn: EUTRA_MBSFN_SubframeConfig_subframeAllocation_v1430 */
typedef union {
	EUTRA_MBSFN_SubframeConfig_oneFrame_v1430_t                        oneFrame_v1430;
	EUTRA_MBSFN_SubframeConfig_fourFrames_v1430_t                      fourFrames_v1430;
}EUTRA_MBSFN_SubframeConfig_subframeAllocation_v1430_u;


/* struct corresponding asn: EUTRA_MBSFN_SubframeConfig_subframeAllocation_v1430 */
typedef struct {
	EUTRA_MBSFN_SubframeConfig_subframeAllocation_v1430_e              type;
	EUTRA_MBSFN_SubframeConfig_subframeAllocation_v1430_u              a;
}EUTRA_MBSFN_SubframeConfig_subframeAllocation_v1430_t;


typedef struct {
	EUTRA_MBSFN_SubframeConfig_radioframeAllocationPeriod_e            radioframeAllocationPeriod;
	uint32                                                             radioframeAllocationOffset;
	EUTRA_MBSFN_SubframeConfig_subframeAllocation_t                    subframeAllocation;
	BOOLEAN                                                            subframeAllocation_v1430_exist;
	EUTRA_MBSFN_SubframeConfig_subframeAllocation_v1430_t              subframeAllocation_v1430;
	/* Extension marker start. */
}EUTRA_MBSFN_SubframeConfig_t;


extern void EncodeEUTRA_MBSFN_SubframeConfig(
	EUTRA_MBSFN_SubframeConfig_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);
extern void DecodeEUTRA_MBSFN_SubframeConfig(
	EUTRA_MBSFN_SubframeConfig_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);

#endif
