/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * ca_bandwidth_class_eutra.h - this is the header file for message: CA-BandwidthClassEUTRA
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#ifndef _CA_BANDWIDTH_CLASS_EUTRA_H_
#define _CA_BANDWIDTH_CLASS_EUTRA_H_

#include "types.h"
#include "contants.h" 				
#include "handle_bits.h"


typedef enum {
	CA_BANDWIDTHCLASSEUTRA_A,
	CA_BANDWIDTHCLASSEUTRA_B,
	CA_BANDWIDTHCLASSEUTRA_C,
	CA_BANDWIDTHCLASSEUTRA_D,
	CA_BANDWIDTHCLASSEUTRA_E,
	CA_BANDWIDTHCLASSEUTRA_F,
	/* Extension marker start. */
	CA_BANDWIDTHCLASSEUTRA_max = 0x7FFFFFFF
}CA_BandwidthClassEUTRA_e;


extern void EncodeCA_BandwidthClassEUTRA(
	CA_BandwidthClassEUTRA_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);
extern void DecodeCA_BandwidthClassEUTRA(
	CA_BandwidthClassEUTRA_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);

#endif
