/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * pusch_serving_cell_config.h - this is the header file for message: PUSCH-ServingCellConfig
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#ifndef _PUSCH_SERVING_CELL_CONFIG_H_
#define _PUSCH_SERVING_CELL_CONFIG_H_

#include "types.h"
#include "contants.h" 				
#include "handle_bits.h"
#include "pusch_code_block_group_transmission.h"


typedef struct {
	uint32                                                             dummy;
}PUSCH_ServingCellConfig_release_t;


typedef enum {
	PUSCH_SERVINGCELLCONFIG_CODEBLOCKGROUPTRANSMISSION_RELEASE,
	PUSCH_SERVINGCELLCONFIG_CODEBLOCKGROUPTRANSMISSION_SETUP,
	PUSCH_SERVINGCELLCONFIG_CODEBLOCKGROUPTRANSMISSION_max = 0x7FFFFFFF
}PUSCH_ServingCellConfig_codeBlockGroupTransmission_e;


/* union corresponding asn: PUSCH_ServingCellConfig_codeBlockGroupTransmission */
typedef union {
	PUSCH_ServingCellConfig_release_t                                  release;
	PUSCH_CodeBlockGroupTransmission_t                                 setup;
}PUSCH_ServingCellConfig_codeBlockGroupTransmission_u;


/* struct corresponding asn: PUSCH_ServingCellConfig_codeBlockGroupTransmission */
typedef struct {
	PUSCH_ServingCellConfig_codeBlockGroupTransmission_e               type;
	PUSCH_ServingCellConfig_codeBlockGroupTransmission_u               a;
}PUSCH_ServingCellConfig_codeBlockGroupTransmission_t;


typedef enum {
	PUSCH_SERVINGCELLCONFIG_RATEMATCHING_LIMITEDBUFFERRM,
	PUSCH_SERVINGCELLCONFIG_RATEMATCHING_max = 0x7FFFFFFF
}PUSCH_ServingCellConfig_rateMatching_e;


typedef enum {
	PUSCH_SERVINGCELLCONFIG_XOVERHEAD_XOH6,
	PUSCH_SERVINGCELLCONFIG_XOVERHEAD_XOH12,
	PUSCH_SERVINGCELLCONFIG_XOVERHEAD_XOH18,
	PUSCH_SERVINGCELLCONFIG_XOVERHEAD_max = 0x7FFFFFFF
}PUSCH_ServingCellConfig_xOverhead_e;


typedef struct {
	BOOLEAN                                                            codeBlockGroupTransmission_exist;
	PUSCH_ServingCellConfig_codeBlockGroupTransmission_t               codeBlockGroupTransmission;
	BOOLEAN                                                            rateMatching_exist;
	PUSCH_ServingCellConfig_rateMatching_e                             rateMatching;
	BOOLEAN                                                            xOverhead_exist;
	PUSCH_ServingCellConfig_xOverhead_e                                xOverhead;
	/* Extension marker start. */
}PUSCH_ServingCellConfig_t;


extern void EncodePUSCH_ServingCellConfig(
	PUSCH_ServingCellConfig_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);
extern void DecodePUSCH_ServingCellConfig(
	PUSCH_ServingCellConfig_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);

#endif
