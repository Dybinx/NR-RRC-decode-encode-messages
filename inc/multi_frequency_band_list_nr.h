/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * multi_frequency_band_list_nr.h - this is the header file for message: MultiFrequencyBandListNR
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#ifndef _MULTI_FREQUENCY_BAND_LIST_NR_H_
#define _MULTI_FREQUENCY_BAND_LIST_NR_H_

#include "types.h"
#include "contants.h" 				
#include "handle_bits.h"
#include "freq_band_indicator_nr.h"


typedef struct {
	uint32                                                             length;
	FreqBandIndicatorNR_t                                              elm[maxNrofMultiBands];
}MultiFrequencyBandListNR_t;


extern void EncodeMultiFrequencyBandListNR(
	MultiFrequencyBandListNR_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);
extern void DecodeMultiFrequencyBandListNR(
	MultiFrequencyBandListNR_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);

#endif
