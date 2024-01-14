#pragma once
/*
 Copyright Zero One Star. All rights reserved.

 @Author: stoner
 @Date: 2024/01/14
 @FileName: RefValueQuery
 @version: 1.0

 Licensed under the Apache License, Version 2.0 (the "License");
 you may not use this file except in compliance with the License.
 You may obtain a copy of the License at

	  https://www.apache.org/licenses/LICENSE-2.0

 Unless required by applicable law or agreed to in writing, software
 distributed under the License is distributed on an "AS IS" BASIS,
 WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 See the License for the specific language governing permissions and
 limitations under the License.
*/
#ifndef _CRITVALUEVO_H_
#define _CRITVALUEVO_H_

#include "../../GlobalInclude.h"
#include "../../dto/database/CritValueDTO.h"
#include "domain/query/PageQuery.h"

#include OATPP_CODEGEN_BEGIN(DTO)

/*
 * 获取指定项目指定危机值详情JsonVO
 */
class CritValueVO : public JsonVO<CritValueDTO::Wrapper>
{
	DTO_INIT(CritValueVO, JsonVO<CritValueDTO::Wrapper>);
	
};

#include OATPP_CODEGEN_END(DTO)
#endif