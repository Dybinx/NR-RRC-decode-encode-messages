/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * pdcch_serving_cell_config.h - this is the header file for message: PDCCH-ServingCellConfig
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#ifndef _PDCCH_SERVING_CELL_CONFIG_H_
#define _PDCCH_SERVING_CELL_CONFIG_H_

#include "types.h"
#include "contants.h" 				
#include "handle_bits.h"
#include "slot_format_indicator.h"


typedef struct {
	uint32                                                             dummy;
}PDCCH_ServingCellConfig_release_t;


typedef enum {
	PDCCH_SERVINGCELLCONFIG_SLOTFORMATINDICATOR_RELEASE,
	PDCCH_SERVINGCELLCONFIG_SLOTFORMATINDICATOR_SETUP,
	PDCCH_SERVINGCELLCONFIG_SLOTFORMATINDICATOR_max = 0x7FFFFFFF
}PDCCH_ServingCellConfig_slotFormatIndicator_e;


/* union corresponding asn: PDCCH_ServingCellConfig_slotFormatIndicator */
typedef union {
	PDCCH_ServingCellConfig_release_t                                  release;
	SlotFormatIndicator_t                                              setup;
}PDCCH_ServingCellConfig_slotFormatIndicator_u;


/* struct corresponding asn: PDCCH_ServingCellConfig_slotFormatIndicator */
typedef struct {
	PDCCH_ServingCellConfig_slotFormatIndicator_e                      type;
	PDCCH_ServingCellConfig_slotFormatIndicator_u                      a;
}PDCCH_ServingCellConfig_slotFormatIndicator_t;


typedef struct {
	BOOLEAN                                                            slotFormatIndicator_exist;
	PDCCH_ServingCellConfig_slotFormatIndicator_t                      slotFormatIndicator;
	/* Extension marker start. */
}PDCCH_ServingCellConfig_t;


extern void EncodePDCCH_ServingCellConfig(
	PDCCH_ServingCellConfig_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);
extern void DecodePDCCH_ServingCellConfig(
	PDCCH_ServingCellConfig_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);

#endif
