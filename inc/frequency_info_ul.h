/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * frequency_info_ul.h - this is the header file for message: FrequencyInfoUL
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#ifndef _FREQUENCY_INFO_UL_H_
#define _FREQUENCY_INFO_UL_H_

#include "types.h"
#include "contants.h" 				
#include "handle_bits.h"
#include "multi_frequency_band_list_nr.h"
#include "arfcn_value_nr.h"
#include "scs_specific_carrier.h"
#include "additional_spectrum_emission.h"
#include "p_max.h"


typedef struct {
	uint32                                                             length;
	SCS_SpecificCarrier_t                                              elm[maxSCSs];
}FrequencyInfoUL_scs_SpecificCarrierList_t;


typedef enum {
	FREQUENCYINFOUL_FREQUENCYSHIFT7P5KHZ_TRUE,
	FREQUENCYINFOUL_FREQUENCYSHIFT7P5KHZ_max = 0x7FFFFFFF
}FrequencyInfoUL_frequencyShift7p5khz_e;


typedef struct {
	BOOLEAN                                                            frequencyBandList_exist;
	MultiFrequencyBandListNR_t                                         frequencyBandList;
	BOOLEAN                                                            absoluteFrequencyPointA_exist;
	ARFCN_ValueNR_t                                                    absoluteFrequencyPointA;
	FrequencyInfoUL_scs_SpecificCarrierList_t                          scs_SpecificCarrierList;
	BOOLEAN                                                            additionalSpectrumEmission_exist;
	AdditionalSpectrumEmission_t                                       additionalSpectrumEmission;
	BOOLEAN                                                            p_Max_exist;
	P_Max_t                                                            p_Max;
	BOOLEAN                                                            frequencyShift7p5khz_exist;
	FrequencyInfoUL_frequencyShift7p5khz_e                             frequencyShift7p5khz;
	/* Extension marker start. */
}FrequencyInfoUL_t;


extern void EncodeFrequencyInfoUL(
	FrequencyInfoUL_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);
extern void DecodeFrequencyInfoUL(
	FrequencyInfoUL_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);

#endif
