/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * time_to_trigger.h - this is the header file for message: TimeToTrigger
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#ifndef _TIME_TO_TRIGGER_H_
#define _TIME_TO_TRIGGER_H_

#include "types.h"
#include "contants.h" 				
#include "handle_bits.h"


typedef enum {
	TIMETOTRIGGER_MS0,
	TIMETOTRIGGER_MS40,
	TIMETOTRIGGER_MS64,
	TIMETOTRIGGER_MS80,
	TIMETOTRIGGER_MS100,
	TIMETOTRIGGER_MS128,
	TIMETOTRIGGER_MS160,
	TIMETOTRIGGER_MS256,
	TIMETOTRIGGER_MS320,
	TIMETOTRIGGER_MS480,
	TIMETOTRIGGER_MS512,
	TIMETOTRIGGER_MS640,
	TIMETOTRIGGER_MS1024,
	TIMETOTRIGGER_MS1280,
	TIMETOTRIGGER_MS2560,
	TIMETOTRIGGER_MS5120,
	TIMETOTRIGGER_max = 0x7FFFFFFF
}TimeToTrigger_e;


extern void EncodeTimeToTrigger(
	TimeToTrigger_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);
extern void DecodeTimeToTrigger(
	TimeToTrigger_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);

#endif
