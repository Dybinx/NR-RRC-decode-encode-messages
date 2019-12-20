/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * ssb_mtc.h - this is the header file for message: SSB-MTC
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#ifndef _SSB_MTC_H_
#define _SSB_MTC_H_

#include "types.h"
#include "contants.h" 				
#include "handle_bits.h"


typedef enum {
	SSB_MTC_PERIODICITYANDOFFSET_SF5,
	SSB_MTC_PERIODICITYANDOFFSET_SF10,
	SSB_MTC_PERIODICITYANDOFFSET_SF20,
	SSB_MTC_PERIODICITYANDOFFSET_SF40,
	SSB_MTC_PERIODICITYANDOFFSET_SF80,
	SSB_MTC_PERIODICITYANDOFFSET_SF160,
	SSB_MTC_PERIODICITYANDOFFSET_max = 0x7FFFFFFF
}SSB_MTC_periodicityAndOffset_e;


/* union corresponding asn: SSB_MTC_periodicityAndOffset */
typedef union {
	uint32                                                             sf5;
	uint32                                                             sf10;
	uint32                                                             sf20;
	uint32                                                             sf40;
	uint32                                                             sf80;
	uint32                                                             sf160;
}SSB_MTC_periodicityAndOffset_u;


/* struct corresponding asn: SSB_MTC_periodicityAndOffset */
typedef struct {
	SSB_MTC_periodicityAndOffset_e                                     type;
	SSB_MTC_periodicityAndOffset_u                                     a;
}SSB_MTC_periodicityAndOffset_t;


typedef enum {
	SSB_MTC_DURATION_SF1,
	SSB_MTC_DURATION_SF2,
	SSB_MTC_DURATION_SF3,
	SSB_MTC_DURATION_SF4,
	SSB_MTC_DURATION_SF5,
	SSB_MTC_DURATION_max = 0x7FFFFFFF
}SSB_MTC_duration_e;


typedef struct {
	SSB_MTC_periodicityAndOffset_t                                     periodicityAndOffset;
	SSB_MTC_duration_e                                                 duration;
}SSB_MTC_t;


extern void EncodeSSB_MTC(
	SSB_MTC_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);
extern void DecodeSSB_MTC(
	SSB_MTC_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);

#endif
