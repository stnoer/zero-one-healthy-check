#pragma once

#ifndef _ADD_BASEPROJECTLISTVO_H_
#define _ADD_BASEPROJECTLISTVO_H_

#include "../../GlobalInclude.h"
#include "../../dto/baseproject/AddBaseProjectDTO.h"

#include OATPP_CODEGEN_BEGIN(DTO)

class AddBaseProjectJsonVO : public JsonVO<AddBaseProjectDTO::Wrapper>
{
	DTO_INIT(AddBaseProjectJsonVO, JsonVO<AddBaseProjectDTO::Wrapper>);
};

class AddBaseProjectJsonPageVO : public JsonVO<AddBaseProjectPageDTO::Wrapper>
{
	DTO_INIT(AddBaseProjectJsonPageVO, JsonVO<AddBaseProjectPageDTO::Wrapper>);
};

#include OATPP_CODEGEN_END(DTO)

#endif // !_ADD_BASEPROJECTLISTVO_H_