/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * band_parameters.h - this is the header file for message: BandParameters
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#ifndef _BAND_PARAMETERS_H_
#define _BAND_PARAMETERS_H_

#include "types.h"
#include "contants.h" 				
#include "handle_bits.h"
#include "freq_band_indicator_eutra.h"
#include "ca_bandwidth_class_eutra.h"
#include "ca_bandwidth_class_eutra.h"
#include "freq_band_indicator_nr.h"
#include "ca_bandwidth_class_nr.h"
#include "ca_bandwidth_class_nr.h"


typedef struct {
	FreqBandIndicatorEUTRA_t                                           bandEUTRA;
	BOOLEAN                                                            ca_BandwidthClassDL_EUTRA_exist;
	CA_BandwidthClassEUTRA_e                                           ca_BandwidthClassDL_EUTRA;
	BOOLEAN                                                            ca_BandwidthClassUL_EUTRA_exist;
	CA_BandwidthClassEUTRA_e                                           ca_BandwidthClassUL_EUTRA;
}BandParameters_eutra_t;


typedef struct {
	FreqBandIndicatorNR_t                                              bandNR;
	BOOLEAN                                                            ca_BandwidthClassDL_NR_exist;
	CA_BandwidthClassNR_e                                              ca_BandwidthClassDL_NR;
	BOOLEAN                                                            ca_BandwidthClassUL_NR_exist;
	CA_BandwidthClassNR_e                                              ca_BandwidthClassUL_NR;
}BandParameters_nr_t;


typedef enum {
	BANDPARAMETERS_EUTRA,
	BANDPARAMETERS_NR,
	BANDPARAMETERS_max = 0x7FFFFFFF
}BandParameters_e;


/* union corresponding asn: BandParameters */
typedef union {
	BandParameters_eutra_t                                             eutra;
	BandParameters_nr_t                                                nr;
}BandParameters_u;


/* struct corresponding asn: BandParameters */
typedef struct {
	BandParameters_e                                                   type;
	BandParameters_u                                                   a;
}BandParameters_t;


extern void EncodeBandParameters(
	BandParameters_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);
extern void DecodeBandParameters(
	BandParameters_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);

#endif
