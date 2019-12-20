/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * codebook_config.c - codec the message of CodebookConfig
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#include <assert.h>
#include "mem.h"
#include "codebook_config.h"


void EncodeCodebookConfig_twoTX_CodebookSubsetRestriction(
	CodebookConfig_twoTX_CodebookSubsetRestriction_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBitsMore(buff, i_encoded_field->value, i_encoded_field->bits_num, bits_iter);
}

void EncodeCodebookConfig_two(
	CodebookConfig_two_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	EncodeCodebookConfig_twoTX_CodebookSubsetRestriction(&i_encoded_field->twoTX_CodebookSubsetRestriction, buff, bits_iter, asn_error);

}

void EncodeCodebookConfig_two_one_TypeI_SinglePanel_Restriction(
	CodebookConfig_two_one_TypeI_SinglePanel_Restriction_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBitsMore(buff, i_encoded_field->value, i_encoded_field->bits_num, bits_iter);
}

void EncodeCodebookConfig_two_two_TypeI_SinglePanel_Restriction(
	CodebookConfig_two_two_TypeI_SinglePanel_Restriction_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBitsMore(buff, i_encoded_field->value, i_encoded_field->bits_num, bits_iter);
}

void EncodeCodebookConfig_four_one_TypeI_SinglePanel_Restriction(
	CodebookConfig_four_one_TypeI_SinglePanel_Restriction_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBitsMore(buff, i_encoded_field->value, i_encoded_field->bits_num, bits_iter);
}

void EncodeCodebookConfig_three_two_TypeI_SinglePanel_Restriction(
	CodebookConfig_three_two_TypeI_SinglePanel_Restriction_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBitsMore(buff, i_encoded_field->value, i_encoded_field->bits_num, bits_iter);
}

void EncodeCodebookConfig_six_one_TypeI_SinglePanel_Restriction(
	CodebookConfig_six_one_TypeI_SinglePanel_Restriction_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBitsMore(buff, i_encoded_field->value, i_encoded_field->bits_num, bits_iter);
}

void EncodeCodebookConfig_four_two_TypeI_SinglePanel_Restriction(
	CodebookConfig_four_two_TypeI_SinglePanel_Restriction_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBitsMore(buff, i_encoded_field->value, i_encoded_field->bits_num, bits_iter);
}

void EncodeCodebookConfig_eight_one_TypeI_SinglePanel_Restriction(
	CodebookConfig_eight_one_TypeI_SinglePanel_Restriction_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBitsMore(buff, i_encoded_field->value, i_encoded_field->bits_num, bits_iter);
}

void EncodeCodebookConfig_four_three_TypeI_SinglePanel_Restriction(
	CodebookConfig_four_three_TypeI_SinglePanel_Restriction_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBitsMore(buff, i_encoded_field->value, i_encoded_field->bits_num, bits_iter);
}

void EncodeCodebookConfig_six_two_TypeI_SinglePanel_Restriction(
	CodebookConfig_six_two_TypeI_SinglePanel_Restriction_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBitsMore(buff, i_encoded_field->value, i_encoded_field->bits_num, bits_iter);
}

void EncodeCodebookConfig_twelve_one_TypeI_SinglePanel_Restriction(
	CodebookConfig_twelve_one_TypeI_SinglePanel_Restriction_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBitsMore(buff, i_encoded_field->value, i_encoded_field->bits_num, bits_iter);
}

void EncodeCodebookConfig_four_four_TypeI_SinglePanel_Restriction(
	CodebookConfig_four_four_TypeI_SinglePanel_Restriction_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBitsMore(buff, i_encoded_field->value, i_encoded_field->bits_num, bits_iter);
}

void EncodeCodebookConfig_eight_two_TypeI_SinglePanel_Restriction(
	CodebookConfig_eight_two_TypeI_SinglePanel_Restriction_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBitsMore(buff, i_encoded_field->value, i_encoded_field->bits_num, bits_iter);
}

void EncodeCodebookConfig_sixteen_one_TypeI_SinglePanel_Restriction(
	CodebookConfig_sixteen_one_TypeI_SinglePanel_Restriction_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBitsMore(buff, i_encoded_field->value, i_encoded_field->bits_num, bits_iter);
}

void EncodeCodebookConfig_n1_n2(
	CodebookConfig_n1_n2_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field->type, 4, bits_iter);
	switch (i_encoded_field->type)
	{
	case CODEBOOKCONFIG_N1_N2_TWO_ONE_TYPEI_SINGLEPANEL_RESTRICTION:
		EncodeCodebookConfig_two_one_TypeI_SinglePanel_Restriction(&i_encoded_field->a.two_one_TypeI_SinglePanel_Restriction, buff, bits_iter, asn_error);
		break;

	case CODEBOOKCONFIG_N1_N2_TWO_TWO_TYPEI_SINGLEPANEL_RESTRICTION:
		EncodeCodebookConfig_two_two_TypeI_SinglePanel_Restriction(&i_encoded_field->a.two_two_TypeI_SinglePanel_Restriction, buff, bits_iter, asn_error);
		break;

	case CODEBOOKCONFIG_N1_N2_FOUR_ONE_TYPEI_SINGLEPANEL_RESTRICTION:
		EncodeCodebookConfig_four_one_TypeI_SinglePanel_Restriction(&i_encoded_field->a.four_one_TypeI_SinglePanel_Restriction, buff, bits_iter, asn_error);
		break;

	case CODEBOOKCONFIG_N1_N2_THREE_TWO_TYPEI_SINGLEPANEL_RESTRICTION:
		EncodeCodebookConfig_three_two_TypeI_SinglePanel_Restriction(&i_encoded_field->a.three_two_TypeI_SinglePanel_Restriction, buff, bits_iter, asn_error);
		break;

	case CODEBOOKCONFIG_N1_N2_SIX_ONE_TYPEI_SINGLEPANEL_RESTRICTION:
		EncodeCodebookConfig_six_one_TypeI_SinglePanel_Restriction(&i_encoded_field->a.six_one_TypeI_SinglePanel_Restriction, buff, bits_iter, asn_error);
		break;

	case CODEBOOKCONFIG_N1_N2_FOUR_TWO_TYPEI_SINGLEPANEL_RESTRICTION:
		EncodeCodebookConfig_four_two_TypeI_SinglePanel_Restriction(&i_encoded_field->a.four_two_TypeI_SinglePanel_Restriction, buff, bits_iter, asn_error);
		break;

	case CODEBOOKCONFIG_N1_N2_EIGHT_ONE_TYPEI_SINGLEPANEL_RESTRICTION:
		EncodeCodebookConfig_eight_one_TypeI_SinglePanel_Restriction(&i_encoded_field->a.eight_one_TypeI_SinglePanel_Restriction, buff, bits_iter, asn_error);
		break;

	case CODEBOOKCONFIG_N1_N2_FOUR_THREE_TYPEI_SINGLEPANEL_RESTRICTION:
		EncodeCodebookConfig_four_three_TypeI_SinglePanel_Restriction(&i_encoded_field->a.four_three_TypeI_SinglePanel_Restriction, buff, bits_iter, asn_error);
		break;

	case CODEBOOKCONFIG_N1_N2_SIX_TWO_TYPEI_SINGLEPANEL_RESTRICTION:
		EncodeCodebookConfig_six_two_TypeI_SinglePanel_Restriction(&i_encoded_field->a.six_two_TypeI_SinglePanel_Restriction, buff, bits_iter, asn_error);
		break;

	case CODEBOOKCONFIG_N1_N2_TWELVE_ONE_TYPEI_SINGLEPANEL_RESTRICTION:
		EncodeCodebookConfig_twelve_one_TypeI_SinglePanel_Restriction(&i_encoded_field->a.twelve_one_TypeI_SinglePanel_Restriction, buff, bits_iter, asn_error);
		break;

	case CODEBOOKCONFIG_N1_N2_FOUR_FOUR_TYPEI_SINGLEPANEL_RESTRICTION:
		EncodeCodebookConfig_four_four_TypeI_SinglePanel_Restriction(&i_encoded_field->a.four_four_TypeI_SinglePanel_Restriction, buff, bits_iter, asn_error);
		break;

	case CODEBOOKCONFIG_N1_N2_EIGHT_TWO_TYPEI_SINGLEPANEL_RESTRICTION:
		EncodeCodebookConfig_eight_two_TypeI_SinglePanel_Restriction(&i_encoded_field->a.eight_two_TypeI_SinglePanel_Restriction, buff, bits_iter, asn_error);
		break;

	case CODEBOOKCONFIG_N1_N2_SIXTEEN_ONE_TYPEI_SINGLEPANEL_RESTRICTION:
		EncodeCodebookConfig_sixteen_one_TypeI_SinglePanel_Restriction(&i_encoded_field->a.sixteen_one_TypeI_SinglePanel_Restriction, buff, bits_iter, asn_error);
		break;

	default:
		break;	}
}

