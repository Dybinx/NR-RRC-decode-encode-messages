/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * t_reassembly.h - this is the header file for message: T-Reassembly
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#ifndef _T_REASSEMBLY_H_
#define _T_REASSEMBLY_H_

#include "types.h"
#include "contants.h" 				
#include "handle_bits.h"


typedef enum {
	T_REASSEMBLY_MS0,
	T_REASSEMBLY_MS5,
	T_REASSEMBLY_MS10,
	T_REASSEMBLY_MS15,
	T_REASSEMBLY_MS20,
	T_REASSEMBLY_MS25,
	T_REASSEMBLY_MS30,
	T_REASSEMBLY_MS35,
	T_REASSEMBLY_MS40,
	T_REASSEMBLY_MS45,
	T_REASSEMBLY_MS50,
	T_REASSEMBLY_MS55,
	T_REASSEMBLY_MS60,
	T_REASSEMBLY_MS65,
	T_REASSEMBLY_MS70,
	T_REASSEMBLY_MS75,
	T_REASSEMBLY_MS80,
	T_REASSEMBLY_MS85,
	T_REASSEMBLY_MS90,
	T_REASSEMBLY_MS95,
	T_REASSEMBLY_MS100,
	T_REASSEMBLY_MS110,
	T_REASSEMBLY_MS120,
	T_REASSEMBLY_MS130,
	T_REASSEMBLY_MS140,
	T_REASSEMBLY_MS150,
	T_REASSEMBLY_MS160,
	T_REASSEMBLY_MS170,
	T_REASSEMBLY_MS180,
	T_REASSEMBLY_MS190,
	T_REASSEMBLY_MS200,
	T_REASSEMBLY_SPARE1,
	T_REASSEMBLY_max = 0x7FFFFFFF
}T_Reassembly_e;


extern void EncodeT_Reassembly(
	T_Reassembly_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);
extern void DecodeT_Reassembly(
	T_Reassembly_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);

#endif
