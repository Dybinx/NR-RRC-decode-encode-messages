/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * ca_bandwidth_class_nr.h - this is the header file for message: CA-BandwidthClassNR
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#ifndef _CA_BANDWIDTH_CLASS_NR_H_
#define _CA_BANDWIDTH_CLASS_NR_H_

#include "types.h"
#include "contants.h" 				
#include "handle_bits.h"


typedef enum {
	CA_BANDWIDTHCLASSNR_A,
	CA_BANDWIDTHCLASSNR_B,
	CA_BANDWIDTHCLASSNR_C,
	CA_BANDWIDTHCLASSNR_D,
	CA_BANDWIDTHCLASSNR_E,
	CA_BANDWIDTHCLASSNR_F,
	CA_BANDWIDTHCLASSNR_G,
	CA_BANDWIDTHCLASSNR_H,
	CA_BANDWIDTHCLASSNR_I,
	CA_BANDWIDTHCLASSNR_J,
	CA_BANDWIDTHCLASSNR_K,
	CA_BANDWIDTHCLASSNR_L,
	CA_BANDWIDTHCLASSNR_M,
	CA_BANDWIDTHCLASSNR_N,
	CA_BANDWIDTHCLASSNR_O,
	CA_BANDWIDTHCLASSNR_P,
	CA_BANDWIDTHCLASSNR_Q,
	/* Extension marker start. */
	CA_BANDWIDTHCLASSNR_max = 0x7FFFFFFF
}CA_BandwidthClassNR_e;


extern void EncodeCA_BandwidthClassNR(
	CA_BandwidthClassNR_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);
extern void DecodeCA_BandwidthClassNR(
	CA_BandwidthClassNR_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);

#endif