void EncodeCodebookConfig_typeI_SinglePanel_codebookSubsetRestriction_i2(
	CodebookConfig_typeI_SinglePanel_codebookSubsetRestriction_i2_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBitsMore(buff, i_encoded_field->value, i_encoded_field->bits_num, bits_iter);
}

void EncodeCodebookConfig_moreThanTwo(
	CodebookConfig_moreThanTwo_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	if(i_encoded_field->typeI_SinglePanel_codebookSubsetRestriction_i2_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	EncodeCodebookConfig_n1_n2(&i_encoded_field->n1_n2, buff, bits_iter, asn_error);

	if(i_encoded_field->typeI_SinglePanel_codebookSubsetRestriction_i2_exist == TRUE)
	{
		EncodeCodebookConfig_typeI_SinglePanel_codebookSubsetRestriction_i2(&i_encoded_field->typeI_SinglePanel_codebookSubsetRestriction_i2, buff, bits_iter, asn_error);
	}

}

void EncodeCodebookConfig_nrOfAntennaPorts(
	CodebookConfig_nrOfAntennaPorts_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field->type, 1, bits_iter);
	switch (i_encoded_field->type)
	{
	case CODEBOOKCONFIG_NROFANTENNAPORTS_TWO:
		EncodeCodebookConfig_two(&i_encoded_field->a.two, buff, bits_iter, asn_error);
		break;

	case CODEBOOKCONFIG_NROFANTENNAPORTS_MORETHANTWO:
		EncodeCodebookConfig_moreThanTwo(&i_encoded_field->a.moreThanTwo, buff, bits_iter, asn_error);
		break;

	default:
		break;	}
}

void EncodeCodebookConfig_typeI_SinglePanel_ri_Restriction(
	CodebookConfig_typeI_SinglePanel_ri_Restriction_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBitsMore(buff, i_encoded_field->value, i_encoded_field->bits_num, bits_iter);
}

void EncodeCodebookConfig_typeI_SinglePanel(
	CodebookConfig_typeI_SinglePanel_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	EncodeCodebookConfig_nrOfAntennaPorts(&i_encoded_field->nrOfAntennaPorts, buff, bits_iter, asn_error);

	EncodeCodebookConfig_typeI_SinglePanel_ri_Restriction(&i_encoded_field->typeI_SinglePanel_ri_Restriction, buff, bits_iter, asn_error);

}

void EncodeCodebookConfig_two_two_one_TypeI_MultiPanel_Restriction(
	CodebookConfig_two_two_one_TypeI_MultiPanel_Restriction_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBitsMore(buff, i_encoded_field->value, i_encoded_field->bits_num, bits_iter);
}

void EncodeCodebookConfig_two_four_one_TypeI_MultiPanel_Restriction(
	CodebookConfig_two_four_one_TypeI_MultiPanel_Restriction_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBitsMore(buff, i_encoded_field->value, i_encoded_field->bits_num, bits_iter);
}

void EncodeCodebookConfig_four_two_one_TypeI_MultiPanel_Restriction(
	CodebookConfig_four_two_one_TypeI_MultiPanel_Restriction_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBitsMore(buff, i_encoded_field->value, i_encoded_field->bits_num, bits_iter);
}

void EncodeCodebookConfig_two_two_two_TypeI_MultiPanel_Restriction(
	CodebookConfig_two_two_two_TypeI_MultiPanel_Restriction_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBitsMore(buff, i_encoded_field->value, i_encoded_field->bits_num, bits_iter);
}

void EncodeCodebookConfig_two_eight_one_TypeI_MultiPanel_Restriction(
	CodebookConfig_two_eight_one_TypeI_MultiPanel_Restriction_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBitsMore(buff, i_encoded_field->value, i_encoded_field->bits_num, bits_iter);
}

void EncodeCodebookConfig_four_four_one_TypeI_MultiPanel_Restriction(
	CodebookConfig_four_four_one_TypeI_MultiPanel_Restriction_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBitsMore(buff, i_encoded_field->value, i_encoded_field->bits_num, bits_iter);
}

void EncodeCodebookConfig_two_four_two_TypeI_MultiPanel_Restriction(
	CodebookConfig_two_four_two_TypeI_MultiPanel_Restriction_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBitsMore(buff, i_encoded_field->value, i_encoded_field->bits_num, bits_iter);
}

void EncodeCodebookConfig_four_two_two_TypeI_MultiPanel_Restriction(
	CodebookConfig_four_two_two_TypeI_MultiPanel_Restriction_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBitsMore(buff, i_encoded_field->value, i_encoded_field->bits_num, bits_iter);
}

void EncodeCodebookConfig_ng_n1_n2(
	CodebookConfig_ng_n1_n2_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field->type, 3, bits_iter);
	switch (i_encoded_field->type)
	{
	case CODEBOOKCONFIG_NG_N1_N2_TWO_TWO_ONE_TYPEI_MULTIPANEL_RESTRICTION:
		EncodeCodebookConfig_two_two_one_TypeI_MultiPanel_Restriction(&i_encoded_field->a.two_two_one_TypeI_MultiPanel_Restriction, buff, bits_iter, asn_error);
		break;

	case CODEBOOKCONFIG_NG_N1_N2_TWO_FOUR_ONE_TYPEI_MULTIPANEL_RESTRICTION:
		EncodeCodebookConfig_two_four_one_TypeI_MultiPanel_Restriction(&i_encoded_field->a.two_four_one_TypeI_MultiPanel_Restriction, buff, bits_iter, asn_error);
		break;

	case CODEBOOKCONFIG_NG_N1_N2_FOUR_TWO_ONE_TYPEI_MULTIPANEL_RESTRICTION:
		EncodeCodebookConfig_four_two_one_TypeI_MultiPanel_Restriction(&i_encoded_field->a.four_two_one_TypeI_MultiPanel_Restriction, buff, bits_iter, asn_error);
		break;

	case CODEBOOKCONFIG_NG_N1_N2_TWO_TWO_TWO_TYPEI_MULTIPANEL_RESTRICTION:
		EncodeCodebookConfig_two_two_two_TypeI_MultiPanel_Restriction(&i_encoded_field->a.two_two_two_TypeI_MultiPanel_Restriction, buff, bits_iter, asn_error);
		break;

	case CODEBOOKCONFIG_NG_N1_N2_TWO_EIGHT_ONE_TYPEI_MULTIPANEL_RESTRICTION:
		EncodeCodebookConfig_two_eight_one_TypeI_MultiPanel_Restriction(&i_encoded_field->a.two_eight_one_TypeI_MultiPanel_Restriction, buff, bits_iter, asn_error);
		break;

	case CODEBOOKCONFIG_NG_N1_N2_FOUR_FOUR_ONE_TYPEI_MULTIPANEL_RESTRICTION:
		EncodeCodebookConfig_four_four_one_TypeI_MultiPanel_Restriction(&i_encoded_field->a.four_four_one_TypeI_MultiPanel_Restriction, buff, bits_iter, asn_error);
		break;

	case CODEBOOKCONFIG_NG_N1_N2_TWO_FOUR_TWO_TYPEI_MULTIPANEL_RESTRICTION:
		EncodeCodebookConfig_two_four_two_TypeI_MultiPanel_Restriction(&i_encoded_field->a.two_four_two_TypeI_MultiPanel_Restriction, buff, bits_iter, asn_error);
		break;

	case CODEBOOKCONFIG_NG_N1_N2_FOUR_TWO_TWO_TYPEI_MULTIPANEL_RESTRICTION:
		EncodeCodebookConfig_four_two_two_TypeI_MultiPanel_Restriction(&i_encoded_field->a.four_two_two_TypeI_MultiPanel_Restriction, buff, bits_iter, asn_error);
		break;

	default:
		break;	}
}

void EncodeCodebookConfig_ri_Restriction(
	CodebookConfig_ri_Restriction_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBitsMore(buff, i_encoded_field->value, i_encoded_field->bits_num, bits_iter);
}

void EncodeCodebookConfig_typeI_MultiPanel(
	CodebookConfig_typeI_MultiPanel_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	EncodeCodebookConfig_ng_n1_n2(&i_encoded_field->ng_n1_n2, buff, bits_iter, asn_error);

	EncodeCodebookConfig_ri_Restriction(&i_encoded_field->ri_Restriction, buff, bits_iter, asn_error);

}

void EncodeCodebookConfig_subType(
	CodebookConfig_subType_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field->type, 1, bits_iter);
	switch (i_encoded_field->type)
	{
	case CODEBOOKCONFIG_SUBTYPE_TYPEI_SINGLEPANEL:
		EncodeCodebookConfig_typeI_SinglePanel(&i_encoded_field->a.typeI_SinglePanel, buff, bits_iter, asn_error);
		break;

	case CODEBOOKCONFIG_SUBTYPE_TYPEI_MULTIPANEL:
		EncodeCodebookConfig_typeI_MultiPanel(&i_encoded_field->a.typeI_MultiPanel, buff, bits_iter, asn_error);
		break;

	default:
		break;	}
}

