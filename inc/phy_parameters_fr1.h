/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * phy_parameters_fr1.h - this is the header file for message: Phy-ParametersFR1
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#ifndef _PHY_PARAMETERS_FR1_H_
#define _PHY_PARAMETERS_FR1_H_

#include "types.h"
#include "contants.h" 				
#include "handle_bits.h"


typedef enum {
	PHY_PARAMETERSFR1_PDCCHMONITORINGSINGLEOCCASION_SUPPORTED,
	PHY_PARAMETERSFR1_PDCCHMONITORINGSINGLEOCCASION_max = 0x7FFFFFFF
}Phy_ParametersFR1_pdcchMonitoringSingleOccasion_e;


typedef enum {
	PHY_PARAMETERSFR1_SCS_60KHZ_SUPPORTED,
	PHY_PARAMETERSFR1_SCS_60KHZ_max = 0x7FFFFFFF
}Phy_ParametersFR1_scs_60kHz_e;


typedef enum {
	PHY_PARAMETERSFR1_PDSCH_256QAM_FR1_SUPPORTED,
	PHY_PARAMETERSFR1_PDSCH_256QAM_FR1_max = 0x7FFFFFFF
}Phy_ParametersFR1_pdsch_256QAM_FR1_e;


typedef enum {
	PHY_PARAMETERSFR1_PDSCH_RE_MAPPINGFR1_N10,
	PHY_PARAMETERSFR1_PDSCH_RE_MAPPINGFR1_N20,
	PHY_PARAMETERSFR1_PDSCH_RE_MAPPINGFR1_max = 0x7FFFFFFF
}Phy_ParametersFR1_pdsch_RE_MappingFR1_e;


typedef struct {
	BOOLEAN                                                            pdcchMonitoringSingleOccasion_exist;
	Phy_ParametersFR1_pdcchMonitoringSingleOccasion_e                  pdcchMonitoringSingleOccasion;
	BOOLEAN                                                            scs_60kHz_exist;
	Phy_ParametersFR1_scs_60kHz_e                                      scs_60kHz;
	BOOLEAN                                                            pdsch_256QAM_FR1_exist;
	Phy_ParametersFR1_pdsch_256QAM_FR1_e                               pdsch_256QAM_FR1;
	BOOLEAN                                                            pdsch_RE_MappingFR1_exist;
	Phy_ParametersFR1_pdsch_RE_MappingFR1_e                            pdsch_RE_MappingFR1;
	/* Extension marker start. */
}Phy_ParametersFR1_t;


extern void EncodePhy_ParametersFR1(
	Phy_ParametersFR1_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);
extern void DecodePhy_ParametersFR1(
	Phy_ParametersFR1_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);

#endif
