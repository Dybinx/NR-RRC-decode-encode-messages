/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * cg_uci_on_pusch.h - this is the header file for message: CG-UCI-OnPUSCH
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#ifndef _CG_UCI_ON_PUSCH_H_
#define _CG_UCI_ON_PUSCH_H_

#include "types.h"
#include "contants.h" 				
#include "handle_bits.h"
#include "beta_offsets.h"
#include "beta_offsets.h"


typedef struct {
	uint32                                                             length;
	BetaOffsets_t                                                      elm[4];
}CG_UCI_OnPUSCH_dynamic_t;


typedef enum {
	CG_UCI_ONPUSCH_DYNAMIC,
	CG_UCI_ONPUSCH_SEMISTATIC,
	CG_UCI_ONPUSCH_max = 0x7FFFFFFF
}CG_UCI_OnPUSCH_e;


/* union corresponding asn: CG_UCI_OnPUSCH */
typedef union {
	CG_UCI_OnPUSCH_dynamic_t                                           dynamic;
	BetaOffsets_t                                                      semiStatic;
}CG_UCI_OnPUSCH_u;


/* struct corresponding asn: CG_UCI_OnPUSCH */
typedef struct {
	CG_UCI_OnPUSCH_e                                                   type;
	CG_UCI_OnPUSCH_u                                                   a;
}CG_UCI_OnPUSCH_t;


extern void EncodeCG_UCI_OnPUSCH(
	CG_UCI_OnPUSCH_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);
extern void DecodeCG_UCI_OnPUSCH(
	CG_UCI_OnPUSCH_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);

#endif
