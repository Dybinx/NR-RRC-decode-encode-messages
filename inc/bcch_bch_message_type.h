/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * bcch_bch_message_type.h - this is the header file for message: BCCH-BCH-MessageType
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#ifndef _BCCH_BCH_MESSAGE_TYPE_H_
#define _BCCH_BCH_MESSAGE_TYPE_H_

#include "types.h"
#include "contants.h" 				
#include "handle_bits.h"
#include "mib.h"


typedef struct {
	uint32                                                             dummy;
}BCCH_BCH_MessageType_messageClassExtension_t;


typedef enum {
	BCCH_BCH_MESSAGETYPE_MIB,
	BCCH_BCH_MESSAGETYPE_MESSAGECLASSEXTENSION,
	BCCH_BCH_MESSAGETYPE_max = 0x7FFFFFFF
}BCCH_BCH_MessageType_e;


/* union corresponding asn: BCCH_BCH_MessageType */
typedef union {
	MIB_t                                                              mib;
	BCCH_BCH_MessageType_messageClassExtension_t                       messageClassExtension;
}BCCH_BCH_MessageType_u;


/* struct corresponding asn: BCCH_BCH_MessageType */
typedef struct {
	BCCH_BCH_MessageType_e                                             type;
	BCCH_BCH_MessageType_u                                             a;
}BCCH_BCH_MessageType_t;


extern void EncodeBCCH_BCH_MessageType(
	BCCH_BCH_MessageType_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);
extern void DecodeBCCH_BCH_MessageType(
	BCCH_BCH_MessageType_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);

#endif
