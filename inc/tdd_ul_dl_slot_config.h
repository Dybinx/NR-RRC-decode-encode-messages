/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * tdd_ul_dl_slot_config.h - this is the header file for message: TDD-UL-DL-SlotConfig
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#ifndef _TDD_UL_DL_SLOT_CONFIG_H_
#define _TDD_UL_DL_SLOT_CONFIG_H_

#include "types.h"
#include "contants.h" 				
#include "handle_bits.h"
#include "tdd_ul_dl_slot_index.h"


typedef struct {
	uint32                                                             dummy;
}TDD_UL_DL_SlotConfig_allDownlink_t;


typedef struct {
	uint32                                                             dummy;
}TDD_UL_DL_SlotConfig_allUplink_t;


typedef struct {
	BOOLEAN                                                            nrofDownlinkSymbols_exist;
	uint32                                                             nrofDownlinkSymbols;
	BOOLEAN                                                            nrofUplinkSymbols_exist;
	uint32                                                             nrofUplinkSymbols;
}TDD_UL_DL_SlotConfig_explicit_t;


typedef enum {
	TDD_UL_DL_SLOTCONFIG_SYMBOLS_ALLDOWNLINK,
	TDD_UL_DL_SLOTCONFIG_SYMBOLS_ALLUPLINK,
	TDD_UL_DL_SLOTCONFIG_SYMBOLS_EXPLICIT,
	TDD_UL_DL_SLOTCONFIG_SYMBOLS_max = 0x7FFFFFFF
}TDD_UL_DL_SlotConfig_symbols_e;


/* union corresponding asn: TDD_UL_DL_SlotConfig_symbols */
typedef union {
	TDD_UL_DL_SlotConfig_allDownlink_t                                 allDownlink;
	TDD_UL_DL_SlotConfig_allUplink_t                                   allUplink;
	TDD_UL_DL_SlotConfig_explicit_t                                    explicit;
}TDD_UL_DL_SlotConfig_symbols_u;


/* struct corresponding asn: TDD_UL_DL_SlotConfig_symbols */
typedef struct {
	TDD_UL_DL_SlotConfig_symbols_e                                     type;
	TDD_UL_DL_SlotConfig_symbols_u                                     a;
}TDD_UL_DL_SlotConfig_symbols_t;


typedef struct {
	TDD_UL_DL_SlotIndex_t                                              slotIndex;
	TDD_UL_DL_SlotConfig_symbols_t                                     symbols;
}TDD_UL_DL_SlotConfig_t;


extern void EncodeTDD_UL_DL_SlotConfig(
	TDD_UL_DL_SlotConfig_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);
extern void DecodeTDD_UL_DL_SlotConfig(
	TDD_UL_DL_SlotConfig_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);

#endif
