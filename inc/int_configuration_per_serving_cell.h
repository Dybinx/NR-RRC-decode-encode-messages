/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * int_configuration_per_serving_cell.h - this is the header file for message: INT-ConfigurationPerServingCell
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#ifndef _INT_CONFIGURATION_PER_SERVING_CELL_H_
#define _INT_CONFIGURATION_PER_SERVING_CELL_H_

#include "types.h"
#include "contants.h" 				
#include "handle_bits.h"
#include "serv_cell_index.h"


typedef struct {
	ServCellIndex_t                                                    servingCellId;
	uint32                                                             positionInDCI;
}INT_ConfigurationPerServingCell_t;


extern void EncodeINT_ConfigurationPerServingCell(
	INT_ConfigurationPerServingCell_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);
extern void DecodeINT_ConfigurationPerServingCell(
	INT_ConfigurationPerServingCell_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);

#endif
