/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * meas_gap_sharing_config.h - this is the header file for message: MeasGapSharingConfig
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#ifndef _MEAS_GAP_SHARING_CONFIG_H_
#define _MEAS_GAP_SHARING_CONFIG_H_

#include "types.h"
#include "contants.h" 				
#include "handle_bits.h"
#include "meas_gap_sharing_scheme.h"


typedef struct {
	uint32                                                             dummy;
}MeasGapSharingConfig_release_t;


typedef enum {
	MEASGAPSHARINGCONFIG_GAPSHARINGFR2_RELEASE,
	MEASGAPSHARINGCONFIG_GAPSHARINGFR2_SETUP,
	MEASGAPSHARINGCONFIG_GAPSHARINGFR2_max = 0x7FFFFFFF
}MeasGapSharingConfig_gapSharingFR2_e;


/* union corresponding asn: MeasGapSharingConfig_gapSharingFR2 */
typedef union {
	MeasGapSharingConfig_release_t                                     release;
	MeasGapSharingScheme_e                                             setup;
}MeasGapSharingConfig_gapSharingFR2_u;


/* struct corresponding asn: MeasGapSharingConfig_gapSharingFR2 */
typedef struct {
	MeasGapSharingConfig_gapSharingFR2_e                               type;
	MeasGapSharingConfig_gapSharingFR2_u                               a;
}MeasGapSharingConfig_gapSharingFR2_t;


typedef struct {
	BOOLEAN                                                            gapSharingFR2_exist;
	MeasGapSharingConfig_gapSharingFR2_t                               gapSharingFR2;
	/* Extension marker start. */
}MeasGapSharingConfig_t;


extern void EncodeMeasGapSharingConfig(
	MeasGapSharingConfig_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);
extern void DecodeMeasGapSharingConfig(
	MeasGapSharingConfig_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);

#endif
