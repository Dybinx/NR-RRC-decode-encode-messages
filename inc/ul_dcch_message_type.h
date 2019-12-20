/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * ul_dcch_message_type.h - this is the header file for message: UL-DCCH-MessageType
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#ifndef _UL_DCCH_MESSAGE_TYPE_H_
#define _UL_DCCH_MESSAGE_TYPE_H_

#include "types.h"
#include "contants.h" 				
#include "handle_bits.h"
#include "measurement_report.h"
#include "rrc_reconfiguration_complete.h"


typedef struct {
	uint32                                                             dummy;
}UL_DCCH_MessageType_spare14_t;


typedef struct {
	uint32                                                             dummy;
}UL_DCCH_MessageType_spare13_t;


typedef struct {
	uint32                                                             dummy;
}UL_DCCH_MessageType_spare12_t;


typedef struct {
	uint32                                                             dummy;
}UL_DCCH_MessageType_spare11_t;


typedef struct {
	uint32                                                             dummy;
}UL_DCCH_MessageType_spare10_t;


typedef struct {
	uint32                                                             dummy;
}UL_DCCH_MessageType_spare9_t;


typedef struct {
	uint32                                                             dummy;
}UL_DCCH_MessageType_spare8_t;


typedef struct {
	uint32                                                             dummy;
}UL_DCCH_MessageType_spare7_t;


typedef struct {
	uint32                                                             dummy;
}UL_DCCH_MessageType_spare6_t;


typedef struct {
	uint32                                                             dummy;
}UL_DCCH_MessageType_spare5_t;


typedef struct {
	uint32                                                             dummy;
}UL_DCCH_MessageType_spare4_t;


typedef struct {
	uint32                                                             dummy;
}UL_DCCH_MessageType_spare3_t;


typedef struct {
	uint32                                                             dummy;
}UL_DCCH_MessageType_spare2_t;


typedef struct {
	uint32                                                             dummy;
}UL_DCCH_MessageType_spare1_t;


typedef enum {
	UL_DCCH_MESSAGETYPE_C1_MEASUREMENTREPORT,
	UL_DCCH_MESSAGETYPE_C1_RRCRECONFIGURATIONCOMPLETE,
	UL_DCCH_MESSAGETYPE_C1_SPARE14,
	UL_DCCH_MESSAGETYPE_C1_SPARE13,
	UL_DCCH_MESSAGETYPE_C1_SPARE12,
	UL_DCCH_MESSAGETYPE_C1_SPARE11,
	UL_DCCH_MESSAGETYPE_C1_SPARE10,
	UL_DCCH_MESSAGETYPE_C1_SPARE9,
	UL_DCCH_MESSAGETYPE_C1_SPARE8,
	UL_DCCH_MESSAGETYPE_C1_SPARE7,
	UL_DCCH_MESSAGETYPE_C1_SPARE6,
	UL_DCCH_MESSAGETYPE_C1_SPARE5,
	UL_DCCH_MESSAGETYPE_C1_SPARE4,
	UL_DCCH_MESSAGETYPE_C1_SPARE3,
	UL_DCCH_MESSAGETYPE_C1_SPARE2,
	UL_DCCH_MESSAGETYPE_C1_SPARE1,
	UL_DCCH_MESSAGETYPE_C1_max = 0x7FFFFFFF
}UL_DCCH_MessageType_c1_e;


/* union corresponding asn: UL_DCCH_MessageType_c1 */
typedef union {
	MeasurementReport_t                                                measurementReport;
	RRCReconfigurationComplete_t                                       rrcReconfigurationComplete;
	UL_DCCH_MessageType_spare14_t                                      spare14;
	UL_DCCH_MessageType_spare13_t                                      spare13;
	UL_DCCH_MessageType_spare12_t                                      spare12;
	UL_DCCH_MessageType_spare11_t                                      spare11;
	UL_DCCH_MessageType_spare10_t                                      spare10;
	UL_DCCH_MessageType_spare9_t                                       spare9;
	UL_DCCH_MessageType_spare8_t                                       spare8;
	UL_DCCH_MessageType_spare7_t                                       spare7;
	UL_DCCH_MessageType_spare6_t                                       spare6;
	UL_DCCH_MessageType_spare5_t                                       spare5;
	UL_DCCH_MessageType_spare4_t                                       spare4;
	UL_DCCH_MessageType_spare3_t                                       spare3;
	UL_DCCH_MessageType_spare2_t                                       spare2;
	UL_DCCH_MessageType_spare1_t                                       spare1;
}UL_DCCH_MessageType_c1_u;


/* struct corresponding asn: UL_DCCH_MessageType_c1 */
typedef struct {
	UL_DCCH_MessageType_c1_e                                           type;
	UL_DCCH_MessageType_c1_u                                           a;
}UL_DCCH_MessageType_c1_t;


typedef struct {
	uint32                                                             dummy;
}UL_DCCH_MessageType_messageClassExtension_t;


typedef enum {
	UL_DCCH_MESSAGETYPE_C1,
	UL_DCCH_MESSAGETYPE_MESSAGECLASSEXTENSION,
	UL_DCCH_MESSAGETYPE_max = 0x7FFFFFFF
}UL_DCCH_MessageType_e;


/* union corresponding asn: UL_DCCH_MessageType */
typedef union {
	UL_DCCH_MessageType_c1_t                                           c1;
	UL_DCCH_MessageType_messageClassExtension_t                        messageClassExtension;
}UL_DCCH_MessageType_u;


/* struct corresponding asn: UL_DCCH_MessageType */
typedef struct {
	UL_DCCH_MessageType_e                                              type;
	UL_DCCH_MessageType_u                                              a;
}UL_DCCH_MessageType_t;


extern void EncodeUL_DCCH_MessageType(
	UL_DCCH_MessageType_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);
extern void DecodeUL_DCCH_MessageType(
	UL_DCCH_MessageType_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);

#endif
