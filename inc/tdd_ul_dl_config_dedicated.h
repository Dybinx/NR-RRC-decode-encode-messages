/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * tdd_ul_dl_config_dedicated.h - this is the header file for message: TDD-UL-DL-ConfigDedicated
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#ifndef _TDD_UL_DL_CONFIG_DEDICATED_H_
#define _TDD_UL_DL_CONFIG_DEDICATED_H_

#include "types.h"
#include "contants.h" 				
#include "handle_bits.h"
#include "tdd_ul_dl_slot_config.h"
#include "tdd_ul_dl_slot_index.h"


typedef struct {
	uint32                                                             length;
	TDD_UL_DL_SlotConfig_t                                             elm[maxNrofSlots];
}TDD_UL_DL_ConfigDedicated_slotSpecificConfigurationsToAddModList_t;


typedef struct {
	uint32                                                             length;
	TDD_UL_DL_SlotIndex_t                                              elm[maxNrofSlots];
}TDD_UL_DL_ConfigDedicated_slotSpecificConfigurationsToreleaseList_t;


typedef struct {
	BOOLEAN                                                            slotSpecificConfigurationsToAddModList_exist;
	TDD_UL_DL_ConfigDedicated_slotSpecificConfigurationsToAddModList_t    slotSpecificConfigurationsToAddModList;
	BOOLEAN                                                            slotSpecificConfigurationsToreleaseList_exist;
	TDD_UL_DL_ConfigDedicated_slotSpecificConfigurationsToreleaseList_t    slotSpecificConfigurationsToreleaseList;
	/* Extension marker start. */
}TDD_UL_DL_ConfigDedicated_t;


extern void EncodeTDD_UL_DL_ConfigDedicated(
	TDD_UL_DL_ConfigDedicated_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);
extern void DecodeTDD_UL_DL_ConfigDedicated(
	TDD_UL_DL_ConfigDedicated_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);

#endif
