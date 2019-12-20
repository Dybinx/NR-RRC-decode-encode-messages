/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * dl_dcch_message_type.h - this is the header file for message: DL-DCCH-MessageType
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#ifndef _DL_DCCH_MESSAGE_TYPE_H_
#define _DL_DCCH_MESSAGE_TYPE_H_

#include "types.h"
#include "contants.h" 				
#include "handle_bits.h"
#include "rrc_reconfiguration.h"


typedef struct {
	uint32                                                             dummy;
}DL_DCCH_MessageType_spare15_t;


typedef struct {
	uint32                                                             dummy;
}DL_DCCH_MessageType_spare14_t;


typedef struct {
	uint32                                                             dummy;
}DL_DCCH_MessageType_spare13_t;


typedef struct {
	uint32                                                             dummy;
}DL_DCCH_MessageType_spare12_t;


typedef struct {
	uint32                                                             dummy;
}DL_DCCH_MessageType_spare11_t;


typedef struct {
	uint32                                                             dummy;
}DL_DCCH_MessageType_spare10_t;


typedef struct {
	uint32                                                             dummy;
}DL_DCCH_MessageType_spare9_t;


typedef struct {
	uint32                                                             dummy;
}DL_DCCH_MessageType_spare8_t;


typedef struct {
	uint32                                                             dummy;
}DL_DCCH_MessageType_spare7_t;


typedef struct {
	uint32                                                             dummy;
}DL_DCCH_MessageType_spare6_t;


typedef struct {
	uint32                                                             dummy;
}DL_DCCH_MessageType_spare5_t;


typedef struct {
	uint32                                                             dummy;
}DL_DCCH_MessageType_spare4_t;


typedef struct {
	uint32                                                             dummy;
}DL_DCCH_MessageType_spare3_t;


typedef struct {
	uint32                                                             dummy;
}DL_DCCH_MessageType_spare2_t;


typedef struct {
	uint32                                                             dummy;
}DL_DCCH_MessageType_spare1_t;


typedef enum {
	DL_DCCH_MESSAGETYPE_C1_RRCRECONFIGURATION,
	DL_DCCH_MESSAGETYPE_C1_SPARE15,
	DL_DCCH_MESSAGETYPE_C1_SPARE14,
	DL_DCCH_MESSAGETYPE_C1_SPARE13,
	DL_DCCH_MESSAGETYPE_C1_SPARE12,
	DL_DCCH_MESSAGETYPE_C1_SPARE11,
	DL_DCCH_MESSAGETYPE_C1_SPARE10,
	DL_DCCH_MESSAGETYPE_C1_SPARE9,
	DL_DCCH_MESSAGETYPE_C1_SPARE8,
	DL_DCCH_MESSAGETYPE_C1_SPARE7,
	DL_DCCH_MESSAGETYPE_C1_SPARE6,
	DL_DCCH_MESSAGETYPE_C1_SPARE5,
	DL_DCCH_MESSAGETYPE_C1_SPARE4,
	DL_DCCH_MESSAGETYPE_C1_SPARE3,
	DL_DCCH_MESSAGETYPE_C1_SPARE2,
	DL_DCCH_MESSAGETYPE_C1_SPARE1,
	DL_DCCH_MESSAGETYPE_C1_max = 0x7FFFFFFF
}DL_DCCH_MessageType_c1_e;


/* union corresponding asn: DL_DCCH_MessageType_c1 */
typedef union {
	RRCReconfiguration_t                                               rrcReconfiguration;
	DL_DCCH_MessageType_spare15_t                                      spare15;
	DL_DCCH_MessageType_spare14_t                                      spare14;
	DL_DCCH_MessageType_spare13_t                                      spare13;
	DL_DCCH_MessageType_spare12_t                                      spare12;
	DL_DCCH_MessageType_spare11_t                                      spare11;
	DL_DCCH_MessageType_spare10_t                                      spare10;
	DL_DCCH_MessageType_spare9_t                                       spare9;
	DL_DCCH_MessageType_spare8_t                                       spare8;
	DL_DCCH_MessageType_spare7_t                                       spare7;
	DL_DCCH_MessageType_spare6_t                                       spare6;
	DL_DCCH_MessageType_spare5_t                                       spare5;
	DL_DCCH_MessageType_spare4_t                                       spare4;
	DL_DCCH_MessageType_spare3_t                                       spare3;
	DL_DCCH_MessageType_spare2_t                                       spare2;
	DL_DCCH_MessageType_spare1_t                                       spare1;
}DL_DCCH_MessageType_c1_u;


/* struct corresponding asn: DL_DCCH_MessageType_c1 */
typedef struct {
	DL_DCCH_MessageType_c1_e                                           type;
	DL_DCCH_MessageType_c1_u                                           a;
}DL_DCCH_MessageType_c1_t;


typedef struct {
	uint32                                                             dummy;
}DL_DCCH_MessageType_messageClassExtension_t;


typedef enum {
	DL_DCCH_MESSAGETYPE_C1,
	DL_DCCH_MESSAGETYPE_MESSAGECLASSEXTENSION,
	DL_DCCH_MESSAGETYPE_max = 0x7FFFFFFF
}DL_DCCH_MessageType_e;


/* union corresponding asn: DL_DCCH_MessageType */
typedef union {
	DL_DCCH_MessageType_c1_t                                           c1;
	DL_DCCH_MessageType_messageClassExtension_t                        messageClassExtension;
}DL_DCCH_MessageType_u;


/* struct corresponding asn: DL_DCCH_MessageType */
typedef struct {
	DL_DCCH_MessageType_e                                              type;
	DL_DCCH_MessageType_u                                              a;
}DL_DCCH_MessageType_t;


extern void EncodeDL_DCCH_MessageType(
	DL_DCCH_MessageType_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);
extern void DecodeDL_DCCH_MessageType(
	DL_DCCH_MessageType_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);

#endif
