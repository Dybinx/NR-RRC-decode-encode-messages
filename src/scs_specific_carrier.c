/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * scs_specific_carrier.c - codec the message of SCS-SpecificCarrier
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#include <assert.h>
#include "mem.h"
#include "scs_specific_carrier.h"


void EncodeSCS_SpecificCarrier(
	SCS_SpecificCarrier_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	/*flag for extension marker, within extension root. */
	PutBits(buff, 0, 1, bits_iter);
	PutBits(buff, i_encoded_field->offsetToCarrier, 12, bits_iter);

	EncodeSubcarrierSpacing(i_encoded_field->subcarrierSpacing, buff, bits_iter, asn_error);

	PutBits(buff, i_encoded_field->carrierBandwidth - 1, 9, bits_iter);

}

void DecodeSCS_SpecificCarrier(
	SCS_SpecificCarrier_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint8    flag = 0;
	uint8    ext_flag = 0;
	uint32    bits_width = 0;
	uint32    preamble_bitmap = 0;
	
	ext_flag = Get_bits(buff, 1, bits_iter);

	o_decoded_field->offsetToCarrier = Get_bits(buff, 12, bits_iter);
	DecodeSubcarrierSpacing(&o_decoded_field->subcarrierSpacing, buff, bits_iter, asn_error);
	o_decoded_field->carrierBandwidth = Get_bits(buff, 9, bits_iter) + 1;
	if(ext_flag == 1)
	{
		//need to handle asn error.
	}
}

