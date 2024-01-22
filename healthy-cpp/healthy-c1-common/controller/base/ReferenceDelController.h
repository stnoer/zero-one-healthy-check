#pragma once
/*
 Copyright Zero One Star. All rights reserved.

 @Author: awei
 @Date: 2022/12/01 17:39:36

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
#ifndef _REFERENCEDELCONTROLLER_H_
#define _REFERENCEDELCONTROLLER_H_

#include "domain/vo/BaseJsonVO.h"
#include "../../domain/vo/base/ReferenceDelVO.h"
#include "../../domain/dto/base/ReferenceDelDTO.h"


#include OATPP_CODEGEN_BEGIN(ApiController) //<- Begin Codegen

class ReferenceDelController : public oatpp::web::server::api::ApiController
{
	// 定义控制器访问入口
	API_ACCESS_DECLARE(ReferenceDelController);
public://定义接口

	// 3.1 定义删除接口描述
	ENDPOINT_INFO(removeReference) {
		// 定义标题和返回类型以及授权支持
		API_DEF_ADD_COMMON_AUTH(ZH_WORDS_GETTER("base.reference.delete.summary"), ReferenceDelJsonVO::Wrapper);
		// 定义其他路径参数说明//有待商榷*
		API_DEF_ADD_PATH_PARAMS(UInt64, "id", ZH_WORDS_GETTER("base.reference.id"), 1, true);
	}
	// 3.2 定义删除接口处理
	API_HANDLER_ENDPOINT_AUTH(API_M_DEL, "/base/removeReference", removeReference, PATH(UInt64, id), execRemoveReference(id));

	
	


private://定义接口执行函数
	ReferenceDelJsonVO::Wrapper execRemoveReference(UInt64 id);
};


#include OATPP_CODEGEN_END(ApiController) //<- End Codegen

#endif // _REFERENCEDELCONTROLLER_H_