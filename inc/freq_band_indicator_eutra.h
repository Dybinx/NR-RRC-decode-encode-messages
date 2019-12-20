/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * freq_band_indicator_eutra.h - this is the header file for message: FreqBandIndicatorEUTRA
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#ifndef _FREQ_BAND_INDICATOR_EUTRA_H_
#define _FREQ_BAND_INDICATOR_EUTRA_H_

#include "types.h"
#include "contants.h" 				
#include "handle_bits.h"


typedef struct {
	uint32                                                             value;
}FreqBandIndicatorEUTRA_t;
extern void EncodeFreqBandIndicatorEUTRA(
	FreqBandIndicatorEUTRA_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);
extern void DecodeFreqBandIndicatorEUTRA(
	FreqBandIndicatorEUTRA_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);

#endif
