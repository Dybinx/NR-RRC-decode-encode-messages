/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * csi_frequency_occupation.c - codec the message of CSI-FrequencyOccupation
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#include <assert.h>
#include "mem.h"
#include "csi_frequency_occupation.h"


void EncodeCSI_FrequencyOccupation(
	CSI_FrequencyOccupation_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	/*flag for extension marker, within extension root. */
	PutBits(buff, 0, 1, bits_iter);
	PutBits(buff, i_encoded_field->startingRB, 9, bits_iter);

	PutBits(buff, i_encoded_field->nrofRBs - 24, 8, bits_iter);

}

void DecodeCSI_FrequencyOccupation(
	CSI_FrequencyOccupation_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint8    flag = 0;
	uint8    ext_flag = 0;
	uint32    bits_width = 0;
	uint32    preamble_bitmap = 0;
	
	ext_flag = Get_bits(buff, 1, bits_iter);

	o_decoded_field->startingRB = Get_bits(buff, 9, bits_iter);
	o_decoded_field->nrofRBs = Get_bits(buff, 8, bits_iter) + 24;
	if(ext_flag == 1)
	{
		//need to handle asn error.
	}
}

