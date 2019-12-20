/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * phy_parameters_fr2.h - this is the header file for message: Phy-ParametersFR2
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#ifndef _PHY_PARAMETERS_FR2_H_
#define _PHY_PARAMETERS_FR2_H_

#include "types.h"
#include "contants.h" 				
#include "handle_bits.h"


typedef enum {
	PHY_PARAMETERSFR2_CALIBRATIONGAPPA_SUPPORTED,
	PHY_PARAMETERSFR2_CALIBRATIONGAPPA_max = 0x7FFFFFFF
}Phy_ParametersFR2_calibrationGapPA_e;


typedef enum {
	PHY_PARAMETERSFR2_PDSCH_RE_MAPPINGFR2_N6,
	PHY_PARAMETERSFR2_PDSCH_RE_MAPPINGFR2_N20,
	PHY_PARAMETERSFR2_PDSCH_RE_MAPPINGFR2_max = 0x7FFFFFFF
}Phy_ParametersFR2_pdsch_RE_MappingFR2_e;


typedef struct {
	BOOLEAN                                                            calibrationGapPA_exist;
	Phy_ParametersFR2_calibrationGapPA_e                               calibrationGapPA;
	BOOLEAN                                                            pdsch_RE_MappingFR2_exist;
	Phy_ParametersFR2_pdsch_RE_MappingFR2_e                            pdsch_RE_MappingFR2;
	/* Extension marker start. */
}Phy_ParametersFR2_t;


extern void EncodePhy_ParametersFR2(
	Phy_ParametersFR2_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);
extern void DecodePhy_ParametersFR2(
	Phy_ParametersFR2_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);

#endif
