/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * uci_on_pusch.h - this is the header file for message: UCI-OnPUSCH
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#ifndef _UCI_ON_PUSCH_H_
#define _UCI_ON_PUSCH_H_

#include "types.h"
#include "contants.h" 				
#include "handle_bits.h"
#include "beta_offsets.h"
#include "beta_offsets.h"


typedef struct {
	uint32                                                             length;
	BetaOffsets_t                                                      elm[4];
}UCI_OnPUSCH_dynamic_t;


typedef enum {
	UCI_ONPUSCH_BETAOFFSETS_DYNAMIC,
	UCI_ONPUSCH_BETAOFFSETS_SEMISTATIC,
	UCI_ONPUSCH_BETAOFFSETS_max = 0x7FFFFFFF
}UCI_OnPUSCH_betaOffsets_e;


/* union corresponding asn: UCI_OnPUSCH_betaOffsets */
typedef union {
	UCI_OnPUSCH_dynamic_t                                              dynamic;
	BetaOffsets_t                                                      semiStatic;
}UCI_OnPUSCH_betaOffsets_u;


/* struct corresponding asn: UCI_OnPUSCH_betaOffsets */
typedef struct {
	UCI_OnPUSCH_betaOffsets_e                                          type;
	UCI_OnPUSCH_betaOffsets_u                                          a;
}UCI_OnPUSCH_betaOffsets_t;


typedef enum {
	UCI_ONPUSCH_SCALING_F0P5,
	UCI_ONPUSCH_SCALING_F0P65,
	UCI_ONPUSCH_SCALING_F0P8,
	UCI_ONPUSCH_SCALING_F1,
	UCI_ONPUSCH_SCALING_max = 0x7FFFFFFF
}UCI_OnPUSCH_scaling_e;


typedef struct {
	BOOLEAN                                                            betaOffsets_exist;
	UCI_OnPUSCH_betaOffsets_t                                          betaOffsets;
	UCI_OnPUSCH_scaling_e                                              scaling;
}UCI_OnPUSCH_t;


extern void EncodeUCI_OnPUSCH(
	UCI_OnPUSCH_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);
extern void DecodeUCI_OnPUSCH(
	UCI_OnPUSCH_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);

#endif
