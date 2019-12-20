/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * tdd_ul_dl_pattern.h - this is the header file for message: TDD-UL-DL-Pattern
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#ifndef _TDD_UL_DL_PATTERN_H_
#define _TDD_UL_DL_PATTERN_H_

#include "types.h"
#include "contants.h" 				
#include "handle_bits.h"


typedef enum {
	TDD_UL_DL_PATTERN_DL_UL_TRANSMISSIONPERIODICITY_MS0P5,
	TDD_UL_DL_PATTERN_DL_UL_TRANSMISSIONPERIODICITY_MS0P625,
	TDD_UL_DL_PATTERN_DL_UL_TRANSMISSIONPERIODICITY_MS1,
	TDD_UL_DL_PATTERN_DL_UL_TRANSMISSIONPERIODICITY_MS1P25,
	TDD_UL_DL_PATTERN_DL_UL_TRANSMISSIONPERIODICITY_MS2,
	TDD_UL_DL_PATTERN_DL_UL_TRANSMISSIONPERIODICITY_MS2P5,
	TDD_UL_DL_PATTERN_DL_UL_TRANSMISSIONPERIODICITY_MS5,
	TDD_UL_DL_PATTERN_DL_UL_TRANSMISSIONPERIODICITY_MS10,
	TDD_UL_DL_PATTERN_DL_UL_TRANSMISSIONPERIODICITY_max = 0x7FFFFFFF
}TDD_UL_DL_Pattern_dl_UL_TransmissionPeriodicity_e;


typedef struct {
	TDD_UL_DL_Pattern_dl_UL_TransmissionPeriodicity_e                  dl_UL_TransmissionPeriodicity;
	uint32                                                             nrofDownlinkSlots;
	uint32                                                             nrofDownlinkSymbols;
	uint32                                                             nrofUplinkSlots;
	uint32                                                             nrofUplinkSymbols;
	/* Extension marker start. */
}TDD_UL_DL_Pattern_t;


extern void EncodeTDD_UL_DL_Pattern(
	TDD_UL_DL_Pattern_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);
extern void DecodeTDD_UL_DL_Pattern(
	TDD_UL_DL_Pattern_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);

#endif
