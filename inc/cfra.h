/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * cfra.h - this is the header file for message: CFRA
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#ifndef _CFRA_H_
#define _CFRA_H_

#include "types.h"
#include "contants.h" 				
#include "handle_bits.h"
#include "rach_config_generic.h"
#include "cfra_ssb_resource.h"
#include "cfra_csirs_resource.h"
#include "rsrp_range.h"


typedef enum {
	CFRA_SSB_PERRACH_OCCASION_ONEEIGHTH,
	CFRA_SSB_PERRACH_OCCASION_ONEFOURTH,
	CFRA_SSB_PERRACH_OCCASION_ONEHALF,
	CFRA_SSB_PERRACH_OCCASION_ONE,
	CFRA_SSB_PERRACH_OCCASION_TWO,
	CFRA_SSB_PERRACH_OCCASION_FOUR,
	CFRA_SSB_PERRACH_OCCASION_EIGHT,
	CFRA_SSB_PERRACH_OCCASION_SIXTEEN,
	CFRA_SSB_PERRACH_OCCASION_max = 0x7FFFFFFF
}CFRA_ssb_perRACH_Occasion_e;


typedef struct {
	RACH_ConfigGeneric_t                                               rach_ConfigGeneric;
	BOOLEAN                                                            ssb_perRACH_Occasion_exist;
	CFRA_ssb_perRACH_Occasion_e                                        ssb_perRACH_Occasion;
}CFRA_occasions_t;


typedef struct {
	uint32                                                             length;
	CFRA_SSB_Resource_t                                                elm[maxRA_SSB_Resources];
}CFRA_ssb_ResourceList_t;


typedef struct {
	CFRA_ssb_ResourceList_t                                            ssb_ResourceList;
	uint32                                                             ra_ssb_OccasionMaskIndex;
}CFRA_ssb_t;


typedef struct {
	uint32                                                             length;
	CFRA_CSIRS_Resource_t                                              elm[maxRA_CSIRS_Resources];
}CFRA_csirs_ResourceList_t;


typedef struct {
	CFRA_csirs_ResourceList_t                                          csirs_ResourceList;
	RSRP_Range_t                                                       rsrp_ThresholdCSI_RS;
}CFRA_csirs_t;


typedef enum {
	CFRA_RESOURCES_SSB,
	CFRA_RESOURCES_CSIRS,
	CFRA_RESOURCES_max = 0x7FFFFFFF
}CFRA_resources_e;


/* union corresponding asn: CFRA_resources */
typedef union {
	CFRA_ssb_t                                                         ssb;
	CFRA_csirs_t                                                       csirs;
}CFRA_resources_u;


/* struct corresponding asn: CFRA_resources */
typedef struct {
	CFRA_resources_e                                                   type;
	CFRA_resources_u                                                   a;
}CFRA_resources_t;


typedef struct {
	BOOLEAN                                                            occasions_exist;
	CFRA_occasions_t                                                   occasions;
	CFRA_resources_t                                                   resources;
	/* Extension marker start. */
}CFRA_t;


extern void EncodeCFRA(
	CFRA_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);
extern void DecodeCFRA(
	CFRA_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);

#endif
