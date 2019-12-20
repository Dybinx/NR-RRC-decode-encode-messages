/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * ss_rssi_measurement.c - codec the message of SS-RSSI-Measurement
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#include <assert.h>
#include "mem.h"
#include "ss_rssi_measurement.h"


void EncodeSS_RSSI_Measurement_measurementSlots(
	SS_RSSI_Measurement_measurementSlots_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	/* set the length field. */
	PutBits(buff, i_encoded_field->bits_num - 1, 7, bits_iter);
	/* set the contents field. */
	PutBitsMore(buff, i_encoded_field->value, i_encoded_field->bits_num, bits_iter);
}

void EncodeSS_RSSI_Measurement(
	SS_RSSI_Measurement_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	EncodeSS_RSSI_Measurement_measurementSlots(&i_encoded_field->measurementSlots, buff, bits_iter, asn_error);

	PutBits(buff, i_encoded_field->endSymbol, 2, bits_iter);

}

void DecodeSS_RSSI_Measurement_measurementSlots(
	SS_RSSI_Measurement_measurementSlots_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint32    bits_num = 0;
	uint32    octets_num = 0;
	uint32    i = 0;

	bits_num = Get_bits(buff, 7, bits_iter) + 1;
	o_decoded_field->bits_num = bits_num;
	octets_num = bits_num / 8 + (bits_num % 8 == 0 ? 0 : 1);

	if(bits_num % 8 != 0)
	{
		o_decoded_field->value[0] = Get_bits(buff, bits_num % 8, bits_iter);
		i = 1;
	}

	for(; i < octets_num; i++)
	{
		o_decoded_field->value[i] = Get_bits(buff, 8, bits_iter);
	}
}

void DecodeSS_RSSI_Measurement(
	SS_RSSI_Measurement_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	DecodeSS_RSSI_Measurement_measurementSlots(&o_decoded_field->measurementSlots, buff, bits_iter, asn_error);
	o_decoded_field->endSymbol = Get_bits(buff, 2, bits_iter);
}

