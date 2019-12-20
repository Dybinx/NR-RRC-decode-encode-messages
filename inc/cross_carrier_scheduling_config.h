/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * cross_carrier_scheduling_config.h - this is the header file for message: CrossCarrierSchedulingConfig
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#ifndef _CROSS_CARRIER_SCHEDULING_CONFIG_H_
#define _CROSS_CARRIER_SCHEDULING_CONFIG_H_

#include "types.h"
#include "contants.h" 				
#include "handle_bits.h"
#include "serv_cell_index.h"


typedef struct {
	BOOLEAN                                                            cif_Presence;
}CrossCarrierSchedulingConfig_own_t;


typedef struct {
	ServCellIndex_t                                                    schedulingCellId;
	uint32                                                             cif_InSchedulingCell;
}CrossCarrierSchedulingConfig_other_t;


typedef enum {
	CROSSCARRIERSCHEDULINGCONFIG_SCHEDULINGCELLINFO_OWN,
	CROSSCARRIERSCHEDULINGCONFIG_SCHEDULINGCELLINFO_OTHER,
	CROSSCARRIERSCHEDULINGCONFIG_SCHEDULINGCELLINFO_max = 0x7FFFFFFF
}CrossCarrierSchedulingConfig_schedulingCellInfo_e;


/* union corresponding asn: CrossCarrierSchedulingConfig_schedulingCellInfo */
typedef union {
	CrossCarrierSchedulingConfig_own_t                                 own;
	CrossCarrierSchedulingConfig_other_t                               other;
}CrossCarrierSchedulingConfig_schedulingCellInfo_u;


/* struct corresponding asn: CrossCarrierSchedulingConfig_schedulingCellInfo */
typedef struct {
	CrossCarrierSchedulingConfig_schedulingCellInfo_e                  type;
	CrossCarrierSchedulingConfig_schedulingCellInfo_u                  a;
}CrossCarrierSchedulingConfig_schedulingCellInfo_t;


typedef struct {
	CrossCarrierSchedulingConfig_schedulingCellInfo_t                  schedulingCellInfo;
	/* Extension marker start. */
}CrossCarrierSchedulingConfig_t;


extern void EncodeCrossCarrierSchedulingConfig(
	CrossCarrierSchedulingConfig_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);
extern void DecodeCrossCarrierSchedulingConfig(
	CrossCarrierSchedulingConfig_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);

#endif
