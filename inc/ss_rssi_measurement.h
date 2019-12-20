/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * ss_rssi_measurement.h - this is the header file for message: SS-RSSI-Measurement
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#ifndef _SS_RSSI_MEASUREMENT_H_
#define _SS_RSSI_MEASUREMENT_H_

#include "types.h"
#include "contants.h" 				
#include "handle_bits.h"


/* struct corresponding asn: SS_RSSI_Measurement_measurementSlots */
/* ASN: BIT STRING SIZE(1, 80) */
typedef struct {
	uint32                                                             bits_num;
	uint8                                                              value[10];
}SS_RSSI_Measurement_measurementSlots_t;


typedef struct {
	SS_RSSI_Measurement_measurementSlots_t                             measurementSlots;
	uint32                                                             endSymbol;
}SS_RSSI_Measurement_t;


extern void EncodeSS_RSSI_Measurement(
	SS_RSSI_Measurement_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);
extern void DecodeSS_RSSI_Measurement(
	SS_RSSI_Measurement_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);

#endif