void EncodeCodebookConfig_type1(
	CodebookConfig_type1_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	EncodeCodebookConfig_subType(&i_encoded_field->subType, buff, bits_iter, asn_error);

	PutBits(buff, i_encoded_field->codebookMode - 1, 1, bits_iter);

}

void EncodeCodebookConfig_two_one(
	CodebookConfig_two_one_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBitsMore(buff, i_encoded_field->value, i_encoded_field->bits_num, bits_iter);
}

void EncodeCodebookConfig_two_two(
	CodebookConfig_two_two_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBitsMore(buff, i_encoded_field->value, i_encoded_field->bits_num, bits_iter);
}

void EncodeCodebookConfig_four_one(
	CodebookConfig_four_one_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBitsMore(buff, i_encoded_field->value, i_encoded_field->bits_num, bits_iter);
}

void EncodeCodebookConfig_three_two(
	CodebookConfig_three_two_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBitsMore(buff, i_encoded_field->value, i_encoded_field->bits_num, bits_iter);
}

void EncodeCodebookConfig_six_one(
	CodebookConfig_six_one_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBitsMore(buff, i_encoded_field->value, i_encoded_field->bits_num, bits_iter);
}

void EncodeCodebookConfig_four_two(
	CodebookConfig_four_two_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBitsMore(buff, i_encoded_field->value, i_encoded_field->bits_num, bits_iter);
}

void EncodeCodebookConfig_eight_one(
	CodebookConfig_eight_one_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBitsMore(buff, i_encoded_field->value, i_encoded_field->bits_num, bits_iter);
}

void EncodeCodebookConfig_four_three(
	CodebookConfig_four_three_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBitsMore(buff, i_encoded_field->value, i_encoded_field->bits_num, bits_iter);
}

void EncodeCodebookConfig_six_two(
	CodebookConfig_six_two_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBitsMore(buff, i_encoded_field->value, i_encoded_field->bits_num, bits_iter);
}

void EncodeCodebookConfig_twelve_one(
	CodebookConfig_twelve_one_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBitsMore(buff, i_encoded_field->value, i_encoded_field->bits_num, bits_iter);
}

void EncodeCodebookConfig_four_four(
	CodebookConfig_four_four_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBitsMore(buff, i_encoded_field->value, i_encoded_field->bits_num, bits_iter);
}

void EncodeCodebookConfig_eight_two(
	CodebookConfig_eight_two_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBitsMore(buff, i_encoded_field->value, i_encoded_field->bits_num, bits_iter);
}

void EncodeCodebookConfig_sixteen_one(
	CodebookConfig_sixteen_one_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBitsMore(buff, i_encoded_field->value, i_encoded_field->bits_num, bits_iter);
}

void EncodeCodebookConfig_n1_n2_codebookSubsetRestriction(
	CodebookConfig_n1_n2_codebookSubsetRestriction_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field->type, 4, bits_iter);
	switch (i_encoded_field->type)
	{
	case CODEBOOKCONFIG_N1_N2_CODEBOOKSUBSETRESTRICTION_TWO_ONE:
		EncodeCodebookConfig_two_one(&i_encoded_field->a.two_one, buff, bits_iter, asn_error);
		break;

	case CODEBOOKCONFIG_N1_N2_CODEBOOKSUBSETRESTRICTION_TWO_TWO:
		EncodeCodebookConfig_two_two(&i_encoded_field->a.two_two, buff, bits_iter, asn_error);
		break;

	case CODEBOOKCONFIG_N1_N2_CODEBOOKSUBSETRESTRICTION_FOUR_ONE:
		EncodeCodebookConfig_four_one(&i_encoded_field->a.four_one, buff, bits_iter, asn_error);
		break;

	case CODEBOOKCONFIG_N1_N2_CODEBOOKSUBSETRESTRICTION_THREE_TWO:
		EncodeCodebookConfig_three_two(&i_encoded_field->a.three_two, buff, bits_iter, asn_error);
		break;

	case CODEBOOKCONFIG_N1_N2_CODEBOOKSUBSETRESTRICTION_SIX_ONE:
		EncodeCodebookConfig_six_one(&i_encoded_field->a.six_one, buff, bits_iter, asn_error);
		break;

	case CODEBOOKCONFIG_N1_N2_CODEBOOKSUBSETRESTRICTION_FOUR_TWO:
		EncodeCodebookConfig_four_two(&i_encoded_field->a.four_two, buff, bits_iter, asn_error);
		break;

	case CODEBOOKCONFIG_N1_N2_CODEBOOKSUBSETRESTRICTION_EIGHT_ONE:
		EncodeCodebookConfig_eight_one(&i_encoded_field->a.eight_one, buff, bits_iter, asn_error);
		break;

	case CODEBOOKCONFIG_N1_N2_CODEBOOKSUBSETRESTRICTION_FOUR_THREE:
		EncodeCodebookConfig_four_three(&i_encoded_field->a.four_three, buff, bits_iter, asn_error);
		break;

	case CODEBOOKCONFIG_N1_N2_CODEBOOKSUBSETRESTRICTION_SIX_TWO:
		EncodeCodebookConfig_six_two(&i_encoded_field->a.six_two, buff, bits_iter, asn_error);
		break;

	case CODEBOOKCONFIG_N1_N2_CODEBOOKSUBSETRESTRICTION_TWELVE_ONE:
		EncodeCodebookConfig_twelve_one(&i_encoded_field->a.twelve_one, buff, bits_iter, asn_error);
		break;

	case CODEBOOKCONFIG_N1_N2_CODEBOOKSUBSETRESTRICTION_FOUR_FOUR:
		EncodeCodebookConfig_four_four(&i_encoded_field->a.four_four, buff, bits_iter, asn_error);
		break;

	case CODEBOOKCONFIG_N1_N2_CODEBOOKSUBSETRESTRICTION_EIGHT_TWO:
		EncodeCodebookConfig_eight_two(&i_encoded_field->a.eight_two, buff, bits_iter, asn_error);
		break;

	case CODEBOOKCONFIG_N1_N2_CODEBOOKSUBSETRESTRICTION_SIXTEEN_ONE:
		EncodeCodebookConfig_sixteen_one(&i_encoded_field->a.sixteen_one, buff, bits_iter, asn_error);
		break;

	default:
		break;	}
}

void EncodeCodebookConfig_typeII_RI_Restriction(
	CodebookConfig_typeII_RI_Restriction_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBitsMore(buff, i_encoded_field->value, i_encoded_field->bits_num, bits_iter);
}

void EncodeCodebookConfig_typeII(
	CodebookConfig_typeII_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	EncodeCodebookConfig_n1_n2_codebookSubsetRestriction(&i_encoded_field->n1_n2_codebookSubsetRestriction, buff, bits_iter, asn_error);

	EncodeCodebookConfig_typeII_RI_Restriction(&i_encoded_field->typeII_RI_Restriction, buff, bits_iter, asn_error);

}

void EncodeCodebookConfig_portSelectionSamplingSize(
	CodebookConfig_portSelectionSamplingSize_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 2, bits_iter);
}

void EncodeCodebookConfig_typeII_PortSelectionRI_Restriction(
	CodebookConfig_typeII_PortSelectionRI_Restriction_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBitsMore(buff, i_encoded_field->value, i_encoded_field->bits_num, bits_iter);
}

void EncodeCodebookConfig_typeII_PortSelection(
	CodebookConfig_typeII_PortSelection_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	if(i_encoded_field->portSelectionSamplingSize_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->portSelectionSamplingSize_exist == TRUE)
	{
		EncodeCodebookConfig_portSelectionSamplingSize(i_encoded_field->portSelectionSamplingSize, buff, bits_iter, asn_error);
	}

	EncodeCodebookConfig_typeII_PortSelectionRI_Restriction(&i_encoded_field->typeII_PortSelectionRI_Restriction, buff, bits_iter, asn_error);

}

void EncodeCodebookConfig_subType_1(
	CodebookConfig_subType_1_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field->type, 1, bits_iter);
	switch (i_encoded_field->type)
	{
	case CODEBOOKCONFIG_SUBTYPE_1_TYPEII:
		EncodeCodebookConfig_typeII(&i_encoded_field->a.typeII, buff, bits_iter, asn_error);
		break;

	case CODEBOOKCONFIG_SUBTYPE_1_TYPEII_PORTSELECTION:
		EncodeCodebookConfig_typeII_PortSelection(&i_encoded_field->a.typeII_PortSelection, buff, bits_iter, asn_error);
		break;

	default:
		break;	}
}

void EncodeCodebookConfig_phaseAlphabetSize(
	CodebookConfig_phaseAlphabetSize_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 1, bits_iter);
}

void EncodeCodebookConfig_numberOfBeams(
	CodebookConfig_numberOfBeams_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 2, bits_iter);
}

void EncodeCodebookConfig_type2(
	CodebookConfig_type2_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	EncodeCodebookConfig_subType_1(&i_encoded_field->subType, buff, bits_iter, asn_error);

	EncodeCodebookConfig_phaseAlphabetSize(i_encoded_field->phaseAlphabetSize, buff, bits_iter, asn_error);

	PutBits(buff, i_encoded_field->subbandAmplitude, 1, bits_iter);

	EncodeCodebookConfig_numberOfBeams(i_encoded_field->numberOfBeams, buff, bits_iter, asn_error);

}

