#pragma once

#ifndef _SELECT_BASEPROJECTVO_H_
#define _SELECT_BASEPROJECTVO_H_

#include "../../GlobalInclude.h"
#include "../../dto/baseproject/SelectBaseProjectDTO.h"

#include OATPP_CODEGEN_BEGIN(DTO)

class SelectBaseProjectJsonVO : public JsonVO<SelectBaseProjectDTO::Wrapper>
{
	DTO_INIT(SelectBaseProjectJsonVO, JsonVO<SelectBaseProjectDTO::Wrapper>);
};

class SelectBaseProjectJsonPageVO : public JsonVO<SelectBaseProjectPageDTO::Wrapper>
{
	DTO_INIT(SelectBaseProjectJsonPageVO, JsonVO<SelectBaseProjectPageDTO::Wrapper>);
};

#include OATPP_CODEGEN_END(DTO)

#endif // !_SELECT_BASEPROJECTVO_H_
