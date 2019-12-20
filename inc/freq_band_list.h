/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * freq_band_list.h - this is the header file for message: FreqBandList
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#ifndef _FREQ_BAND_LIST_H_
#define _FREQ_BAND_LIST_H_

#include "types.h"
#include "contants.h" 				
#include "handle_bits.h"
#include "freq_band_information.h"


typedef struct {
	uint32                                                             length;
	FreqBandInformation_t                                              elm[maxBandsMRDC];
}FreqBandList_t;


extern void EncodeFreqBandList(
	FreqBandList_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);
extern void DecodeFreqBandList(
	FreqBandList_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);

#endif