void EncodeCodebookConfig_codebookType(
	CodebookConfig_codebookType_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field->type, 1, bits_iter);
	switch (i_encoded_field->type)
	{
	case CODEBOOKCONFIG_CODEBOOKTYPE_TYPE1:
		EncodeCodebookConfig_type1(&i_encoded_field->a.type1, buff, bits_iter, asn_error);
		break;

	case CODEBOOKCONFIG_CODEBOOKTYPE_TYPE2:
		EncodeCodebookConfig_type2(&i_encoded_field->a.type2, buff, bits_iter, asn_error);
		break;

	default:
		break;	}
}

void EncodeCodebookConfig(
	CodebookConfig_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	EncodeCodebookConfig_codebookType(&i_encoded_field->codebookType, buff, bits_iter, asn_error);

}

void DecodeCodebookConfig_twoTX_CodebookSubsetRestriction(
	CodebookConfig_twoTX_CodebookSubsetRestriction_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint32    bits_num = 0;

	bits_num = 6;
	o_decoded_field->bits_num = bits_num;
	o_decoded_field->value[0] = Get_bits(buff, bits_num, bits_iter);

}

void DecodeCodebookConfig_two(
	CodebookConfig_two_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	DecodeCodebookConfig_twoTX_CodebookSubsetRestriction(&o_decoded_field->twoTX_CodebookSubsetRestriction, buff, bits_iter, asn_error);
}

void DecodeCodebookConfig_two_one_TypeI_SinglePanel_Restriction(
	CodebookConfig_two_one_TypeI_SinglePanel_Restriction_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint32    bits_num = 0;

	bits_num = 8;
	o_decoded_field->bits_num = bits_num;
	o_decoded_field->value[0] = Get_bits(buff, bits_num, bits_iter);

}

void DecodeCodebookConfig_two_two_TypeI_SinglePanel_Restriction(
	CodebookConfig_two_two_TypeI_SinglePanel_Restriction_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint32    bits_num = 0;
	uint32    octets_num = 0;
	uint32    i = 0;

	bits_num = 64;
	o_decoded_field->bits_num = bits_num;
	octets_num = bits_num / 8 + (bits_num % 8 == 0 ? 0 : 1);

	if(bits_num % 8 != 0)
	{
		o_decoded_field->value[0] = Get_bits(buff, bits_num % 8, bits_iter);
		i = 1;
	}

	for(; i < octets_num; i++)
	{
		o_decoded_field->value[i] = Get_bits(buff, 8, bits_iter);
	}
}

void DecodeCodebookConfig_four_one_TypeI_SinglePanel_Restriction(
	CodebookConfig_four_one_TypeI_SinglePanel_Restriction_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint32    bits_num = 0;
	uint32    octets_num = 0;
	uint32    i = 0;

	bits_num = 16;
	o_decoded_field->bits_num = bits_num;
	octets_num = bits_num / 8 + (bits_num % 8 == 0 ? 0 : 1);

	if(bits_num % 8 != 0)
	{
		o_decoded_field->value[0] = Get_bits(buff, bits_num % 8, bits_iter);
		i = 1;
	}

	for(; i < octets_num; i++)
	{
		o_decoded_field->value[i] = Get_bits(buff, 8, bits_iter);
	}
}

void DecodeCodebookConfig_three_two_TypeI_SinglePanel_Restriction(
	CodebookConfig_three_two_TypeI_SinglePanel_Restriction_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint32    bits_num = 0;
	uint32    octets_num = 0;
	uint32    i = 0;

	bits_num = 96;
	o_decoded_field->bits_num = bits_num;
	octets_num = bits_num / 8 + (bits_num % 8 == 0 ? 0 : 1);

	if(bits_num % 8 != 0)
	{
		o_decoded_field->value[0] = Get_bits(buff, bits_num % 8, bits_iter);
		i = 1;
	}

	for(; i < octets_num; i++)
	{
		o_decoded_field->value[i] = Get_bits(buff, 8, bits_iter);
	}
}

void DecodeCodebookConfig_six_one_TypeI_SinglePanel_Restriction(
	CodebookConfig_six_one_TypeI_SinglePanel_Restriction_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint32    bits_num = 0;
	uint32    octets_num = 0;
	uint32    i = 0;

	bits_num = 24;
	o_decoded_field->bits_num = bits_num;
	octets_num = bits_num / 8 + (bits_num % 8 == 0 ? 0 : 1);

	if(bits_num % 8 != 0)
	{
		o_decoded_field->value[0] = Get_bits(buff, bits_num % 8, bits_iter);
		i = 1;
	}

	for(; i < octets_num; i++)
	{
		o_decoded_field->value[i] = Get_bits(buff, 8, bits_iter);
	}
}

void DecodeCodebookConfig_four_two_TypeI_SinglePanel_Restriction(
	CodebookConfig_four_two_TypeI_SinglePanel_Restriction_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint32    bits_num = 0;
	uint32    octets_num = 0;
	uint32    i = 0;

	bits_num = 128;
	o_decoded_field->bits_num = bits_num;
	octets_num = bits_num / 8 + (bits_num % 8 == 0 ? 0 : 1);

	if(bits_num % 8 != 0)
	{
		o_decoded_field->value[0] = Get_bits(buff, bits_num % 8, bits_iter);
		i = 1;
	}

	for(; i < octets_num; i++)
	{
		o_decoded_field->value[i] = Get_bits(buff, 8, bits_iter);
	}
}

void DecodeCodebookConfig_eight_one_TypeI_SinglePanel_Restriction(
	CodebookConfig_eight_one_TypeI_SinglePanel_Restriction_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint32    bits_num = 0;
	uint32    octets_num = 0;
	uint32    i = 0;

	bits_num = 32;
	o_decoded_field->bits_num = bits_num;
	octets_num = bits_num / 8 + (bits_num % 8 == 0 ? 0 : 1);

	if(bits_num % 8 != 0)
	{
		o_decoded_field->value[0] = Get_bits(buff, bits_num % 8, bits_iter);
		i = 1;
	}

	for(; i < octets_num; i++)
	{
		o_decoded_field->value[i] = Get_bits(buff, 8, bits_iter);
	}
}

void DecodeCodebookConfig_four_three_TypeI_SinglePanel_Restriction(
	CodebookConfig_four_three_TypeI_SinglePanel_Restriction_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint32    bits_num = 0;
	uint32    octets_num = 0;
	uint32    i = 0;

	bits_num = 192;
	o_decoded_field->bits_num = bits_num;
	octets_num = bits_num / 8 + (bits_num % 8 == 0 ? 0 : 1);

	if(bits_num % 8 != 0)
	{
		o_decoded_field->value[0] = Get_bits(buff, bits_num % 8, bits_iter);
		i = 1;
	}

	for(; i < octets_num; i++)
	{
		o_decoded_field->value[i] = Get_bits(buff, 8, bits_iter);
	}
}

void DecodeCodebookConfig_six_two_TypeI_SinglePanel_Restriction(
	CodebookConfig_six_two_TypeI_SinglePanel_Restriction_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint32    bits_num = 0;
	uint32    octets_num = 0;
	uint32    i = 0;

	bits_num = 192;
	o_decoded_field->bits_num = bits_num;
	octets_num = bits_num / 8 + (bits_num % 8 == 0 ? 0 : 1);

	if(bits_num % 8 != 0)
	{
		o_decoded_field->value[0] = Get_bits(buff, bits_num % 8, bits_iter);
		i = 1;
	}

	for(; i < octets_num; i++)
	{
		o_decoded_field->value[i] = Get_bits(buff, 8, bits_iter);
	}
}

void DecodeCodebookConfig_twelve_one_TypeI_SinglePanel_Restriction(
	CodebookConfig_twelve_one_TypeI_SinglePanel_Restriction_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint32    bits_num = 0;
	uint32    octets_num = 0;
	uint32    i = 0;

	bits_num = 48;
	o_decoded_field->bits_num = bits_num;
	octets_num = bits_num / 8 + (bits_num % 8 == 0 ? 0 : 1);

	if(bits_num % 8 != 0)
	{
		o_decoded_field->value[0] = Get_bits(buff, bits_num % 8, bits_iter);
		i = 1;
	}

	for(; i < octets_num; i++)
	{
		o_decoded_field->value[i] = Get_bits(buff, 8, bits_iter);
	}
}

void DecodeCodebookConfig_four_four_TypeI_SinglePanel_Restriction(
	CodebookConfig_four_four_TypeI_SinglePanel_Restriction_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint32    bits_num = 0;
	uint32    octets_num = 0;
	uint32    i = 0;

	bits_num = 256;
	o_decoded_field->bits_num = bits_num;
	octets_num = bits_num / 8 + (bits_num % 8 == 0 ? 0 : 1);

	if(bits_num % 8 != 0)
	{
		o_decoded_field->value[0] = Get_bits(buff, bits_num % 8, bits_iter);
		i = 1;
	}

	for(; i < octets_num; i++)
	{
		o_decoded_field->value[i] = Get_bits(buff, 8, bits_iter);
	}
}

