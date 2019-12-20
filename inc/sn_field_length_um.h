/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * sn_field_length_um.h - this is the header file for message: SN-FieldLengthUM
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#ifndef _SN_FIELD_LENGTH_UM_H_
#define _SN_FIELD_LENGTH_UM_H_

#include "types.h"
#include "contants.h" 				
#include "handle_bits.h"


typedef enum {
	SN_FIELDLENGTHUM_SIZE6,
	SN_FIELDLENGTHUM_SIZE12,
	SN_FIELDLENGTHUM_max = 0x7FFFFFFF
}SN_FieldLengthUM_e;


extern void EncodeSN_FieldLengthUM(
	SN_FieldLengthUM_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);
extern void DecodeSN_FieldLengthUM(
	SN_FieldLengthUM_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);

#endif
