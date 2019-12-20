/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * time_alignment_timer.h - this is the header file for message: TimeAlignmentTimer
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#ifndef _TIME_ALIGNMENT_TIMER_H_
#define _TIME_ALIGNMENT_TIMER_H_

#include "types.h"
#include "contants.h" 				
#include "handle_bits.h"


typedef enum {
	TIMEALIGNMENTTIMER_MS500,
	TIMEALIGNMENTTIMER_MS750,
	TIMEALIGNMENTTIMER_MS1280,
	TIMEALIGNMENTTIMER_MS1920,
	TIMEALIGNMENTTIMER_MS2560,
	TIMEALIGNMENTTIMER_MS5120,
	TIMEALIGNMENTTIMER_MS10240,
	TIMEALIGNMENTTIMER_INFINITY,
	TIMEALIGNMENTTIMER_max = 0x7FFFFFFF
}TimeAlignmentTimer_e;


extern void EncodeTimeAlignmentTimer(
	TimeAlignmentTimer_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);
extern void DecodeTimeAlignmentTimer(
	TimeAlignmentTimer_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);

#endif
