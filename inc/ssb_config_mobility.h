/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * ssb_config_mobility.h - this is the header file for message: SSB-ConfigMobility
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#ifndef _SSB_CONFIG_MOBILITY_H_
#define _SSB_CONFIG_MOBILITY_H_

#include "types.h"
#include "contants.h" 				
#include "handle_bits.h"
#include "ssb_to_measure.h"
#include "ss_rssi_measurement.h"


typedef struct {
	uint32                                                             dummy;
}SSB_ConfigMobility_release_t;


typedef enum {
	SSB_CONFIGMOBILITY_SSB_TOMEASURE_RELEASE,
	SSB_CONFIGMOBILITY_SSB_TOMEASURE_SETUP,
	SSB_CONFIGMOBILITY_SSB_TOMEASURE_max = 0x7FFFFFFF
}SSB_ConfigMobility_ssb_ToMeasure_e;


/* union corresponding asn: SSB_ConfigMobility_ssb_ToMeasure */
typedef union {
	SSB_ConfigMobility_release_t                                       release;
	SSB_ToMeasure_t                                                    setup;
}SSB_ConfigMobility_ssb_ToMeasure_u;


/* struct corresponding asn: SSB_ConfigMobility_ssb_ToMeasure */
typedef struct {
	SSB_ConfigMobility_ssb_ToMeasure_e                                 type;
	SSB_ConfigMobility_ssb_ToMeasure_u                                 a;
}SSB_ConfigMobility_ssb_ToMeasure_t;


typedef struct {
	BOOLEAN                                                            ssb_ToMeasure_exist;
	SSB_ConfigMobility_ssb_ToMeasure_t                                 ssb_ToMeasure;
	BOOLEAN                                                            useServingCellTimingForSync;
	BOOLEAN                                                            ss_RSSI_Measurement_exist;
	SS_RSSI_Measurement_t                                              ss_RSSI_Measurement;
	/* Extension marker start. */
}SSB_ConfigMobility_t;


extern void EncodeSSB_ConfigMobility(
	SSB_ConfigMobility_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);
extern void DecodeSSB_ConfigMobility(
	SSB_ConfigMobility_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);

#endif
