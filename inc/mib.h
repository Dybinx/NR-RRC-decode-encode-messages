/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * mib.h - this is the header file for message: MIB
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#ifndef _MIB_H_
#define _MIB_H_

#include "types.h"
#include "contants.h" 				
#include "handle_bits.h"


/* struct corresponding asn: MIB_systemFrameNumber */
/* ASN: BIT STRING SIZE(6) */
typedef struct {
	uint32                                                             bits_num;
	uint8                                                              value[1];
}MIB_systemFrameNumber_t;


typedef enum {
	MIB_SUBCARRIERSPACINGCOMMON_SCS15OR60,
	MIB_SUBCARRIERSPACINGCOMMON_SCS30OR120,
	MIB_SUBCARRIERSPACINGCOMMON_max = 0x7FFFFFFF
}MIB_subCarrierSpacingCommon_e;


typedef enum {
	MIB_DMRS_TYPEA_POSITION_POS2,
	MIB_DMRS_TYPEA_POSITION_POS3,
	MIB_DMRS_TYPEA_POSITION_max = 0x7FFFFFFF
}MIB_dmrs_TypeA_Position_e;


typedef enum {
	MIB_CELLBARRED_BARRED,
	MIB_CELLBARRED_NOTBARRED,
	MIB_CELLBARRED_max = 0x7FFFFFFF
}MIB_cellBarred_e;


typedef enum {
	MIB_INTRAFREQRESELECTION_ALLOWED,
	MIB_INTRAFREQRESELECTION_NOTALLOWED,
	MIB_INTRAFREQRESELECTION_max = 0x7FFFFFFF
}MIB_intraFreqReselection_e;


/* struct corresponding asn: MIB_spare */
/* ASN: BIT STRING SIZE(1) */
typedef struct {
	uint32                                                             bits_num;
	uint8                                                              value[1];
}MIB_spare_t;


typedef struct {
	MIB_systemFrameNumber_t                                            systemFrameNumber;
	MIB_subCarrierSpacingCommon_e                                      subCarrierSpacingCommon;
	uint32                                                             ssb_SubcarrierOffset;
	MIB_dmrs_TypeA_Position_e                                          dmrs_TypeA_Position;
	uint32                                                             pdcch_ConfigSIB1;
	MIB_cellBarred_e                                                   cellBarred;
	MIB_intraFreqReselection_e                                         intraFreqReselection;
	MIB_spare_t                                                        spare;
}MIB_t;


extern void EncodeMIB(
	MIB_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);
extern void DecodeMIB(
	MIB_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);

#endif
