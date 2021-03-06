/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * csi_rs_resource_config_mobility.c - codec the message of CSI-RS-ResourceConfigMobility
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#include <assert.h>
#include "mem.h"
#include "csi_rs_resource_config_mobility.h"


void EncodeCSI_RS_ResourceConfigMobility_csi_RS_CellList_Mobility(
	CSI_RS_ResourceConfigMobility_csi_RS_CellList_Mobility_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field->length - 1, 7, bits_iter);
	for(uint32 i = 0; i < i_encoded_field->length; i++)
	{
		EncodeCSI_RS_CellMobility(&i_encoded_field->elm[i], buff, bits_iter, asn_error);
	}
}

void EncodeCSI_RS_ResourceConfigMobility(
	CSI_RS_ResourceConfigMobility_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	/*flag for extension marker, within extension root. */
	PutBits(buff, 0, 1, bits_iter);
	EncodeSubcarrierSpacing(i_encoded_field->subcarrierSpacing, buff, bits_iter, asn_error);

	EncodeCSI_RS_ResourceConfigMobility_csi_RS_CellList_Mobility(&i_encoded_field->csi_RS_CellList_Mobility, buff, bits_iter, asn_error);

}

void DecodeCSI_RS_ResourceConfigMobility_csi_RS_CellList_Mobility(
	CSI_RS_ResourceConfigMobility_csi_RS_CellList_Mobility_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint32    count = 0;
	count = Get_bits(buff, 7, bits_iter) + 1;
	o_decoded_field->length = count;

	for(uint32 i = 0; i < count; i++)
	{
		DecodeCSI_RS_CellMobility(&o_decoded_field->elm[i], buff, bits_iter, asn_error);
	}
}

void DecodeCSI_RS_ResourceConfigMobility(
	CSI_RS_ResourceConfigMobility_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint8    flag = 0;
	uint8    ext_flag = 0;
	uint32    bits_width = 0;
	uint32    preamble_bitmap = 0;
	
	ext_flag = Get_bits(buff, 1, bits_iter);

	DecodeSubcarrierSpacing(&o_decoded_field->subcarrierSpacing, buff, bits_iter, asn_error);
	DecodeCSI_RS_ResourceConfigMobility_csi_RS_CellList_Mobility(&o_decoded_field->csi_RS_CellList_Mobility, buff, bits_iter, asn_error);
	if(ext_flag == 1)
	{
		//need to handle asn error.
	}
}

