/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * int_configuration_per_serving_cell.c - codec the message of INT-ConfigurationPerServingCell
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#include <assert.h>
#include "mem.h"
#include "int_configuration_per_serving_cell.h"


void EncodeINT_ConfigurationPerServingCell(
	INT_ConfigurationPerServingCell_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	EncodeServCellIndex(&i_encoded_field->servingCellId, buff, bits_iter, asn_error);

	PutBits(buff, i_encoded_field->positionInDCI, 7, bits_iter);

}

void DecodeINT_ConfigurationPerServingCell(
	INT_ConfigurationPerServingCell_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	DecodeServCellIndex(&o_decoded_field->servingCellId, buff, bits_iter, asn_error);
	o_decoded_field->positionInDCI = Get_bits(buff, 7, bits_iter);
}

