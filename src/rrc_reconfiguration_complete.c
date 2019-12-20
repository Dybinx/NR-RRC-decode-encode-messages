/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * rrc_reconfiguration_complete.c - codec the message of RRCReconfigurationComplete
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#include <assert.h>
#include "mem.h"
#include "rrc_reconfiguration_complete.h"


void EncodeRRCReconfigurationComplete_criticalExtensionsFuture(
	RRCReconfigurationComplete_criticalExtensionsFuture_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
}

void EncodeRRCReconfigurationComplete_criticalExtensions(
	RRCReconfigurationComplete_criticalExtensions_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field->type, 1, bits_iter);
	switch (i_encoded_field->type)
	{
	case RRCRECONFIGURATIONCOMPLETE_CRITICALEXTENSIONS_RRCRECONFIGURATIONCOMPLETE:
		EncodeRRCReconfigurationComplete_IEs(&i_encoded_field->a.rrcReconfigurationComplete, buff, bits_iter, asn_error);
		break;

	case RRCRECONFIGURATIONCOMPLETE_CRITICALEXTENSIONS_CRITICALEXTENSIONSFUTURE:
		EncodeRRCReconfigurationComplete_criticalExtensionsFuture(&i_encoded_field->a.criticalExtensionsFuture, buff, bits_iter, asn_error);
		break;

	default:
		break;	}
}

void EncodeRRCReconfigurationComplete(
	RRCReconfigurationComplete_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	EncodeRRC_TransactionIdentifier(&i_encoded_field->rrc_TransactionIdentifier, buff, bits_iter, asn_error);

	EncodeRRCReconfigurationComplete_criticalExtensions(&i_encoded_field->criticalExtensions, buff, bits_iter, asn_error);

}

void DecodeRRCReconfigurationComplete_criticalExtensionsFuture(
	RRCReconfigurationComplete_criticalExtensionsFuture_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
}

void DecodeRRCReconfigurationComplete_criticalExtensions(
	RRCReconfigurationComplete_criticalExtensions_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint32    index = 0;

	index = Get_bits(buff, 1, bits_iter);
	o_decoded_field->type = index;
	switch (index)
	{
	case RRCRECONFIGURATIONCOMPLETE_CRITICALEXTENSIONS_RRCRECONFIGURATIONCOMPLETE:
		DecodeRRCReconfigurationComplete_IEs(&o_decoded_field->a.rrcReconfigurationComplete, buff, bits_iter, asn_error);
		break;

	case RRCRECONFIGURATIONCOMPLETE_CRITICALEXTENSIONS_CRITICALEXTENSIONSFUTURE:
		DecodeRRCReconfigurationComplete_criticalExtensionsFuture(&o_decoded_field->a.criticalExtensionsFuture, buff, bits_iter, asn_error);
		break;

	default:
		break;

	}
}

void DecodeRRCReconfigurationComplete(
	RRCReconfigurationComplete_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	DecodeRRC_TransactionIdentifier(&o_decoded_field->rrc_TransactionIdentifier, buff, bits_iter, asn_error);
	DecodeRRCReconfigurationComplete_criticalExtensions(&o_decoded_field->criticalExtensions, buff, bits_iter, asn_error);
}

