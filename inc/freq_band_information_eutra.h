/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * freq_band_information_eutra.h - this is the header file for message: FreqBandInformationEUTRA
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#ifndef _FREQ_BAND_INFORMATION_EUTRA_H_
#define _FREQ_BAND_INFORMATION_EUTRA_H_

#include "types.h"
#include "contants.h" 				
#include "handle_bits.h"
#include "freq_band_indicator_eutra.h"
#include "ca_bandwidth_class_eutra.h"
#include "ca_bandwidth_class_eutra.h"


typedef struct {
	FreqBandIndicatorEUTRA_t                                           bandEUTRA;
	BOOLEAN                                                            ca_BandwidthClassDL_EUTRA_exist;
	CA_BandwidthClassEUTRA_e                                           ca_BandwidthClassDL_EUTRA;
	BOOLEAN                                                            ca_BandwidthClassUL_EUTRA_exist;
	CA_BandwidthClassEUTRA_e                                           ca_BandwidthClassUL_EUTRA;
}FreqBandInformationEUTRA_t;


extern void EncodeFreqBandInformationEUTRA(
	FreqBandInformationEUTRA_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);
extern void DecodeFreqBandInformationEUTRA(
	FreqBandInformationEUTRA_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);

#endif
