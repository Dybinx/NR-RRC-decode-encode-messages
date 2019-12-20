/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * additional_spectrum_emission.h - this is the header file for message: AdditionalSpectrumEmission
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#ifndef _ADDITIONAL_SPECTRUM_EMISSION_H_
#define _ADDITIONAL_SPECTRUM_EMISSION_H_

#include "types.h"
#include "contants.h" 				
#include "handle_bits.h"


typedef struct {
	uint32                                                             value;
}AdditionalSpectrumEmission_t;
extern void EncodeAdditionalSpectrumEmission(
	AdditionalSpectrumEmission_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);
extern void DecodeAdditionalSpectrumEmission(
	AdditionalSpectrumEmission_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);

#endif
