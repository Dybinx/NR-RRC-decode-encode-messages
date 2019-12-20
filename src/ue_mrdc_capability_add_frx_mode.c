/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * ue_mrdc_capability_add_frx_mode.c - codec the message of UE-MRDC-CapabilityAddFRX-Mode
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#include <assert.h>
#include "mem.h"
#include "ue_mrdc_capability_add_frx_mode.h"


void EncodeUE_MRDC_CapabilityAddFRX_Mode(
	UE_MRDC_CapabilityAddFRX_Mode_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	EncodeMeasParametersMRDC_FRX_Diff(&i_encoded_field->measParametersMRDC_FRX_Diff, buff, bits_iter, asn_error);

}

void DecodeUE_MRDC_CapabilityAddFRX_Mode(
	UE_MRDC_CapabilityAddFRX_Mode_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	DecodeMeasParametersMRDC_FRX_Diff(&o_decoded_field->measParametersMRDC_FRX_Diff, buff, bits_iter, asn_error);
}

