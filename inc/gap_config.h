/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * gap_config.h - this is the header file for message: GapConfig
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#ifndef _GAP_CONFIG_H_
#define _GAP_CONFIG_H_

#include "types.h"
#include "contants.h" 				
#include "handle_bits.h"


typedef enum {
	GAPCONFIG_MGL_MS1DOT5,
	GAPCONFIG_MGL_MS3,
	GAPCONFIG_MGL_MS3DOT5,
	GAPCONFIG_MGL_MS4,
	GAPCONFIG_MGL_MS5DOT5,
	GAPCONFIG_MGL_MS6,
	GAPCONFIG_MGL_max = 0x7FFFFFFF
}GapConfig_mgl_e;


typedef enum {
	GAPCONFIG_MGRP_MS20,
	GAPCONFIG_MGRP_MS40,
	GAPCONFIG_MGRP_MS80,
	GAPCONFIG_MGRP_MS160,
	GAPCONFIG_MGRP_max = 0x7FFFFFFF
}GapConfig_mgrp_e;


typedef enum {
	GAPCONFIG_MGTA_MS0,
	GAPCONFIG_MGTA_MS0DOT25,
	GAPCONFIG_MGTA_MS0DOT5,
	GAPCONFIG_MGTA_max = 0x7FFFFFFF
}GapConfig_mgta_e;


typedef struct {
	uint32                                                             gapOffset;
	GapConfig_mgl_e                                                    mgl;
	GapConfig_mgrp_e                                                   mgrp;
	GapConfig_mgta_e                                                   mgta;
	/* Extension marker start. */
}GapConfig_t;


extern void EncodeGapConfig(
	GapConfig_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);
extern void DecodeGapConfig(
	GapConfig_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);

#endif
