/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * meas_gap_config.h - this is the header file for message: MeasGapConfig
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#ifndef _MEAS_GAP_CONFIG_H_
#define _MEAS_GAP_CONFIG_H_

#include "types.h"
#include "contants.h" 				
#include "handle_bits.h"
#include "gap_config.h"


typedef struct {
	uint32                                                             dummy;
}MeasGapConfig_release_t;


typedef enum {
	MEASGAPCONFIG_GAPFR2_RELEASE,
	MEASGAPCONFIG_GAPFR2_SETUP,
	MEASGAPCONFIG_GAPFR2_max = 0x7FFFFFFF
}MeasGapConfig_gapFR2_e;


/* union corresponding asn: MeasGapConfig_gapFR2 */
typedef union {
	MeasGapConfig_release_t                                            release;
	GapConfig_t                                                        setup;
}MeasGapConfig_gapFR2_u;


/* struct corresponding asn: MeasGapConfig_gapFR2 */
typedef struct {
	MeasGapConfig_gapFR2_e                                             type;
	MeasGapConfig_gapFR2_u                                             a;
}MeasGapConfig_gapFR2_t;


typedef struct {
	BOOLEAN                                                            gapFR2_exist;
	MeasGapConfig_gapFR2_t                                             gapFR2;
	/* Extension marker start. */
}MeasGapConfig_t;


extern void EncodeMeasGapConfig(
	MeasGapConfig_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);
extern void DecodeMeasGapConfig(
	MeasGapConfig_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);

#endif
