/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * pdcp_parameters.c - codec the message of PDCP-Parameters
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#include <assert.h>
#include "mem.h"
#include "pdcp_parameters.h"


void EncodePDCP_Parameters_supportedROHC_Profiles(
	PDCP_Parameters_supportedROHC_Profiles_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field->profile0x0000, 1, bits_iter);

	PutBits(buff, i_encoded_field->profile0x0001, 1, bits_iter);

	PutBits(buff, i_encoded_field->profile0x0002, 1, bits_iter);

	PutBits(buff, i_encoded_field->profile0x0003, 1, bits_iter);

	PutBits(buff, i_encoded_field->profile0x0004, 1, bits_iter);

	PutBits(buff, i_encoded_field->profile0x0006, 1, bits_iter);

	PutBits(buff, i_encoded_field->profile0x0101, 1, bits_iter);

	PutBits(buff, i_encoded_field->profile0x0102, 1, bits_iter);

	PutBits(buff, i_encoded_field->profile0x0103, 1, bits_iter);

	PutBits(buff, i_encoded_field->profile0x0104, 1, bits_iter);

}

void EncodePDCP_Parameters_maxNumberROHC_ContextSessions(
	PDCP_Parameters_maxNumberROHC_ContextSessions_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 4, bits_iter);
}

void EncodePDCP_Parameters_uplinkOnlyROHC_Profiles(
	PDCP_Parameters_uplinkOnlyROHC_Profiles_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 0, bits_iter);
}

void EncodePDCP_Parameters_continueROHC_Context(
	PDCP_Parameters_continueROHC_Context_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 0, bits_iter);
}

void EncodePDCP_Parameters_outOfOrderDelivery(
	PDCP_Parameters_outOfOrderDelivery_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 0, bits_iter);
}

void EncodePDCP_Parameters_shortSN(
	PDCP_Parameters_shortSN_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 0, bits_iter);
}

void EncodePDCP_Parameters(
	PDCP_Parameters_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	/*flag for extension marker, within extension root. */
	PutBits(buff, 0, 1, bits_iter);
	if(i_encoded_field->uplinkOnlyROHC_Profiles_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->continueROHC_Context_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->outOfOrderDelivery_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->shortSN_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	EncodePDCP_Parameters_supportedROHC_Profiles(&i_encoded_field->supportedROHC_Profiles, buff, bits_iter, asn_error);

	EncodePDCP_Parameters_maxNumberROHC_ContextSessions(i_encoded_field->maxNumberROHC_ContextSessions, buff, bits_iter, asn_error);

	if(i_encoded_field->uplinkOnlyROHC_Profiles_exist == TRUE)
	{
		EncodePDCP_Parameters_uplinkOnlyROHC_Profiles(i_encoded_field->uplinkOnlyROHC_Profiles, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->continueROHC_Context_exist == TRUE)
	{
		EncodePDCP_Parameters_continueROHC_Context(i_encoded_field->continueROHC_Context, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->outOfOrderDelivery_exist == TRUE)
	{
		EncodePDCP_Parameters_outOfOrderDelivery(i_encoded_field->outOfOrderDelivery, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->shortSN_exist == TRUE)
	{
		EncodePDCP_Parameters_shortSN(i_encoded_field->shortSN, buff, bits_iter, asn_error);
	}

}

void DecodePDCP_Parameters_supportedROHC_Profiles(
	PDCP_Parameters_supportedROHC_Profiles_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	o_decoded_field->profile0x0000 = Get_bits(buff, 1, bits_iter);
	o_decoded_field->profile0x0001 = Get_bits(buff, 1, bits_iter);
	o_decoded_field->profile0x0002 = Get_bits(buff, 1, bits_iter);
	o_decoded_field->profile0x0003 = Get_bits(buff, 1, bits_iter);
	o_decoded_field->profile0x0004 = Get_bits(buff, 1, bits_iter);
	o_decoded_field->profile0x0006 = Get_bits(buff, 1, bits_iter);
	o_decoded_field->profile0x0101 = Get_bits(buff, 1, bits_iter);
	o_decoded_field->profile0x0102 = Get_bits(buff, 1, bits_iter);
	o_decoded_field->profile0x0103 = Get_bits(buff, 1, bits_iter);
	o_decoded_field->profile0x0104 = Get_bits(buff, 1, bits_iter);
}

void DecodePDCP_Parameters_maxNumberROHC_ContextSessions(
	PDCP_Parameters_maxNumberROHC_ContextSessions_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = Get_bits(buff, 4, bits_iter);
}

void DecodePDCP_Parameters_uplinkOnlyROHC_Profiles(
	PDCP_Parameters_uplinkOnlyROHC_Profiles_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = 0;
}

void DecodePDCP_Parameters_continueROHC_Context(
	PDCP_Parameters_continueROHC_Context_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = 0;
}

void DecodePDCP_Parameters_outOfOrderDelivery(
	PDCP_Parameters_outOfOrderDelivery_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = 0;
}

void DecodePDCP_Parameters_shortSN(
	PDCP_Parameters_shortSN_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = 0;
}

void DecodePDCP_Parameters(
	PDCP_Parameters_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint8    flag = 0;
	uint8    ext_flag = 0;
	uint32    bits_width = 0;
	uint32    preamble_bitmap = 0;
	
	ext_flag = Get_bits(buff, 1, bits_iter);

	o_decoded_field->uplinkOnlyROHC_Profiles_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->continueROHC_Context_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->outOfOrderDelivery_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->shortSN_exist = Get_bits(buff, 1, bits_iter);
	DecodePDCP_Parameters_supportedROHC_Profiles(&o_decoded_field->supportedROHC_Profiles, buff, bits_iter, asn_error);
	DecodePDCP_Parameters_maxNumberROHC_ContextSessions(&o_decoded_field->maxNumberROHC_ContextSessions, buff, bits_iter, asn_error);
	if(o_decoded_field->uplinkOnlyROHC_Profiles_exist == TRUE)
	{
		DecodePDCP_Parameters_uplinkOnlyROHC_Profiles(&o_decoded_field->uplinkOnlyROHC_Profiles, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->continueROHC_Context_exist == TRUE)
	{
		DecodePDCP_Parameters_continueROHC_Context(&o_decoded_field->continueROHC_Context, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->outOfOrderDelivery_exist == TRUE)
	{
		DecodePDCP_Parameters_outOfOrderDelivery(&o_decoded_field->outOfOrderDelivery, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->shortSN_exist == TRUE)
	{
		DecodePDCP_Parameters_shortSN(&o_decoded_field->shortSN, buff, bits_iter, asn_error);
	}

	if(ext_flag == 1)
	{
		//need to handle asn error.
	}
}

