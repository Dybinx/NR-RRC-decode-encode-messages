/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * supported_bandwidth.h - this is the header file for message: SupportedBandwidth
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#ifndef _SUPPORTED_BANDWIDTH_H_
#define _SUPPORTED_BANDWIDTH_H_

#include "types.h"
#include "contants.h" 				
#include "handle_bits.h"


typedef enum {
	SUPPORTEDBANDWIDTH_FR1_MHZ5,
	SUPPORTEDBANDWIDTH_FR1_MHZ10,
	SUPPORTEDBANDWIDTH_FR1_MHZ15,
	SUPPORTEDBANDWIDTH_FR1_MHZ20,
	SUPPORTEDBANDWIDTH_FR1_MHZ25,
	SUPPORTEDBANDWIDTH_FR1_MHZ30,
	SUPPORTEDBANDWIDTH_FR1_MHZ40,
	SUPPORTEDBANDWIDTH_FR1_MHZ50,
	SUPPORTEDBANDWIDTH_FR1_MHZ60,
	SUPPORTEDBANDWIDTH_FR1_MHZ80,
	SUPPORTEDBANDWIDTH_FR1_MHZ100,
	SUPPORTEDBANDWIDTH_FR1_max = 0x7FFFFFFF
}SupportedBandwidth_fr1_e;


typedef enum {
	SUPPORTEDBANDWIDTH_FR2_MHZ50,
	SUPPORTEDBANDWIDTH_FR2_MHZ100,
	SUPPORTEDBANDWIDTH_FR2_MHZ200,
	SUPPORTEDBANDWIDTH_FR2_MHZ400,
	SUPPORTEDBANDWIDTH_FR2_max = 0x7FFFFFFF
}SupportedBandwidth_fr2_e;


typedef enum {
	SUPPORTEDBANDWIDTH_FR1,
	SUPPORTEDBANDWIDTH_FR2,
	SUPPORTEDBANDWIDTH_max = 0x7FFFFFFF
}SupportedBandwidth_e;


/* union corresponding asn: SupportedBandwidth */
typedef union {
	SupportedBandwidth_fr1_e                                           fr1;
	SupportedBandwidth_fr2_e                                           fr2;
}SupportedBandwidth_u;


/* struct corresponding asn: SupportedBandwidth */
typedef struct {
	SupportedBandwidth_e                                               type;
	SupportedBandwidth_u                                               a;
}SupportedBandwidth_t;


extern void EncodeSupportedBandwidth(
	SupportedBandwidth_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);
extern void DecodeSupportedBandwidth(
	SupportedBandwidth_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);

#endif
