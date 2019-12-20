/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * tci_state.h - this is the header file for message: TCI-State
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#ifndef _TCI_STATE_H_
#define _TCI_STATE_H_

#include "types.h"
#include "contants.h" 				
#include "handle_bits.h"
#include "tci_state_id.h"
#include "qcl_info.h"
#include "qcl_info.h"


typedef struct {
	TCI_StateId_t                                                      tci_StateId;
	QCL_Info_t                                                         qcl_Type1;
	BOOLEAN                                                            qcl_Type2_exist;
	QCL_Info_t                                                         qcl_Type2;
	/* Extension marker start. */
}TCI_State_t;


extern void EncodeTCI_State(
	TCI_State_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);
extern void DecodeTCI_State(
	TCI_State_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);

#endif
