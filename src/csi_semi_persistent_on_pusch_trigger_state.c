/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * csi_semi_persistent_on_pusch_trigger_state.c - codec the message of CSI-SemiPersistentOnPUSCH-TriggerState
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#include <assert.h>
#include "mem.h"
#include "csi_semi_persistent_on_pusch_trigger_state.h"


void EncodeCSI_SemiPersistentOnPUSCH_TriggerState(
	CSI_SemiPersistentOnPUSCH_TriggerState_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	/*flag for extension marker, within extension root. */
	PutBits(buff, 0, 1, bits_iter);
	EncodeCSI_ReportConfigId(&i_encoded_field->associatedReportConfigInfo, buff, bits_iter, asn_error);

}

void DecodeCSI_SemiPersistentOnPUSCH_TriggerState(
	CSI_SemiPersistentOnPUSCH_TriggerState_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint8    flag = 0;
	uint8    ext_flag = 0;
	uint32    bits_width = 0;
	uint32    preamble_bitmap = 0;
	
	ext_flag = Get_bits(buff, 1, bits_iter);

	DecodeCSI_ReportConfigId(&o_decoded_field->associatedReportConfigInfo, buff, bits_iter, asn_error);
	if(ext_flag == 1)
	{
		//need to handle asn error.
	}
}

