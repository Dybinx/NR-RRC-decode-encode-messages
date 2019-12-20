/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * meas_gap_sharing_scheme.h - this is the header file for message: MeasGapSharingScheme
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#ifndef _MEAS_GAP_SHARING_SCHEME_H_
#define _MEAS_GAP_SHARING_SCHEME_H_

#include "types.h"
#include "contants.h" 				
#include "handle_bits.h"


typedef enum {
	MEASGAPSHARINGSCHEME_SCHEME00,
	MEASGAPSHARINGSCHEME_SCHEME01,
	MEASGAPSHARINGSCHEME_SCHEME10,
	MEASGAPSHARINGSCHEME_SCHEME11,
	MEASGAPSHARINGSCHEME_max = 0x7FFFFFFF
}MeasGapSharingScheme_e;


extern void EncodeMeasGapSharingScheme(
	MeasGapSharingScheme_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);
extern void DecodeMeasGapSharingScheme(
	MeasGapSharingScheme_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);

#endif
