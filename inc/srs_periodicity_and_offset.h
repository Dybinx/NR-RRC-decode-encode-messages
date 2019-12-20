/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * srs_periodicity_and_offset.h - this is the header file for message: SRS-PeriodicityAndOffset
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#ifndef _SRS_PERIODICITY_AND_OFFSET_H_
#define _SRS_PERIODICITY_AND_OFFSET_H_

#include "types.h"
#include "contants.h" 				
#include "handle_bits.h"


typedef struct {
	uint32                                                             dummy;
}SRS_PeriodicityAndOffset_sl1_t;


typedef enum {
	SRS_PERIODICITYANDOFFSET_SL1,
	SRS_PERIODICITYANDOFFSET_SL2,
	SRS_PERIODICITYANDOFFSET_SL4,
	SRS_PERIODICITYANDOFFSET_SL5,
	SRS_PERIODICITYANDOFFSET_SL8,
	SRS_PERIODICITYANDOFFSET_SL10,
	SRS_PERIODICITYANDOFFSET_SL16,
	SRS_PERIODICITYANDOFFSET_SL20,
	SRS_PERIODICITYANDOFFSET_SL32,
	SRS_PERIODICITYANDOFFSET_SL40,
	SRS_PERIODICITYANDOFFSET_SL64,
	SRS_PERIODICITYANDOFFSET_SL80,
	SRS_PERIODICITYANDOFFSET_SL160,
	SRS_PERIODICITYANDOFFSET_SL320,
	SRS_PERIODICITYANDOFFSET_SL640,
	SRS_PERIODICITYANDOFFSET_SL1280,
	SRS_PERIODICITYANDOFFSET_SL2560,
	SRS_PERIODICITYANDOFFSET_max = 0x7FFFFFFF
}SRS_PeriodicityAndOffset_e;


/* union corresponding asn: SRS_PeriodicityAndOffset */
typedef union {
	SRS_PeriodicityAndOffset_sl1_t                                     sl1;
	uint32                                                             sl2;
	uint32                                                             sl4;
	uint32                                                             sl5;
	uint32                                                             sl8;
	uint32                                                             sl10;
	uint32                                                             sl16;
	uint32                                                             sl20;
	uint32                                                             sl32;
	uint32                                                             sl40;
	uint32                                                             sl64;
	uint32                                                             sl80;
	uint32                                                             sl160;
	uint32                                                             sl320;
	uint32                                                             sl640;
	uint32                                                             sl1280;
	uint32                                                             sl2560;
}SRS_PeriodicityAndOffset_u;


/* struct corresponding asn: SRS_PeriodicityAndOffset */
typedef struct {
	SRS_PeriodicityAndOffset_e                                         type;
	SRS_PeriodicityAndOffset_u                                         a;
}SRS_PeriodicityAndOffset_t;


extern void EncodeSRS_PeriodicityAndOffset(
	SRS_PeriodicityAndOffset_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);
extern void DecodeSRS_PeriodicityAndOffset(
	SRS_PeriodicityAndOffset_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);

#endif
