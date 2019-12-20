/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * ul_am_rlc.h - this is the header file for message: UL-AM-RLC
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#ifndef _UL_AM_RLC_H_
#define _UL_AM_RLC_H_

#include "types.h"
#include "contants.h" 				
#include "handle_bits.h"
#include "sn_field_length_am.h"
#include "t_poll_retransmit.h"
#include "poll_pdu.h"
#include "poll_byte.h"


typedef enum {
	UL_AM_RLC_MAXRETXTHRESHOLD_T1,
	UL_AM_RLC_MAXRETXTHRESHOLD_T2,
	UL_AM_RLC_MAXRETXTHRESHOLD_T3,
	UL_AM_RLC_MAXRETXTHRESHOLD_T4,
	UL_AM_RLC_MAXRETXTHRESHOLD_T6,
	UL_AM_RLC_MAXRETXTHRESHOLD_T8,
	UL_AM_RLC_MAXRETXTHRESHOLD_T16,
	UL_AM_RLC_MAXRETXTHRESHOLD_T32,
	UL_AM_RLC_MAXRETXTHRESHOLD_max = 0x7FFFFFFF
}UL_AM_RLC_maxRetxThreshold_e;


typedef struct {
	BOOLEAN                                                            sn_FieldLength_exist;
	SN_FieldLengthAM_e                                                 sn_FieldLength;
	T_PollRetransmit_e                                                 t_PollRetransmit;
	PollPDU_e                                                          pollPDU;
	PollByte_e                                                         pollByte;
	UL_AM_RLC_maxRetxThreshold_e                                       maxRetxThreshold;
}UL_AM_RLC_t;


extern void EncodeUL_AM_RLC(
	UL_AM_RLC_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);
extern void DecodeUL_AM_RLC(
	UL_AM_RLC_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);

#endif
