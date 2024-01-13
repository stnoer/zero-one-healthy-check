#pragma once
/*
 Copyright Zero One Star. All rights reserved.

 @Author: c1-pepper
 @Date: 2024/1/16

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
#ifndef _RULESLISTCONTROLLER_H_
#define _RULESLISTCONTROLLER_H_
#include "oatpp-swagger/Types.hpp"
#include "domain/query/rules/RulesListQuery.h"
#include "domain/query/rules/RulesListPageQuery.h"
#include "domain/vo/BaseJsonVO.h"
#include "domain/vo/rules/RulesListVO.h"

using namespace oatpp;

#include OATPP_CODEGEN_BEGIN(ApiController) //<- Begin Codegen

class RulesListController : public oatpp::web::server::api::ApiController
{
	// 添加访问定义
	API_ACCESS_DECLARE(RulesListController);
public:
	// 定义查询所有规则信息接口端点描述
	ENDPOINT_INFO(queryAllRules) {
		// 定义接口通用信息
		API_DEF_ADD_COMMON_AUTH(ZH_WORDS_GETTER("rules.query-all.summary"), RulesListJsonVO::Wrapper);
		// 定义分页查询参数描述
		API_DEF_ADD_PAGE_PARAMS();
		// 定义其他查询参数描述
		API_DEF_ADD_QUERY_PARAMS(String, "shortname", ZH_WORDS_GETTER("rules.field.shortname"), "li ming", true);
	}
	// 定义查询所有用户信息接口端点处理
	API_HANDLER_ENDPOINT_QUERY_AUTH(API_M_GET, "/rules/query-all", queryAllRules, RulesListQuery, executeQueryAll(query));

	// 定义修改用户信息端点描述
	ENDPOINT_INFO(modifyRules) {
		// 定义接口通用信息
		API_DEF_ADD_COMMON_AUTH(ZH_WORDS_GETTER("rules.modify-rules.summary"), StringJsonVO::Wrapper);
		// 定义修改查询参数描述
		API_DEF_ADD_QUERY_PARAMS(Int32, "age", ZH_WORDS_GETTER("rules.field.age"), 100, false);
		API_DEF_ADD_QUERY_PARAMS(String, "shortname", ZH_WORDS_GETTER("rules.field.shortname"), "feifei", false);
		// 定义二进制流请求方式，用于选择上传文件
		info->addConsumes<oatpp::swagger::Binary>("application/octet-stream");
	}
	// 定义修改用户信息端点处理（注意：此方式只支持单文件上传，并且更新字段不是很多的场景使用）
	ENDPOINT(API_M_POST, "/rules/modify-rules", modifyRules, BODY_STRING(String, fileBody), QUERIES(QueryParams, qps), API_HANDLER_AUTH_PARAME) {
		// 解析查询参数
		API_HANDLER_QUERY_PARAM(dto, RulesListDTO, qps);
		// 执行文件保存逻辑
		API_HANDLER_RESP_VO(executeModifyRules(fileBody, dto));
	}

	// 定义查询用户菜单接口端点描述
	API_DEF_ENDPOINT_INFO_AUTH(ZH_WORDS_GETTER("rules.query-rules.summary"), queryRules, RulesListJsonVO::Wrapper);
	// 定义查询用户菜单接口端点处理
	API_HANDLER_ENDPOINT_NOPARAM_AUTH(API_M_GET, "/rules/query-rules", queryRules, executeQueryRules(authObject->getPayload()))
private:
	// 查询所有
	RulesListPageJsonVO::Wrapper executeQueryAll(const RulesListQuery::Wrapper& RulesListQuery);
	// 修改用户信息
	StringJsonVO::Wrapper executeModifyRules(const String& fileBody, const RulesListDTO::Wrapper& dto);
	// 测试菜单
	RulesListJsonVO::Wrapper executeQueryRules(const PayloadDTO& payload);
};

#include OATPP_CODEGEN_END(ApiController) //<- End Codegen

#endif // _RULESLISTCONTROLLER_H_