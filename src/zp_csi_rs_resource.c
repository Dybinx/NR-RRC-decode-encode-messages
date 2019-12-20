/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * zp_csi_rs_resource.c - codec the message of ZP-CSI-RS-Resource
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#include <assert.h>
#include "mem.h"
#include "zp_csi_rs_resource.h"


void EncodeZP_CSI_RS_Resource(
	ZP_CSI_RS_Resource_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	/*flag for extension marker, within extension root. */
	PutBits(buff, 0, 1, bits_iter);
	if(i_encoded_field->periodicityAndOffset_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	EncodeZP_CSI_RS_ResourceId(&i_encoded_field->zp_CSI_RS_ResourceId, buff, bits_iter, asn_error);

	EncodeCSI_RS_ResourceMapping(&i_encoded_field->resourceMapping, buff, bits_iter, asn_error);

	if(i_encoded_field->periodicityAndOffset_exist == TRUE)
	{
		EncodeCSI_ResourcePeriodicityAndOffset(&i_encoded_field->periodicityAndOffset, buff, bits_iter, asn_error);
	}

}

void DecodeZP_CSI_RS_Resource(
	ZP_CSI_RS_Resource_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint8    flag = 0;
	uint8    ext_flag = 0;
	uint32    bits_width = 0;
	uint32    preamble_bitmap = 0;
	
	ext_flag = Get_bits(buff, 1, bits_iter);

	o_decoded_field->periodicityAndOffset_exist = Get_bits(buff, 1, bits_iter);
	DecodeZP_CSI_RS_ResourceId(&o_decoded_field->zp_CSI_RS_ResourceId, buff, bits_iter, asn_error);
	DecodeCSI_RS_ResourceMapping(&o_decoded_field->resourceMapping, buff, bits_iter, asn_error);
	if(o_decoded_field->periodicityAndOffset_exist == TRUE)
	{
		DecodeCSI_ResourcePeriodicityAndOffset(&o_decoded_field->periodicityAndOffset, buff, bits_iter, asn_error);
	}

	if(ext_flag == 1)
	{
		//need to handle asn error.
	}
}

