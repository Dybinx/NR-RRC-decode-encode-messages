/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * pdsch_config_common.c - codec the message of PDSCH-ConfigCommon
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#include <assert.h>
#include "mem.h"
#include "pdsch_config_common.h"


void EncodePDSCH_ConfigCommon(
	PDSCH_ConfigCommon_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	/*flag for extension marker, within extension root. */
	PutBits(buff, 0, 1, bits_iter);
	if(i_encoded_field->pdsch_TimeDomainAllocationList_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->pdsch_TimeDomainAllocationList_exist == TRUE)
	{
		EncodePDSCH_TimeDomainResourceAllocationList(&i_encoded_field->pdsch_TimeDomainAllocationList, buff, bits_iter, asn_error);
	}

}

void DecodePDSCH_ConfigCommon(
	PDSCH_ConfigCommon_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint8    flag = 0;
	uint8    ext_flag = 0;
	uint32    bits_width = 0;
	uint32    preamble_bitmap = 0;
	
	ext_flag = Get_bits(buff, 1, bits_iter);

	o_decoded_field->pdsch_TimeDomainAllocationList_exist = Get_bits(buff, 1, bits_iter);
	if(o_decoded_field->pdsch_TimeDomainAllocationList_exist == TRUE)
	{
		DecodePDSCH_TimeDomainResourceAllocationList(&o_decoded_field->pdsch_TimeDomainAllocationList, buff, bits_iter, asn_error);
	}

	if(ext_flag == 1)
	{
		//need to handle asn error.
	}
}

