/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * dl_am_rlc.h - this is the header file for message: DL-AM-RLC
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#ifndef _DL_AM_RLC_H_
#define _DL_AM_RLC_H_

#include "types.h"
#include "contants.h" 				
#include "handle_bits.h"
#include "sn_field_length_am.h"
#include "t_reassembly.h"
#include "t_status_prohibit.h"


typedef struct {
	BOOLEAN                                                            sn_FieldLength_exist;
	SN_FieldLengthAM_e                                                 sn_FieldLength;
	T_Reassembly_e                                                     t_Reassembly;
	T_StatusProhibit_e                                                 t_StatusProhibit;
}DL_AM_RLC_t;


extern void EncodeDL_AM_RLC(
	DL_AM_RLC_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);
extern void DecodeDL_AM_RLC(
	DL_AM_RLC_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);

#endif
