/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * measurement_report.c - codec the message of MeasurementReport
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#include <assert.h>
#include "mem.h"
#include "measurement_report.h"


void EncodeMeasurementReport_criticalExtensionsFuture(
	MeasurementReport_criticalExtensionsFuture_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
}

void EncodeMeasurementReport_criticalExtensions(
	MeasurementReport_criticalExtensions_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field->type, 1, bits_iter);
	switch (i_encoded_field->type)
	{
	case MEASUREMENTREPORT_CRITICALEXTENSIONS_MEASUREMENTREPORT:
		EncodeMeasurementReport_IEs(&i_encoded_field->a.measurementReport, buff, bits_iter, asn_error);
		break;

	case MEASUREMENTREPORT_CRITICALEXTENSIONS_CRITICALEXTENSIONSFUTURE:
		EncodeMeasurementReport_criticalExtensionsFuture(&i_encoded_field->a.criticalExtensionsFuture, buff, bits_iter, asn_error);
		break;

	default:
		break;	}
}

void EncodeMeasurementReport(
	MeasurementReport_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	EncodeMeasurementReport_criticalExtensions(&i_encoded_field->criticalExtensions, buff, bits_iter, asn_error);

}

void DecodeMeasurementReport_criticalExtensionsFuture(
	MeasurementReport_criticalExtensionsFuture_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
}

void DecodeMeasurementReport_criticalExtensions(
	MeasurementReport_criticalExtensions_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint32    index = 0;

	index = Get_bits(buff, 1, bits_iter);
	o_decoded_field->type = index;
	switch (index)
	{
	case MEASUREMENTREPORT_CRITICALEXTENSIONS_MEASUREMENTREPORT:
		DecodeMeasurementReport_IEs(&o_decoded_field->a.measurementReport, buff, bits_iter, asn_error);
		break;

	case MEASUREMENTREPORT_CRITICALEXTENSIONS_CRITICALEXTENSIONSFUTURE:
		DecodeMeasurementReport_criticalExtensionsFuture(&o_decoded_field->a.criticalExtensionsFuture, buff, bits_iter, asn_error);
		break;

	default:
		break;

	}
}

void DecodeMeasurementReport(
	MeasurementReport_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	DecodeMeasurementReport_criticalExtensions(&o_decoded_field->criticalExtensions, buff, bits_iter, asn_error);
}

