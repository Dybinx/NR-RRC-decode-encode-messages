/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * poll_pdu.h - this is the header file for message: PollPDU
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#ifndef _POLL_PDU_H_
#define _POLL_PDU_H_

#include "types.h"
#include "contants.h" 				
#include "handle_bits.h"


typedef enum {
	POLLPDU_P4,
	POLLPDU_P8,
	POLLPDU_P16,
	POLLPDU_P32,
	POLLPDU_P64,
	POLLPDU_P128,
	POLLPDU_P256,
	POLLPDU_P512,
	POLLPDU_P1024,
	POLLPDU_P2048,
	POLLPDU_P4096,
	POLLPDU_P6144,
	POLLPDU_P8192,
	POLLPDU_P12288,
	POLLPDU_P16384,
	POLLPDU_P20480,
	POLLPDU_P24576,
	POLLPDU_P28672,
	POLLPDU_P32768,
	POLLPDU_P40960,
	POLLPDU_P49152,
	POLLPDU_P57344,
	POLLPDU_P65536,
	POLLPDU_INFINITY,
	POLLPDU_SPARE8,
	POLLPDU_SPARE7,
	POLLPDU_SPARE6,
	POLLPDU_SPARE5,
	POLLPDU_SPARE4,
	POLLPDU_SPARE3,
	POLLPDU_SPARE2,
	POLLPDU_SPARE1,
	POLLPDU_max = 0x7FFFFFFF
}PollPDU_e;


extern void EncodePollPDU(
	PollPDU_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);
extern void DecodePollPDU(
	PollPDU_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);

#endif
