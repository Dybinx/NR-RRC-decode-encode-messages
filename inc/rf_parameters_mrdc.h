/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * rf_parameters_mrdc.h - this is the header file for message: RF-ParametersMRDC
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#ifndef _RF_PARAMETERS_MRDC_H_
#define _RF_PARAMETERS_MRDC_H_

#include "types.h"
#include "contants.h" 				
#include "handle_bits.h"
#include "band_combination_list.h"
#include "freq_band_list.h"


typedef struct {
	BOOLEAN                                                            supportedBandCombinationList_exist;
	BandCombinationList_t                                              supportedBandCombinationList;
	BOOLEAN                                                            appliedFreqBandListFilter_exist;
	FreqBandList_t                                                     appliedFreqBandListFilter;
}RF_ParametersMRDC_t;


extern void EncodeRF_ParametersMRDC(
	RF_ParametersMRDC_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);
extern void DecodeRF_ParametersMRDC(
	RF_ParametersMRDC_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);

#endif
