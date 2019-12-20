/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * rf_parameters.h - this is the header file for message: RF-Parameters
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#ifndef _RF_PARAMETERS_H_
#define _RF_PARAMETERS_H_

#include "types.h"
#include "contants.h" 				
#include "handle_bits.h"
#include "band_nr.h"
#include "band_combination_list.h"
#include "freq_band_list.h"


typedef struct {
	uint32                                                             length;
	BandNR_t                                                           elm[maxBands];
}RF_Parameters_supportedBandListNR_t;


typedef struct {
	RF_Parameters_supportedBandListNR_t                                supportedBandListNR;
	BOOLEAN                                                            supportedBandCombinationList_exist;
	BandCombinationList_t                                              supportedBandCombinationList;
	BOOLEAN                                                            appliedFreqBandListFilter_exist;
	FreqBandList_t                                                     appliedFreqBandListFilter;
}RF_Parameters_t;


extern void EncodeRF_Parameters(
	RF_Parameters_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);
extern void DecodeRF_Parameters(
	RF_Parameters_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);

#endif
