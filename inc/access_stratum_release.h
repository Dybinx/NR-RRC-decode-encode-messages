/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * access_stratum_release.h - this is the header file for message: AccessStratumRelease
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#ifndef _ACCESS_STRATUM_RELEASE_H_
#define _ACCESS_STRATUM_RELEASE_H_

#include "types.h"
#include "contants.h" 				
#include "handle_bits.h"


typedef enum {
	ACCESSSTRATUMRELEASE_REL15,
	ACCESSSTRATUMRELEASE_SPARE7,
	ACCESSSTRATUMRELEASE_SPARE6,
	ACCESSSTRATUMRELEASE_SPARE5,
	ACCESSSTRATUMRELEASE_SPARE4,
	ACCESSSTRATUMRELEASE_SPARE3,
	ACCESSSTRATUMRELEASE_SPARE2,
	ACCESSSTRATUMRELEASE_SPARE1,
	/* Extension marker start. */
	ACCESSSTRATUMRELEASE_max = 0x7FFFFFFF
}AccessStratumRelease_e;


extern void EncodeAccessStratumRelease(
	AccessStratumRelease_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);
extern void DecodeAccessStratumRelease(
	AccessStratumRelease_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);

#endif
