/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * srs_cc_set_index.h - this is the header file for message: SRS-CC-SetIndex
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#ifndef _SRS_CC_SET_INDEX_H_
#define _SRS_CC_SET_INDEX_H_

#include "types.h"
#include "contants.h" 				
#include "handle_bits.h"


typedef struct {
	BOOLEAN                                                            cc_SetIndex_exist;
	uint32                                                             cc_SetIndex;
	BOOLEAN                                                            cc_IndexInOneCC_Set_exist;
	uint32                                                             cc_IndexInOneCC_Set;
}SRS_CC_SetIndex_t;


extern void EncodeSRS_CC_SetIndex(
	SRS_CC_SetIndex_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);
extern void DecodeSRS_CC_SetIndex(
	SRS_CC_SetIndex_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);

#endif
