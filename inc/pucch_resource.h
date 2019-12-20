/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * pucch_resource.h - this is the header file for message: PUCCH-Resource
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#ifndef _PUCCH_RESOURCE_H_
#define _PUCCH_RESOURCE_H_

#include "types.h"
#include "contants.h" 				
#include "handle_bits.h"
#include "pucch_resource_id.h"
#include "prb_id.h"
#include "prb_id.h"
#include "pucch_format0.h"
#include "pucch_format1.h"
#include "pucch_format2.h"
#include "pucch_format3.h"
#include "pucch_format4.h"


typedef enum {
	PUCCH_RESOURCE_INTRASLOTFREQUENCYHOPPING_ENABLED,
	PUCCH_RESOURCE_INTRASLOTFREQUENCYHOPPING_max = 0x7FFFFFFF
}PUCCH_Resource_intraSlotFrequencyHopping_e;


typedef enum {
	PUCCH_RESOURCE_FORMAT_FORMAT0,
	PUCCH_RESOURCE_FORMAT_FORMAT1,
	PUCCH_RESOURCE_FORMAT_FORMAT2,
	PUCCH_RESOURCE_FORMAT_FORMAT3,
	PUCCH_RESOURCE_FORMAT_FORMAT4,
	PUCCH_RESOURCE_FORMAT_max = 0x7FFFFFFF
}PUCCH_Resource_format_e;


/* union corresponding asn: PUCCH_Resource_format */
typedef union {
	PUCCH_format0_t                                                    format0;
	PUCCH_format1_t                                                    format1;
	PUCCH_format2_t                                                    format2;
	PUCCH_format3_t                                                    format3;
	PUCCH_format4_t                                                    format4;
}PUCCH_Resource_format_u;


/* struct corresponding asn: PUCCH_Resource_format */
typedef struct {
	PUCCH_Resource_format_e                                            type;
	PUCCH_Resource_format_u                                            a;
}PUCCH_Resource_format_t;


typedef struct {
	PUCCH_ResourceId_t                                                 pucch_ResourceId;
	PRB_Id_t                                                           startingPRB;
	BOOLEAN                                                            intraSlotFrequencyHopping_exist;
	PUCCH_Resource_intraSlotFrequencyHopping_e                         intraSlotFrequencyHopping;
	BOOLEAN                                                            secondHopPRB_exist;
	PRB_Id_t                                                           secondHopPRB;
	PUCCH_Resource_format_t                                            format;
}PUCCH_Resource_t;


extern void EncodePUCCH_Resource(
	PUCCH_Resource_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);
extern void DecodePUCCH_Resource(
	PUCCH_Resource_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);

#endif
