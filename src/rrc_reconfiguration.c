/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * rrc_reconfiguration.c - codec the message of RRCReconfiguration
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#include <assert.h>
#include "mem.h"
#include "rrc_reconfiguration.h"


void EncodeRRCReconfiguration_criticalExtensionsFuture(
	RRCReconfiguration_criticalExtensionsFuture_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
}

void EncodeRRCReconfiguration_criticalExtensions(
	RRCReconfiguration_criticalExtensions_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field->type, 1, bits_iter);
	switch (i_encoded_field->type)
	{
	case RRCRECONFIGURATION_CRITICALEXTENSIONS_RRCRECONFIGURATION:
		EncodeRRCReconfiguration_IEs(&i_encoded_field->a.rrcReconfiguration, buff, bits_iter, asn_error);
		break;

	case RRCRECONFIGURATION_CRITICALEXTENSIONS_CRITICALEXTENSIONSFUTURE:
		EncodeRRCReconfiguration_criticalExtensionsFuture(&i_encoded_field->a.criticalExtensionsFuture, buff, bits_iter, asn_error);
		break;

	default:
		break;	}
}

void EncodeRRCReconfiguration(
	RRCReconfiguration_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	EncodeRRC_TransactionIdentifier(&i_encoded_field->rrc_TransactionIdentifier, buff, bits_iter, asn_error);

	EncodeRRCReconfiguration_criticalExtensions(&i_encoded_field->criticalExtensions, buff, bits_iter, asn_error);

}

void DecodeRRCReconfiguration_criticalExtensionsFuture(
	RRCReconfiguration_criticalExtensionsFuture_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
}

void DecodeRRCReconfiguration_criticalExtensions(
	RRCReconfiguration_criticalExtensions_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint32    index = 0;

	index = Get_bits(buff, 1, bits_iter);
	o_decoded_field->type = index;
	switch (index)
	{
	case RRCRECONFIGURATION_CRITICALEXTENSIONS_RRCRECONFIGURATION:
		DecodeRRCReconfiguration_IEs(&o_decoded_field->a.rrcReconfiguration, buff, bits_iter, asn_error);
		break;

	case RRCRECONFIGURATION_CRITICALEXTENSIONS_CRITICALEXTENSIONSFUTURE:
		DecodeRRCReconfiguration_criticalExtensionsFuture(&o_decoded_field->a.criticalExtensionsFuture, buff, bits_iter, asn_error);
		break;

	default:
		break;

	}
}

void DecodeRRCReconfiguration(
	RRCReconfiguration_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	DecodeRRC_TransactionIdentifier(&o_decoded_field->rrc_TransactionIdentifier, buff, bits_iter, asn_error);
	DecodeRRCReconfiguration_criticalExtensions(&o_decoded_field->criticalExtensions, buff, bits_iter, asn_error);
}

