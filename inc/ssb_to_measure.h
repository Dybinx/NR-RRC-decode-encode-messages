/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * ssb_to_measure.h - this is the header file for message: SSB-ToMeasure
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#ifndef _SSB_TO_MEASURE_H_
#define _SSB_TO_MEASURE_H_

#include "types.h"
#include "contants.h" 				
#include "handle_bits.h"


/* struct corresponding asn: SSB_ToMeasure_shortBitmap */
/* ASN: BIT STRING SIZE(4) */
typedef struct {
	uint32                                                             bits_num;
	uint8                                                              value[1];
}SSB_ToMeasure_shortBitmap_t;


/* struct corresponding asn: SSB_ToMeasure_mediumBitmap */
/* ASN: BIT STRING SIZE(8) */
typedef struct {
	uint32                                                             bits_num;
	uint8                                                              value[1];
}SSB_ToMeasure_mediumBitmap_t;


/* struct corresponding asn: SSB_ToMeasure_longBitmap */
/* ASN: BIT STRING SIZE(64) */
typedef struct {
	uint32                                                             bits_num;
	uint8                                                              value[8];
}SSB_ToMeasure_longBitmap_t;


typedef enum {
	SSB_TOMEASURE_SHORTBITMAP,
	SSB_TOMEASURE_MEDIUMBITMAP,
	SSB_TOMEASURE_LONGBITMAP,
	SSB_TOMEASURE_max = 0x7FFFFFFF
}SSB_ToMeasure_e;


/* union corresponding asn: SSB_ToMeasure */
typedef union {
	SSB_ToMeasure_shortBitmap_t                                        shortBitmap;
	SSB_ToMeasure_mediumBitmap_t                                       mediumBitmap;
	SSB_ToMeasure_longBitmap_t                                         longBitmap;
}SSB_ToMeasure_u;


/* struct corresponding asn: SSB_ToMeasure */
typedef struct {
	SSB_ToMeasure_e                                                    type;
	SSB_ToMeasure_u                                                    a;
}SSB_ToMeasure_t;


extern void EncodeSSB_ToMeasure(
	SSB_ToMeasure_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);
extern void DecodeSSB_ToMeasure(
	SSB_ToMeasure_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);

#endif
