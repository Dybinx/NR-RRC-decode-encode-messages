/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * freq_band_information_nr.h - this is the header file for message: FreqBandInformationNR
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#ifndef _FREQ_BAND_INFORMATION_NR_H_
#define _FREQ_BAND_INFORMATION_NR_H_

#include "types.h"
#include "contants.h" 				
#include "handle_bits.h"
#include "freq_band_indicator_nr.h"
#include "aggregated_bandwith.h"
#include "aggregated_bandwith.h"


typedef struct {
	FreqBandIndicatorNR_t                                              bandNR;
	BOOLEAN                                                            maxBandwidthRequestedDL_exist;
	AggregatedBandwith_e                                               maxBandwidthRequestedDL;
	BOOLEAN                                                            maxBandwidthRequestedUL_exist;
	AggregatedBandwith_e                                               maxBandwidthRequestedUL;
	BOOLEAN                                                            maxCarriersRequestedDL_exist;
	uint32                                                             maxCarriersRequestedDL;
	BOOLEAN                                                            maxCarriersRequestedUL_exist;
	uint32                                                             maxCarriersRequestedUL;
}FreqBandInformationNR_t;


extern void EncodeFreqBandInformationNR(
	FreqBandInformationNR_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);
extern void DecodeFreqBandInformationNR(
	FreqBandInformationNR_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);

#endif
