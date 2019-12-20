/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * prach_resource_dedicated_bfr.h - this is the header file for message: PRACH-ResourceDedicatedBFR
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#ifndef _PRACH_RESOURCE_DEDICATED_BFR_H_
#define _PRACH_RESOURCE_DEDICATED_BFR_H_

#include "types.h"
#include "contants.h" 				
#include "handle_bits.h"
#include "bfr_ssb_resource.h"
#include "bfr_csirs_resource.h"


typedef enum {
	PRACH_RESOURCEDEDICATEDBFR_SSB,
	PRACH_RESOURCEDEDICATEDBFR_CSI_RS,
	PRACH_RESOURCEDEDICATEDBFR_max = 0x7FFFFFFF
}PRACH_ResourceDedicatedBFR_e;


/* union corresponding asn: PRACH_ResourceDedicatedBFR */
typedef union {
	BFR_SSB_Resource_t                                                 ssb;
	BFR_CSIRS_Resource_t                                               csi_RS;
}PRACH_ResourceDedicatedBFR_u;


/* struct corresponding asn: PRACH_ResourceDedicatedBFR */
typedef struct {
	PRACH_ResourceDedicatedBFR_e                                       type;
	PRACH_ResourceDedicatedBFR_u                                       a;
}PRACH_ResourceDedicatedBFR_t;


extern void EncodePRACH_ResourceDedicatedBFR(
	PRACH_ResourceDedicatedBFR_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);
extern void DecodePRACH_ResourceDedicatedBFR(
	PRACH_ResourceDedicatedBFR_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);

#endif
