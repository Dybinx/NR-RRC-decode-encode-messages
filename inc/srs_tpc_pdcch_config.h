/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * srs_tpc_pdcch_config.h - this is the header file for message: SRS-TPC-PDCCH-Config
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#ifndef _SRS_TPC_PDCCH_CONFIG_H_
#define _SRS_TPC_PDCCH_CONFIG_H_

#include "types.h"
#include "contants.h" 				
#include "handle_bits.h"
#include "srs_cc_set_index.h"


typedef struct {
	uint32                                                             length;
	SRS_CC_SetIndex_t                                                  elm[4];
}SRS_TPC_PDCCH_Config_srs_CC_SetIndexlist_t;


typedef struct {
	BOOLEAN                                                            srs_CC_SetIndexlist_exist;
	SRS_TPC_PDCCH_Config_srs_CC_SetIndexlist_t                         srs_CC_SetIndexlist;
}SRS_TPC_PDCCH_Config_t;


extern void EncodeSRS_TPC_PDCCH_Config(
	SRS_TPC_PDCCH_Config_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);
extern void DecodeSRS_TPC_PDCCH_Config(
	SRS_TPC_PDCCH_Config_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);

#endif
