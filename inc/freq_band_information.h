/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * freq_band_information.h - this is the header file for message: FreqBandInformation
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#ifndef _FREQ_BAND_INFORMATION_H_
#define _FREQ_BAND_INFORMATION_H_

#include "types.h"
#include "contants.h" 				
#include "handle_bits.h"
#include "freq_band_information_eutra.h"
#include "freq_band_information_nr.h"


typedef enum {
	FREQBANDINFORMATION_BANDINFORMATIONEUTRA,
	FREQBANDINFORMATION_BANDINFORMATIONNR,
	FREQBANDINFORMATION_max = 0x7FFFFFFF
}FreqBandInformation_e;


/* union corresponding asn: FreqBandInformation */
typedef union {
	FreqBandInformationEUTRA_t                                         bandInformationEUTRA;
	FreqBandInformationNR_t                                            bandInformationNR;
}FreqBandInformation_u;


/* struct corresponding asn: FreqBandInformation */
typedef struct {
	FreqBandInformation_e                                              type;
	FreqBandInformation_u                                              a;
}FreqBandInformation_t;


extern void EncodeFreqBandInformation(
	FreqBandInformation_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);
extern void DecodeFreqBandInformation(
	FreqBandInformation_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);

#endif
