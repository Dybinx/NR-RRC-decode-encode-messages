/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * tag_config.h - this is the header file for message: TAG-Config
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#ifndef _TAG_CONFIG_H_
#define _TAG_CONFIG_H_

#include "types.h"
#include "contants.h" 				
#include "handle_bits.h"
#include "tag_id.h"
#include "tag.h"


typedef struct {
	uint32                                                             length;
	TAG_Id_t                                                           elm[maxNrofTAGs];
}TAG_Config_tag_ToReleaseList_t;


typedef struct {
	uint32                                                             length;
	TAG_t                                                              elm[maxNrofTAGs];
}TAG_Config_tag_ToAddModList_t;


typedef struct {
	BOOLEAN                                                            tag_ToReleaseList_exist;
	TAG_Config_tag_ToReleaseList_t                                     tag_ToReleaseList;
	BOOLEAN                                                            tag_ToAddModList_exist;
	TAG_Config_tag_ToAddModList_t                                      tag_ToAddModList;
}TAG_Config_t;


extern void EncodeTAG_Config(
	TAG_Config_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);
extern void DecodeTAG_Config(
	TAG_Config_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);

#endif
