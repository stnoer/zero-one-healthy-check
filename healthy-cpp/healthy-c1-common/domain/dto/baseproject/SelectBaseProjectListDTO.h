#pragma once

#ifndef _SELECT_BASEPROJECTLISTDTO_H_
#define _SELECT_BASEPROJECTLISTDTO_H_

#include "../../GlobalInclude.h"
#include "SelectBaseProjectDTO.h"

#include OATPP_CODEGEN_BEGIN(DTO)

class SelectBaseProjectListDTO : public oatpp::DTO
{
	DTO_INIT(SelectBaseProjectListDTO, DTO);

	// records
	API_DTO_FIELD_DEFAULT(List<Object<SelectBaseProjectDTO>>, records, ZH_WORDS_GETTER("common.baseproject.field.records"));
};

class SelectBaseProjectListPageDTO : public PageDTO<SelectBaseProjectListDTO::Wrapper>
{
	DTO_INIT(SelectBaseProjectListDTO, PageDTO<SelectBaseProjectListDTO::Wrapper>);

};

#include OATPP_CODEGEN_END(DTO)
#endif // !_SELECT_BASEPROJECTLISTDTO_H_