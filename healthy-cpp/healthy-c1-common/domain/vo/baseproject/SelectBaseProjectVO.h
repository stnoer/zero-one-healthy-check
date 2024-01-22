#pragma once

#ifndef _SELECT_BASEPROJECTVO_H_
#define _SELECT_BASEPROJECTVO_H_

#include "../../GlobalInclude.h"
#include "../../dto/baseproject/SelectBaseProjectDTO.h"
#include "../../query/baseproject/SelectBaseProjectQuery.h"

#include OATPP_CODEGEN_BEGIN(DTO)

class SelectBaseProjectJsonVO : public JsonVO<SelectBaseProjectDTO::Wrapper>
{
	DTO_INIT(SelectBaseProjectJsonVO, JsonVO<SelectBaseProjectDTO::Wrapper>);
};

class SelectBaseProjectPageJsonVO : public JsonVO<SelectBaseProjectPageDTO::Wrapper>
{
	DTO_INIT(SelectBaseProjectPageJsonVO, JsonVO<SelectBaseProjectPageDTO::Wrapper>);
};

#include OATPP_CODEGEN_END(DTO)

#endif // !_SELECT_BASEPROJECTVO_H_
