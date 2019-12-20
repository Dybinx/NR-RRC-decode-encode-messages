/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * q_offset_range_list.h - this is the header file for message: Q-OffsetRangeList
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#ifndef _Q_OFFSET_RANGE_LIST_H_
#define _Q_OFFSET_RANGE_LIST_H_

#include "types.h"
#include "contants.h" 				
#include "handle_bits.h"
#include "q_offset_range.h"
#include "q_offset_range.h"
#include "q_offset_range.h"
#include "q_offset_range.h"
#include "q_offset_range.h"
#include "q_offset_range.h"


typedef struct {
	BOOLEAN                                                            rsrpOffsetSSB_exist;
	Q_OffsetRange_e                                                    rsrpOffsetSSB;
	BOOLEAN                                                            rsrqOffsetSSB_exist;
	Q_OffsetRange_e                                                    rsrqOffsetSSB;
	BOOLEAN                                                            sinrOffsetSSB_exist;
	Q_OffsetRange_e                                                    sinrOffsetSSB;
	BOOLEAN                                                            rsrpOffsetCSI_RS_exist;
	Q_OffsetRange_e                                                    rsrpOffsetCSI_RS;
	BOOLEAN                                                            rsrqOffsetCSI_RS_exist;
	Q_OffsetRange_e                                                    rsrqOffsetCSI_RS;
	BOOLEAN                                                            sinrOffsetCSI_RS_exist;
	Q_OffsetRange_e                                                    sinrOffsetCSI_RS;
}Q_OffsetRangeList_t;


extern void EncodeQ_OffsetRangeList(
	Q_OffsetRangeList_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);
extern void DecodeQ_OffsetRangeList(
	Q_OffsetRangeList_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);

#endif