void DecodeCodebookConfig_eight_two_TypeI_SinglePanel_Restriction(
	CodebookConfig_eight_two_TypeI_SinglePanel_Restriction_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint32    bits_num = 0;
	uint32    octets_num = 0;
	uint32    i = 0;

	bits_num = 256;
	o_decoded_field->bits_num = bits_num;
	octets_num = bits_num / 8 + (bits_num % 8 == 0 ? 0 : 1);

	if(bits_num % 8 != 0)
	{
		o_decoded_field->value[0] = Get_bits(buff, bits_num % 8, bits_iter);
		i = 1;
	}

	for(; i < octets_num; i++)
	{
		o_decoded_field->value[i] = Get_bits(buff, 8, bits_iter);
	}
}

void DecodeCodebookConfig_sixteen_one_TypeI_SinglePanel_Restriction(
	CodebookConfig_sixteen_one_TypeI_SinglePanel_Restriction_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint32    bits_num = 0;
	uint32    octets_num = 0;
	uint32    i = 0;

	bits_num = 64;
	o_decoded_field->bits_num = bits_num;
	octets_num = bits_num / 8 + (bits_num % 8 == 0 ? 0 : 1);

	if(bits_num % 8 != 0)
	{
		o_decoded_field->value[0] = Get_bits(buff, bits_num % 8, bits_iter);
		i = 1;
	}

	for(; i < octets_num; i++)
	{
		o_decoded_field->value[i] = Get_bits(buff, 8, bits_iter);
	}
}

void DecodeCodebookConfig_n1_n2(
	CodebookConfig_n1_n2_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint32    index = 0;

	index = Get_bits(buff, 4, bits_iter);
	o_decoded_field->type = index;
	switch (index)
	{
	case CODEBOOKCONFIG_N1_N2_TWO_ONE_TYPEI_SINGLEPANEL_RESTRICTION:
		DecodeCodebookConfig_two_one_TypeI_SinglePanel_Restriction(&o_decoded_field->a.two_one_TypeI_SinglePanel_Restriction, buff, bits_iter, asn_error);
		break;

	case CODEBOOKCONFIG_N1_N2_TWO_TWO_TYPEI_SINGLEPANEL_RESTRICTION:
		DecodeCodebookConfig_two_two_TypeI_SinglePanel_Restriction(&o_decoded_field->a.two_two_TypeI_SinglePanel_Restriction, buff, bits_iter, asn_error);
		break;

	case CODEBOOKCONFIG_N1_N2_FOUR_ONE_TYPEI_SINGLEPANEL_RESTRICTION:
		DecodeCodebookConfig_four_one_TypeI_SinglePanel_Restriction(&o_decoded_field->a.four_one_TypeI_SinglePanel_Restriction, buff, bits_iter, asn_error);
		break;

	case CODEBOOKCONFIG_N1_N2_THREE_TWO_TYPEI_SINGLEPANEL_RESTRICTION:
		DecodeCodebookConfig_three_two_TypeI_SinglePanel_Restriction(&o_decoded_field->a.three_two_TypeI_SinglePanel_Restriction, buff, bits_iter, asn_error);
		break;

	case CODEBOOKCONFIG_N1_N2_SIX_ONE_TYPEI_SINGLEPANEL_RESTRICTION:
		DecodeCodebookConfig_six_one_TypeI_SinglePanel_Restriction(&o_decoded_field->a.six_one_TypeI_SinglePanel_Restriction, buff, bits_iter, asn_error);
		break;

	case CODEBOOKCONFIG_N1_N2_FOUR_TWO_TYPEI_SINGLEPANEL_RESTRICTION:
		DecodeCodebookConfig_four_two_TypeI_SinglePanel_Restriction(&o_decoded_field->a.four_two_TypeI_SinglePanel_Restriction, buff, bits_iter, asn_error);
		break;

	case CODEBOOKCONFIG_N1_N2_EIGHT_ONE_TYPEI_SINGLEPANEL_RESTRICTION:
		DecodeCodebookConfig_eight_one_TypeI_SinglePanel_Restriction(&o_decoded_field->a.eight_one_TypeI_SinglePanel_Restriction, buff, bits_iter, asn_error);
		break;

	case CODEBOOKCONFIG_N1_N2_FOUR_THREE_TYPEI_SINGLEPANEL_RESTRICTION:
		DecodeCodebookConfig_four_three_TypeI_SinglePanel_Restriction(&o_decoded_field->a.four_three_TypeI_SinglePanel_Restriction, buff, bits_iter, asn_error);
		break;

	case CODEBOOKCONFIG_N1_N2_SIX_TWO_TYPEI_SINGLEPANEL_RESTRICTION:
		DecodeCodebookConfig_six_two_TypeI_SinglePanel_Restriction(&o_decoded_field->a.six_two_TypeI_SinglePanel_Restriction, buff, bits_iter, asn_error);
		break;

	case CODEBOOKCONFIG_N1_N2_TWELVE_ONE_TYPEI_SINGLEPANEL_RESTRICTION:
		DecodeCodebookConfig_twelve_one_TypeI_SinglePanel_Restriction(&o_decoded_field->a.twelve_one_TypeI_SinglePanel_Restriction, buff, bits_iter, asn_error);
		break;

	case CODEBOOKCONFIG_N1_N2_FOUR_FOUR_TYPEI_SINGLEPANEL_RESTRICTION:
		DecodeCodebookConfig_four_four_TypeI_SinglePanel_Restriction(&o_decoded_field->a.four_four_TypeI_SinglePanel_Restriction, buff, bits_iter, asn_error);
		break;

	case CODEBOOKCONFIG_N1_N2_EIGHT_TWO_TYPEI_SINGLEPANEL_RESTRICTION:
		DecodeCodebookConfig_eight_two_TypeI_SinglePanel_Restriction(&o_decoded_field->a.eight_two_TypeI_SinglePanel_Restriction, buff, bits_iter, asn_error);
		break;

	case CODEBOOKCONFIG_N1_N2_SIXTEEN_ONE_TYPEI_SINGLEPANEL_RESTRICTION:
		DecodeCodebookConfig_sixteen_one_TypeI_SinglePanel_Restriction(&o_decoded_field->a.sixteen_one_TypeI_SinglePanel_Restriction, buff, bits_iter, asn_error);
		break;

	default:
		break;

	}
}

void DecodeCodebookConfig_typeI_SinglePanel_codebookSubsetRestriction_i2(
	CodebookConfig_typeI_SinglePanel_codebookSubsetRestriction_i2_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint32    bits_num = 0;
	uint32    octets_num = 0;
	uint32    i = 0;

	bits_num = 16;
	o_decoded_field->bits_num = bits_num;
	octets_num = bits_num / 8 + (bits_num % 8 == 0 ? 0 : 1);

	if(bits_num % 8 != 0)
	{
		o_decoded_field->value[0] = Get_bits(buff, bits_num % 8, bits_iter);
		i = 1;
	}

	for(; i < octets_num; i++)
	{
		o_decoded_field->value[i] = Get_bits(buff, 8, bits_iter);
	}
}

void DecodeCodebookConfig_moreThanTwo(
	CodebookConfig_moreThanTwo_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	o_decoded_field->typeI_SinglePanel_codebookSubsetRestriction_i2_exist = Get_bits(buff, 1, bits_iter);
	DecodeCodebookConfig_n1_n2(&o_decoded_field->n1_n2, buff, bits_iter, asn_error);
	if(o_decoded_field->typeI_SinglePanel_codebookSubsetRestriction_i2_exist == TRUE)
	{
		DecodeCodebookConfig_typeI_SinglePanel_codebookSubsetRestriction_i2(&o_decoded_field->typeI_SinglePanel_codebookSubsetRestriction_i2, buff, bits_iter, asn_error);
	}

}

void DecodeCodebookConfig_nrOfAntennaPorts(
	CodebookConfig_nrOfAntennaPorts_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint32    index = 0;

	index = Get_bits(buff, 1, bits_iter);
	o_decoded_field->type = index;
	switch (index)
	{
	case CODEBOOKCONFIG_NROFANTENNAPORTS_TWO:
		DecodeCodebookConfig_two(&o_decoded_field->a.two, buff, bits_iter, asn_error);
		break;

	case CODEBOOKCONFIG_NROFANTENNAPORTS_MORETHANTWO:
		DecodeCodebookConfig_moreThanTwo(&o_decoded_field->a.moreThanTwo, buff, bits_iter, asn_error);
		break;

	default:
		break;

	}
}

void DecodeCodebookConfig_typeI_SinglePanel_ri_Restriction(
	CodebookConfig_typeI_SinglePanel_ri_Restriction_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint32    bits_num = 0;

	bits_num = 8;
	o_decoded_field->bits_num = bits_num;
	o_decoded_field->value[0] = Get_bits(buff, bits_num, bits_iter);

}

