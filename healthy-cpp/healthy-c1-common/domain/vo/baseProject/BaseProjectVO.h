#pragma once

#ifndef _BASEPROJECT_VO_
#define _BASEPROJECT_VO_

#include "../../GlobalInclude.h"
#include "../../dto/baseProject/BaseProjectDTO.h"

#include OATPP_CODEGEN_BEGIN(DTO)

/**
 * 基础项目显示JsonVO，用于响应给客户端的Json对象
 */
class BaseProjectJsonVO : public JsonVO<BaseProjectDTO::Wrapper> {
	DTO_INIT(BaseProjectJsonVO, JsonVO<BaseProjectDTO::Wrapper>);
};

/**
 * 基础项目分页显示JsonVO，用于响应给客户端的Json对象
 */
class BaseProjectPageJsonVO : public JsonVO<BaseProjectPageDTO::Wrapper> {
	DTO_INIT(BaseProjectPageJsonVO, JsonVO<BaseProjectPageDTO::Wrapper>);
};

#include OATPP_CODEGEN_END(DTO)

#endif // !_BASEPROJECT_VO_