/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * rlf_timers_and_constants.h - this is the header file for message: RLF-TimersAndConstants
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#ifndef _RLF_TIMERS_AND_CONSTANTS_H_
#define _RLF_TIMERS_AND_CONSTANTS_H_

#include "types.h"
#include "contants.h" 				
#include "handle_bits.h"


typedef enum {
	RLF_TIMERSANDCONSTANTS_T310_MS0,
	RLF_TIMERSANDCONSTANTS_T310_MS50,
	RLF_TIMERSANDCONSTANTS_T310_MS100,
	RLF_TIMERSANDCONSTANTS_T310_MS200,
	RLF_TIMERSANDCONSTANTS_T310_MS500,
	RLF_TIMERSANDCONSTANTS_T310_MS1000,
	RLF_TIMERSANDCONSTANTS_T310_MS2000,
	RLF_TIMERSANDCONSTANTS_T310_MS4000,
	RLF_TIMERSANDCONSTANTS_T310_MS6000,
	RLF_TIMERSANDCONSTANTS_T310_max = 0x7FFFFFFF
}RLF_TimersAndConstants_t310_e;


typedef enum {
	RLF_TIMERSANDCONSTANTS_N310_N1,
	RLF_TIMERSANDCONSTANTS_N310_N2,
	RLF_TIMERSANDCONSTANTS_N310_N3,
	RLF_TIMERSANDCONSTANTS_N310_N4,
	RLF_TIMERSANDCONSTANTS_N310_N6,
	RLF_TIMERSANDCONSTANTS_N310_N8,
	RLF_TIMERSANDCONSTANTS_N310_N10,
	RLF_TIMERSANDCONSTANTS_N310_N20,
	RLF_TIMERSANDCONSTANTS_N310_max = 0x7FFFFFFF
}RLF_TimersAndConstants_n310_e;


typedef enum {
	RLF_TIMERSANDCONSTANTS_N311_N1,
	RLF_TIMERSANDCONSTANTS_N311_N2,
	RLF_TIMERSANDCONSTANTS_N311_N3,
	RLF_TIMERSANDCONSTANTS_N311_N4,
	RLF_TIMERSANDCONSTANTS_N311_N5,
	RLF_TIMERSANDCONSTANTS_N311_N6,
	RLF_TIMERSANDCONSTANTS_N311_N8,
	RLF_TIMERSANDCONSTANTS_N311_N10,
	RLF_TIMERSANDCONSTANTS_N311_max = 0x7FFFFFFF
}RLF_TimersAndConstants_n311_e;


typedef struct {
	RLF_TimersAndConstants_t310_e                                      t310;
	RLF_TimersAndConstants_n310_e                                      n310;
	RLF_TimersAndConstants_n311_e                                      n311;
	/* Extension marker start. */
}RLF_TimersAndConstants_t;


extern void EncodeRLF_TimersAndConstants(
	RLF_TimersAndConstants_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);
extern void DecodeRLF_TimersAndConstants(
	RLF_TimersAndConstants_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);

#endif