void DecodeCodebookConfig_typeI_SinglePanel(
	CodebookConfig_typeI_SinglePanel_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	DecodeCodebookConfig_nrOfAntennaPorts(&o_decoded_field->nrOfAntennaPorts, buff, bits_iter, asn_error);
	DecodeCodebookConfig_typeI_SinglePanel_ri_Restriction(&o_decoded_field->typeI_SinglePanel_ri_Restriction, buff, bits_iter, asn_error);
}

void DecodeCodebookConfig_two_two_one_TypeI_MultiPanel_Restriction(
	CodebookConfig_two_two_one_TypeI_MultiPanel_Restriction_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint32    bits_num = 0;

	bits_num = 8;
	o_decoded_field->bits_num = bits_num;
	o_decoded_field->value[0] = Get_bits(buff, bits_num, bits_iter);

}

void DecodeCodebookConfig_two_four_one_TypeI_MultiPanel_Restriction(
	CodebookConfig_two_four_one_TypeI_MultiPanel_Restriction_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint32    bits_num = 0;
	uint32    octets_num = 0;
	uint32    i = 0;

	bits_num = 16;
	o_decoded_field->bits_num = bits_num;
	octets_num = bits_num / 8 + (bits_num % 8 == 0 ? 0 : 1);

	if(bits_num % 8 != 0)
	{
		o_decoded_field->value[0] = Get_bits(buff, bits_num % 8, bits_iter);
		i = 1;
	}

	for(; i < octets_num; i++)
	{
		o_decoded_field->value[i] = Get_bits(buff, 8, bits_iter);
	}
}

void DecodeCodebookConfig_four_two_one_TypeI_MultiPanel_Restriction(
	CodebookConfig_four_two_one_TypeI_MultiPanel_Restriction_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint32    bits_num = 0;

	bits_num = 8;
	o_decoded_field->bits_num = bits_num;
	o_decoded_field->value[0] = Get_bits(buff, bits_num, bits_iter);

}

void DecodeCodebookConfig_two_two_two_TypeI_MultiPanel_Restriction(
	CodebookConfig_two_two_two_TypeI_MultiPanel_Restriction_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint32    bits_num = 0;
	uint32    octets_num = 0;
	uint32    i = 0;

	bits_num = 64;
	o_decoded_field->bits_num = bits_num;
	octets_num = bits_num / 8 + (bits_num % 8 == 0 ? 0 : 1);

	if(bits_num % 8 != 0)
	{
		o_decoded_field->value[0] = Get_bits(buff, bits_num % 8, bits_iter);
		i = 1;
	}

	for(; i < octets_num; i++)
	{
		o_decoded_field->value[i] = Get_bits(buff, 8, bits_iter);
	}
}

void DecodeCodebookConfig_two_eight_one_TypeI_MultiPanel_Restriction(
	CodebookConfig_two_eight_one_TypeI_MultiPanel_Restriction_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint32    bits_num = 0;
	uint32    octets_num = 0;
	uint32    i = 0;

	bits_num = 32;
	o_decoded_field->bits_num = bits_num;
	octets_num = bits_num / 8 + (bits_num % 8 == 0 ? 0 : 1);

	if(bits_num % 8 != 0)
	{
		o_decoded_field->value[0] = Get_bits(buff, bits_num % 8, bits_iter);
		i = 1;
	}

	for(; i < octets_num; i++)
	{
		o_decoded_field->value[i] = Get_bits(buff, 8, bits_iter);
	}
}

void DecodeCodebookConfig_four_four_one_TypeI_MultiPanel_Restriction(
	CodebookConfig_four_four_one_TypeI_MultiPanel_Restriction_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint32    bits_num = 0;
	uint32    octets_num = 0;
	uint32    i = 0;

	bits_num = 16;
	o_decoded_field->bits_num = bits_num;
	octets_num = bits_num / 8 + (bits_num % 8 == 0 ? 0 : 1);

	if(bits_num % 8 != 0)
	{
		o_decoded_field->value[0] = Get_bits(buff, bits_num % 8, bits_iter);
		i = 1;
	}

	for(; i < octets_num; i++)
	{
		o_decoded_field->value[i] = Get_bits(buff, 8, bits_iter);
	}
}

void DecodeCodebookConfig_two_four_two_TypeI_MultiPanel_Restriction(
	CodebookConfig_two_four_two_TypeI_MultiPanel_Restriction_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint32    bits_num = 0;
	uint32    octets_num = 0;
	uint32    i = 0;

	bits_num = 128;
	o_decoded_field->bits_num = bits_num;
	octets_num = bits_num / 8 + (bits_num % 8 == 0 ? 0 : 1);

	if(bits_num % 8 != 0)
	{
		o_decoded_field->value[0] = Get_bits(buff, bits_num % 8, bits_iter);
		i = 1;
	}

	for(; i < octets_num; i++)
	{
		o_decoded_field->value[i] = Get_bits(buff, 8, bits_iter);
	}
}

void DecodeCodebookConfig_four_two_two_TypeI_MultiPanel_Restriction(
	CodebookConfig_four_two_two_TypeI_MultiPanel_Restriction_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint32    bits_num = 0;
	uint32    octets_num = 0;
	uint32    i = 0;

	bits_num = 64;
	o_decoded_field->bits_num = bits_num;
	octets_num = bits_num / 8 + (bits_num % 8 == 0 ? 0 : 1);

	if(bits_num % 8 != 0)
	{
		o_decoded_field->value[0] = Get_bits(buff, bits_num % 8, bits_iter);
		i = 1;
	}

	for(; i < octets_num; i++)
	{
		o_decoded_field->value[i] = Get_bits(buff, 8, bits_iter);
	}
}

void DecodeCodebookConfig_ng_n1_n2(
	CodebookConfig_ng_n1_n2_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint32    index = 0;

	index = Get_bits(buff, 3, bits_iter);
	o_decoded_field->type = index;
	switch (index)
	{
	case CODEBOOKCONFIG_NG_N1_N2_TWO_TWO_ONE_TYPEI_MULTIPANEL_RESTRICTION:
		DecodeCodebookConfig_two_two_one_TypeI_MultiPanel_Restriction(&o_decoded_field->a.two_two_one_TypeI_MultiPanel_Restriction, buff, bits_iter, asn_error);
		break;

	case CODEBOOKCONFIG_NG_N1_N2_TWO_FOUR_ONE_TYPEI_MULTIPANEL_RESTRICTION:
		DecodeCodebookConfig_two_four_one_TypeI_MultiPanel_Restriction(&o_decoded_field->a.two_four_one_TypeI_MultiPanel_Restriction, buff, bits_iter, asn_error);
		break;

	case CODEBOOKCONFIG_NG_N1_N2_FOUR_TWO_ONE_TYPEI_MULTIPANEL_RESTRICTION:
		DecodeCodebookConfig_four_two_one_TypeI_MultiPanel_Restriction(&o_decoded_field->a.four_two_one_TypeI_MultiPanel_Restriction, buff, bits_iter, asn_error);
		break;

	case CODEBOOKCONFIG_NG_N1_N2_TWO_TWO_TWO_TYPEI_MULTIPANEL_RESTRICTION:
		DecodeCodebookConfig_two_two_two_TypeI_MultiPanel_Restriction(&o_decoded_field->a.two_two_two_TypeI_MultiPanel_Restriction, buff, bits_iter, asn_error);
		break;

	case CODEBOOKCONFIG_NG_N1_N2_TWO_EIGHT_ONE_TYPEI_MULTIPANEL_RESTRICTION:
		DecodeCodebookConfig_two_eight_one_TypeI_MultiPanel_Restriction(&o_decoded_field->a.two_eight_one_TypeI_MultiPanel_Restriction, buff, bits_iter, asn_error);
		break;

	case CODEBOOKCONFIG_NG_N1_N2_FOUR_FOUR_ONE_TYPEI_MULTIPANEL_RESTRICTION:
		DecodeCodebookConfig_four_four_one_TypeI_MultiPanel_Restriction(&o_decoded_field->a.four_four_one_TypeI_MultiPanel_Restriction, buff, bits_iter, asn_error);
		break;

	case CODEBOOKCONFIG_NG_N1_N2_TWO_FOUR_TWO_TYPEI_MULTIPANEL_RESTRICTION:
		DecodeCodebookConfig_two_four_two_TypeI_MultiPanel_Restriction(&o_decoded_field->a.two_four_two_TypeI_MultiPanel_Restriction, buff, bits_iter, asn_error);
		break;

	case CODEBOOKCONFIG_NG_N1_N2_FOUR_TWO_TWO_TYPEI_MULTIPANEL_RESTRICTION:
		DecodeCodebookConfig_four_two_two_TypeI_MultiPanel_Restriction(&o_decoded_field->a.four_two_two_TypeI_MultiPanel_Restriction, buff, bits_iter, asn_error);
		break;

	default:
		break;

	}
}

