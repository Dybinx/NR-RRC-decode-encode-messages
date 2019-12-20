/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * csi_report_framework.c - codec the message of CSI-ReportFramework
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#include <assert.h>
#include "mem.h"
#include "csi_report_framework.h"


void EncodeCSI_ReportFramework(
	CSI_ReportFramework_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field->maxNumberPeriodicCSI_ReportPerBWP - 1, 2, bits_iter);

	PutBits(buff, i_encoded_field->maxNumberAperiodicCSI_ReportPerBWP - 1, 2, bits_iter);

	PutBits(buff, i_encoded_field->maxNumberSemiPersistentCSI_ReportPerBWP, 3, bits_iter);

	PutBits(buff, i_encoded_field->simultaneousCSI_ReportsAllCC - 5, 5, bits_iter);

}

void DecodeCSI_ReportFramework(
	CSI_ReportFramework_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	o_decoded_field->maxNumberPeriodicCSI_ReportPerBWP = Get_bits(buff, 2, bits_iter) + 1;
	o_decoded_field->maxNumberAperiodicCSI_ReportPerBWP = Get_bits(buff, 2, bits_iter) + 1;
	o_decoded_field->maxNumberSemiPersistentCSI_ReportPerBWP = Get_bits(buff, 3, bits_iter);
	o_decoded_field->simultaneousCSI_ReportsAllCC = Get_bits(buff, 5, bits_iter) + 5;
}

