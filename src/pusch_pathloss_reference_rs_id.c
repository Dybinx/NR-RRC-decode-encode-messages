/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * pusch_pathloss_reference_rs_id.c - codec the message of PUSCH-PathlossReferenceRS-Id
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#include <assert.h>
#include "mem.h"
#include "pusch_pathloss_reference_rs_id.h"


void EncodePUSCH_PathlossReferenceRS_Id(
	PUSCH_PathlossReferenceRS_Id_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field->value, 2, bits_iter);
}

void DecodePUSCH_PathlossReferenceRS_Id(
	PUSCH_PathlossReferenceRS_Id_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	o_decoded_field->value = Get_bits(buff, 2, bits_iter);
}