void DecodeCodebookConfig_ri_Restriction(
	CodebookConfig_ri_Restriction_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint32    bits_num = 0;

	bits_num = 4;
	o_decoded_field->bits_num = bits_num;
	o_decoded_field->value[0] = Get_bits(buff, bits_num, bits_iter);

}

void DecodeCodebookConfig_typeI_MultiPanel(
	CodebookConfig_typeI_MultiPanel_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	DecodeCodebookConfig_ng_n1_n2(&o_decoded_field->ng_n1_n2, buff, bits_iter, asn_error);
	DecodeCodebookConfig_ri_Restriction(&o_decoded_field->ri_Restriction, buff, bits_iter, asn_error);
}

void DecodeCodebookConfig_subType(
	CodebookConfig_subType_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint32    index = 0;

	index = Get_bits(buff, 1, bits_iter);
	o_decoded_field->type = index;
	switch (index)
	{
	case CODEBOOKCONFIG_SUBTYPE_TYPEI_SINGLEPANEL:
		DecodeCodebookConfig_typeI_SinglePanel(&o_decoded_field->a.typeI_SinglePanel, buff, bits_iter, asn_error);
		break;

	case CODEBOOKCONFIG_SUBTYPE_TYPEI_MULTIPANEL:
		DecodeCodebookConfig_typeI_MultiPanel(&o_decoded_field->a.typeI_MultiPanel, buff, bits_iter, asn_error);
		break;

	default:
		break;

	}
}

void DecodeCodebookConfig_type1(
	CodebookConfig_type1_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	DecodeCodebookConfig_subType(&o_decoded_field->subType, buff, bits_iter, asn_error);
	o_decoded_field->codebookMode = Get_bits(buff, 1, bits_iter) + 1;
}

void DecodeCodebookConfig_two_one(
	CodebookConfig_two_one_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint32    bits_num = 0;
	uint32    octets_num = 0;
	uint32    i = 0;

	bits_num = 16;
	o_decoded_field->bits_num = bits_num;
	octets_num = bits_num / 8 + (bits_num % 8 == 0 ? 0 : 1);

	if(bits_num % 8 != 0)
	{
		o_decoded_field->value[0] = Get_bits(buff, bits_num % 8, bits_iter);
		i = 1;
	}

	for(; i < octets_num; i++)
	{
		o_decoded_field->value[i] = Get_bits(buff, 8, bits_iter);
	}
}

void DecodeCodebookConfig_two_two(
	CodebookConfig_two_two_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint32    bits_num = 0;
	uint32    octets_num = 0;
	uint32    i = 0;

	bits_num = 43;
	o_decoded_field->bits_num = bits_num;
	octets_num = bits_num / 8 + (bits_num % 8 == 0 ? 0 : 1);

	if(bits_num % 8 != 0)
	{
		o_decoded_field->value[0] = Get_bits(buff, bits_num % 8, bits_iter);
		i = 1;
	}

	for(; i < octets_num; i++)
	{
		o_decoded_field->value[i] = Get_bits(buff, 8, bits_iter);
	}
}

void DecodeCodebookConfig_four_one(
	CodebookConfig_four_one_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint32    bits_num = 0;
	uint32    octets_num = 0;
	uint32    i = 0;

	bits_num = 32;
	o_decoded_field->bits_num = bits_num;
	octets_num = bits_num / 8 + (bits_num % 8 == 0 ? 0 : 1);

	if(bits_num % 8 != 0)
	{
		o_decoded_field->value[0] = Get_bits(buff, bits_num % 8, bits_iter);
		i = 1;
	}

	for(; i < octets_num; i++)
	{
		o_decoded_field->value[i] = Get_bits(buff, 8, bits_iter);
	}
}

void DecodeCodebookConfig_three_two(
	CodebookConfig_three_two_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint32    bits_num = 0;
	uint32    octets_num = 0;
	uint32    i = 0;

	bits_num = 59;
	o_decoded_field->bits_num = bits_num;
	octets_num = bits_num / 8 + (bits_num % 8 == 0 ? 0 : 1);

	if(bits_num % 8 != 0)
	{
		o_decoded_field->value[0] = Get_bits(buff, bits_num % 8, bits_iter);
		i = 1;
	}

	for(; i < octets_num; i++)
	{
		o_decoded_field->value[i] = Get_bits(buff, 8, bits_iter);
	}
}

void DecodeCodebookConfig_six_one(
	CodebookConfig_six_one_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint32    bits_num = 0;
	uint32    octets_num = 0;
	uint32    i = 0;

	bits_num = 48;
	o_decoded_field->bits_num = bits_num;
	octets_num = bits_num / 8 + (bits_num % 8 == 0 ? 0 : 1);

	if(bits_num % 8 != 0)
	{
		o_decoded_field->value[0] = Get_bits(buff, bits_num % 8, bits_iter);
		i = 1;
	}

	for(; i < octets_num; i++)
	{
		o_decoded_field->value[i] = Get_bits(buff, 8, bits_iter);
	}
}

void DecodeCodebookConfig_four_two(
	CodebookConfig_four_two_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint32    bits_num = 0;
	uint32    octets_num = 0;
	uint32    i = 0;

	bits_num = 75;
	o_decoded_field->bits_num = bits_num;
	octets_num = bits_num / 8 + (bits_num % 8 == 0 ? 0 : 1);

	if(bits_num % 8 != 0)
	{
		o_decoded_field->value[0] = Get_bits(buff, bits_num % 8, bits_iter);
		i = 1;
	}

	for(; i < octets_num; i++)
	{
		o_decoded_field->value[i] = Get_bits(buff, 8, bits_iter);
	}
}

void DecodeCodebookConfig_eight_one(
	CodebookConfig_eight_one_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint32    bits_num = 0;
	uint32    octets_num = 0;
	uint32    i = 0;

	bits_num = 64;
	o_decoded_field->bits_num = bits_num;
	octets_num = bits_num / 8 + (bits_num % 8 == 0 ? 0 : 1);

	if(bits_num % 8 != 0)
	{
		o_decoded_field->value[0] = Get_bits(buff, bits_num % 8, bits_iter);
		i = 1;
	}

	for(; i < octets_num; i++)
	{
		o_decoded_field->value[i] = Get_bits(buff, 8, bits_iter);
	}
}

void DecodeCodebookConfig_four_three(
	CodebookConfig_four_three_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint32    bits_num = 0;
	uint32    octets_num = 0;
	uint32    i = 0;

	bits_num = 107;
	o_decoded_field->bits_num = bits_num;
	octets_num = bits_num / 8 + (bits_num % 8 == 0 ? 0 : 1);

	if(bits_num % 8 != 0)
	{
		o_decoded_field->value[0] = Get_bits(buff, bits_num % 8, bits_iter);
		i = 1;
	}

	for(; i < octets_num; i++)
	{
		o_decoded_field->value[i] = Get_bits(buff, 8, bits_iter);
	}
}

void DecodeCodebookConfig_six_two(
	CodebookConfig_six_two_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint32    bits_num = 0;
	uint32    octets_num = 0;
	uint32    i = 0;

	bits_num = 107;
	o_decoded_field->bits_num = bits_num;
	octets_num = bits_num / 8 + (bits_num % 8 == 0 ? 0 : 1);

	if(bits_num % 8 != 0)
	{
		o_decoded_field->value[0] = Get_bits(buff, bits_num % 8, bits_iter);
		i = 1;
	}

	for(; i < octets_num; i++)
	{
		o_decoded_field->value[i] = Get_bits(buff, 8, bits_iter);
	}
}

void DecodeCodebookConfig_twelve_one(
	CodebookConfig_twelve_one_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint32    bits_num = 0;
	uint32    octets_num = 0;
	uint32    i = 0;

	bits_num = 96;
	o_decoded_field->bits_num = bits_num;
	octets_num = bits_num / 8 + (bits_num % 8 == 0 ? 0 : 1);

	if(bits_num % 8 != 0)
	{
		o_decoded_field->value[0] = Get_bits(buff, bits_num % 8, bits_iter);
		i = 1;
	}

	for(; i < octets_num; i++)
	{
		o_decoded_field->value[i] = Get_bits(buff, 8, bits_iter);
	}
}

void DecodeCodebookConfig_four_four(
	CodebookConfig_four_four_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint32    bits_num = 0;
	uint32    octets_num = 0;
	uint32    i = 0;

	bits_num = 139;
	o_decoded_field->bits_num = bits_num;
	octets_num = bits_num / 8 + (bits_num % 8 == 0 ? 0 : 1);

	if(bits_num % 8 != 0)
	{
		o_decoded_field->value[0] = Get_bits(buff, bits_num % 8, bits_iter);
		i = 1;
	}

	for(; i < octets_num; i++)
	{
		o_decoded_field->value[i] = Get_bits(buff, 8, bits_iter);
	}
}

