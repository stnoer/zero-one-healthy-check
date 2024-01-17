#pragma once

#ifndef _SELECT_BASEPROJECTLISTVO_H_
#define _SELECT_BASEPROJECTLISTVO_H_

#include "../../GlobalInclude.h"
#include "../../dto/baseproject/SelectBaseProjectListDTO.h"


#include OATPP_CODEGEN_BEGIN(DTO)

class SelectBaseProjectListJsonVO : public JsonVO<SelectBaseProjectListDTO::Wrapper>
{
	DTO_INIT(SelectBaseProjectListJsonVO, JsonVO<SelectBaseProjectListDTO::Wrapper>);
};

class SelectBaseProjectListJsonPageVO : public JsonVO<SelectBaseProjectListPageDTO::Wrapper>
{
	DTO_INIT(SelectBaseProjectListJsonPageVO, JsonVO<SelectBaseProjectListPageDTO::Wrapper>);
};


#include OATPP_CODEGEN_END(DTO)

#endif // !_SELECT_BASEPROJECTLISTVO_H_