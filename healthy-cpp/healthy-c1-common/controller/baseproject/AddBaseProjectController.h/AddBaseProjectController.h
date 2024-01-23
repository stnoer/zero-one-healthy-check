#pragma once
/*
 Copyright Zero One Star. All rights reserved.

 @Author: firmiana
 @Date: 2024/01/23
 @FileName: AddBaseProjectController.h
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
#ifndef _ADD_REF_VALUE_CONTROLLER_H_
#define _ADD_REF_VALUE_CONTROLLER_H_

#include "ApiHelper.h"
#include "Macros.h"
#include "domain/vo/BaseJsonVO.h"
#include "../../../domain/dto/baseproject/AddBaseProjectDTO.h"

#include OATPP_CODEGEN_BEGIN(ApiController)

class AddBaseProjectController : public oatpp::web::server::api::ApiController
{
	// 定义控制器访问入口
	API_ACCESS_DECLARE(AddBaseProjectController);
public: // 定义接口
	// 新增指定项目参考值
	ENDPOINT_INFO(addBaseProject) {
		// 定义接口标题
		API_DEF_ADD_TITLE(ZH_WORDS_GETTER("common.baseproject.add.summary"));
		// 定义默认授权参数（可选定义，如果定义了，下面ENDPOINT里面需要加入API_HANDLER_AUTH_PARAME）
		API_DEF_ADD_AUTH();
		// 定义响应参数格式
		API_DEF_ADD_RSP_JSON_WRAPPER(Uint64JsonVO);
	}
	// 定义新增接口处理
	ENDPOINT(API_M_POST, "/common/baseproject/addBaseProject", addBaseProject,
		BODY_DTO(AddBaseProjectDTO::Wrapper, dto), API_HANDLER_AUTH_PARAME) {
		// 呼叫执行函数响应结果
		API_HANDLER_RESP_VO(execAddBaseProject(dto));
	}
private: // 定义接口执行函数
	// 新增指定项目参考值
	Uint64JsonVO::Wrapper execAddBaseProject(const AddBaseProjectDTO::Wrapper& dto);
};

#include OATPP_CODEGEN_END(ApiController)

#endif // !_ADD_REF_VALUE_CONTROLLER_H_