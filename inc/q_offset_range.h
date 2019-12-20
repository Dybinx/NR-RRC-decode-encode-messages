/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * q_offset_range.h - this is the header file for message: Q-OffsetRange
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#ifndef _Q_OFFSET_RANGE_H_
#define _Q_OFFSET_RANGE_H_

#include "types.h"
#include "contants.h" 				
#include "handle_bits.h"


typedef enum {
	Q_OFFSETRANGE_DB_24,
	Q_OFFSETRANGE_DB_22,
	Q_OFFSETRANGE_DB_20,
	Q_OFFSETRANGE_DB_18,
	Q_OFFSETRANGE_DB_16,
	Q_OFFSETRANGE_DB_14,
	Q_OFFSETRANGE_DB_12,
	Q_OFFSETRANGE_DB_10,
	Q_OFFSETRANGE_DB_8,
	Q_OFFSETRANGE_DB_6,
	Q_OFFSETRANGE_DB_5,
	Q_OFFSETRANGE_DB_4,
	Q_OFFSETRANGE_DB_3,
	Q_OFFSETRANGE_DB_2,
	Q_OFFSETRANGE_DB_1,
	Q_OFFSETRANGE_DB0,
	Q_OFFSETRANGE_DB1,
	Q_OFFSETRANGE_DB2,
	Q_OFFSETRANGE_DB3,
	Q_OFFSETRANGE_DB4,
	Q_OFFSETRANGE_DB5,
	Q_OFFSETRANGE_DB6,
	Q_OFFSETRANGE_DB8,
	Q_OFFSETRANGE_DB10,
	Q_OFFSETRANGE_DB12,
	Q_OFFSETRANGE_DB14,
	Q_OFFSETRANGE_DB16,
	Q_OFFSETRANGE_DB18,
	Q_OFFSETRANGE_DB20,
	Q_OFFSETRANGE_DB22,
	Q_OFFSETRANGE_DB24,
	Q_OFFSETRANGE_max = 0x7FFFFFFF
}Q_OffsetRange_e;


extern void EncodeQ_OffsetRange(
	Q_OffsetRange_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);
extern void DecodeQ_OffsetRange(
	Q_OffsetRange_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);

#endif