void DecodeCodebookConfig_eight_two(
	CodebookConfig_eight_two_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint32    bits_num = 0;
	uint32    octets_num = 0;
	uint32    i = 0;

	bits_num = 139;
	o_decoded_field->bits_num = bits_num;
	octets_num = bits_num / 8 + (bits_num % 8 == 0 ? 0 : 1);

	if(bits_num % 8 != 0)
	{
		o_decoded_field->value[0] = Get_bits(buff, bits_num % 8, bits_iter);
		i = 1;
	}

	for(; i < octets_num; i++)
	{
		o_decoded_field->value[i] = Get_bits(buff, 8, bits_iter);
	}
}

void DecodeCodebookConfig_sixteen_one(
	CodebookConfig_sixteen_one_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint32    bits_num = 0;
	uint32    octets_num = 0;
	uint32    i = 0;

	bits_num = 128;
	o_decoded_field->bits_num = bits_num;
	octets_num = bits_num / 8 + (bits_num % 8 == 0 ? 0 : 1);

	if(bits_num % 8 != 0)
	{
		o_decoded_field->value[0] = Get_bits(buff, bits_num % 8, bits_iter);
		i = 1;
	}

	for(; i < octets_num; i++)
	{
		o_decoded_field->value[i] = Get_bits(buff, 8, bits_iter);
	}
}

void DecodeCodebookConfig_n1_n2_codebookSubsetRestriction(
	CodebookConfig_n1_n2_codebookSubsetRestriction_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint32    index = 0;

	index = Get_bits(buff, 4, bits_iter);
	o_decoded_field->type = index;
	switch (index)
	{
	case CODEBOOKCONFIG_N1_N2_CODEBOOKSUBSETRESTRICTION_TWO_ONE:
		DecodeCodebookConfig_two_one(&o_decoded_field->a.two_one, buff, bits_iter, asn_error);
		break;

	case CODEBOOKCONFIG_N1_N2_CODEBOOKSUBSETRESTRICTION_TWO_TWO:
		DecodeCodebookConfig_two_two(&o_decoded_field->a.two_two, buff, bits_iter, asn_error);
		break;

	case CODEBOOKCONFIG_N1_N2_CODEBOOKSUBSETRESTRICTION_FOUR_ONE:
		DecodeCodebookConfig_four_one(&o_decoded_field->a.four_one, buff, bits_iter, asn_error);
		break;

	case CODEBOOKCONFIG_N1_N2_CODEBOOKSUBSETRESTRICTION_THREE_TWO:
		DecodeCodebookConfig_three_two(&o_decoded_field->a.three_two, buff, bits_iter, asn_error);
		break;

	case CODEBOOKCONFIG_N1_N2_CODEBOOKSUBSETRESTRICTION_SIX_ONE:
		DecodeCodebookConfig_six_one(&o_decoded_field->a.six_one, buff, bits_iter, asn_error);
		break;

	case CODEBOOKCONFIG_N1_N2_CODEBOOKSUBSETRESTRICTION_FOUR_TWO:
		DecodeCodebookConfig_four_two(&o_decoded_field->a.four_two, buff, bits_iter, asn_error);
		break;

	case CODEBOOKCONFIG_N1_N2_CODEBOOKSUBSETRESTRICTION_EIGHT_ONE:
		DecodeCodebookConfig_eight_one(&o_decoded_field->a.eight_one, buff, bits_iter, asn_error);
		break;

	case CODEBOOKCONFIG_N1_N2_CODEBOOKSUBSETRESTRICTION_FOUR_THREE:
		DecodeCodebookConfig_four_three(&o_decoded_field->a.four_three, buff, bits_iter, asn_error);
		break;

	case CODEBOOKCONFIG_N1_N2_CODEBOOKSUBSETRESTRICTION_SIX_TWO:
		DecodeCodebookConfig_six_two(&o_decoded_field->a.six_two, buff, bits_iter, asn_error);
		break;

	case CODEBOOKCONFIG_N1_N2_CODEBOOKSUBSETRESTRICTION_TWELVE_ONE:
		DecodeCodebookConfig_twelve_one(&o_decoded_field->a.twelve_one, buff, bits_iter, asn_error);
		break;

	case CODEBOOKCONFIG_N1_N2_CODEBOOKSUBSETRESTRICTION_FOUR_FOUR:
		DecodeCodebookConfig_four_four(&o_decoded_field->a.four_four, buff, bits_iter, asn_error);
		break;

	case CODEBOOKCONFIG_N1_N2_CODEBOOKSUBSETRESTRICTION_EIGHT_TWO:
		DecodeCodebookConfig_eight_two(&o_decoded_field->a.eight_two, buff, bits_iter, asn_error);
		break;

	case CODEBOOKCONFIG_N1_N2_CODEBOOKSUBSETRESTRICTION_SIXTEEN_ONE:
		DecodeCodebookConfig_sixteen_one(&o_decoded_field->a.sixteen_one, buff, bits_iter, asn_error);
		break;

	default:
		break;

	}
}

void DecodeCodebookConfig_typeII_RI_Restriction(
	CodebookConfig_typeII_RI_Restriction_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint32    bits_num = 0;

	bits_num = 2;
	o_decoded_field->bits_num = bits_num;
	o_decoded_field->value[0] = Get_bits(buff, bits_num, bits_iter);

}

void DecodeCodebookConfig_typeII(
	CodebookConfig_typeII_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	DecodeCodebookConfig_n1_n2_codebookSubsetRestriction(&o_decoded_field->n1_n2_codebookSubsetRestriction, buff, bits_iter, asn_error);
	DecodeCodebookConfig_typeII_RI_Restriction(&o_decoded_field->typeII_RI_Restriction, buff, bits_iter, asn_error);
}

void DecodeCodebookConfig_portSelectionSamplingSize(
	CodebookConfig_portSelectionSamplingSize_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = Get_bits(buff, 2, bits_iter);
}

void DecodeCodebookConfig_typeII_PortSelectionRI_Restriction(
	CodebookConfig_typeII_PortSelectionRI_Restriction_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint32    bits_num = 0;

	bits_num = 2;
	o_decoded_field->bits_num = bits_num;
	o_decoded_field->value[0] = Get_bits(buff, bits_num, bits_iter);

}

void DecodeCodebookConfig_typeII_PortSelection(
	CodebookConfig_typeII_PortSelection_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	o_decoded_field->portSelectionSamplingSize_exist = Get_bits(buff, 1, bits_iter);
	if(o_decoded_field->portSelectionSamplingSize_exist == TRUE)
	{
		DecodeCodebookConfig_portSelectionSamplingSize(&o_decoded_field->portSelectionSamplingSize, buff, bits_iter, asn_error);
	}

	DecodeCodebookConfig_typeII_PortSelectionRI_Restriction(&o_decoded_field->typeII_PortSelectionRI_Restriction, buff, bits_iter, asn_error);
}

void DecodeCodebookConfig_subType_1(
	CodebookConfig_subType_1_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint32    index = 0;

	index = Get_bits(buff, 1, bits_iter);
	o_decoded_field->type = index;
	switch (index)
	{
	case CODEBOOKCONFIG_SUBTYPE_1_TYPEII:
		DecodeCodebookConfig_typeII(&o_decoded_field->a.typeII, buff, bits_iter, asn_error);
		break;

	case CODEBOOKCONFIG_SUBTYPE_1_TYPEII_PORTSELECTION:
		DecodeCodebookConfig_typeII_PortSelection(&o_decoded_field->a.typeII_PortSelection, buff, bits_iter, asn_error);
		break;

	default:
		break;

	}
}

void DecodeCodebookConfig_phaseAlphabetSize(
	CodebookConfig_phaseAlphabetSize_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = Get_bits(buff, 1, bits_iter);
}

void DecodeCodebookConfig_numberOfBeams(
	CodebookConfig_numberOfBeams_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = Get_bits(buff, 2, bits_iter);
}

void DecodeCodebookConfig_type2(
	CodebookConfig_type2_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	DecodeCodebookConfig_subType_1(&o_decoded_field->subType, buff, bits_iter, asn_error);
	DecodeCodebookConfig_phaseAlphabetSize(&o_decoded_field->phaseAlphabetSize, buff, bits_iter, asn_error);
	o_decoded_field->subbandAmplitude = Get_bits(buff, 1, bits_iter);
	DecodeCodebookConfig_numberOfBeams(&o_decoded_field->numberOfBeams, buff, bits_iter, asn_error);
}

void DecodeCodebookConfig_codebookType(
	CodebookConfig_codebookType_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint32    index = 0;

	index = Get_bits(buff, 1, bits_iter);
	o_decoded_field->type = index;
	switch (index)
	{
	case CODEBOOKCONFIG_CODEBOOKTYPE_TYPE1:
		DecodeCodebookConfig_type1(&o_decoded_field->a.type1, buff, bits_iter, asn_error);
		break;

	case CODEBOOKCONFIG_CODEBOOKTYPE_TYPE2:
		DecodeCodebookConfig_type2(&o_decoded_field->a.type2, buff, bits_iter, asn_error);
		break;

	default:
		break;

	}
}

void DecodeCodebookConfig(
	CodebookConfig_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	DecodeCodebookConfig_codebookType(&o_decoded_field->codebookType, buff, bits_iter, asn_error);
}

