/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * rlc_config.h - this is the header file for message: RLC-Config
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#ifndef _RLC_CONFIG_H_
#define _RLC_CONFIG_H_

#include "types.h"
#include "contants.h" 				
#include "handle_bits.h"
#include "ul_am_rlc.h"
#include "dl_am_rlc.h"
#include "ul_um_rlc.h"
#include "dl_um_rlc.h"
#include "ul_um_rlc.h"
#include "dl_um_rlc.h"


typedef struct {
	UL_AM_RLC_t                                                        ul_AM_RLC;
	DL_AM_RLC_t                                                        dl_AM_RLC;
}RLC_Config_am_t;


typedef struct {
	UL_UM_RLC_t                                                        ul_UM_RLC;
	DL_UM_RLC_t                                                        dl_UM_RLC;
}RLC_Config_um_Bi_Directional_t;


typedef struct {
	UL_UM_RLC_t                                                        ul_UM_RLC;
}RLC_Config_um_Uni_Directional_UL_t;


typedef struct {
	DL_UM_RLC_t                                                        dl_UM_RLC;
}RLC_Config_um_Uni_Directional_DL_t;


typedef enum {
	RLC_CONFIG_AM,
	RLC_CONFIG_UM_BI_DIRECTIONAL,
	RLC_CONFIG_UM_UNI_DIRECTIONAL_UL,
	RLC_CONFIG_UM_UNI_DIRECTIONAL_DL,
	/* Extension marker start. */
	RLC_CONFIG_max = 0x7FFFFFFF
}RLC_Config_e;


/* union corresponding asn: RLC_Config */
typedef union {
	RLC_Config_am_t                                                    am;
	RLC_Config_um_Bi_Directional_t                                     um_Bi_Directional;
	RLC_Config_um_Uni_Directional_UL_t                                 um_Uni_Directional_UL;
	RLC_Config_um_Uni_Directional_DL_t                                 um_Uni_Directional_DL;
	/* Extension marker start. */
}RLC_Config_u;


/* struct corresponding asn: RLC_Config */
typedef struct {
	RLC_Config_e                                                       type;
	RLC_Config_u                                                       a;
}RLC_Config_t;


extern void EncodeRLC_Config(
	RLC_Config_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);
extern void DecodeRLC_Config(
	RLC_Config_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);

#endif
