#pragma once
/*
 Copyright Zero One Star. All rights reserved.

 @Author: awei
 @Date: 2022/12/03 11:01:02

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
#ifndef _BASEPROJECTQUERY_H_
#define _BASEPROJECTQUERY_H_

#include "../../GlobalInclude.h"
#include "domain/query/PageQuery.h"

#include OATPP_CODEGEN_BEGIN(DTO)

/**
 * 定义一个查询用户信息的数据传输模型
 */
class BaseProjectQuery : public PageQuery
{
	DTO_INIT(BaseProjectQuery, PageQuery);

	//id
	DTO_FIELD(String, id);
	DTO_FIELD_INFO(id) {
		info->description = ZH_WORDS_GETTER("BaseProject.field.id");
	}
	//项目代码
	DTO_FIELD(String, code);
	DTO_FIELD_INFO(code) {
		info->description = ZH_WORDS_GETTER("BaseProject.field.code");
	}
	//项目名称
	DTO_FIELD(String, name);
	DTO_FIELD_INFO(name) {
		info->description = ZH_WORDS_GETTER("BaseProject.field.name");
	}
	//简称
	DTO_FIELD(String, shortName);
	DTO_FIELD_INFO(shortName) {
		info->description = ZH_WORDS_GETTER("BaseProject.field.shortName");
	}
	//orderNum
	DTO_FIELD(Int32, orderNum);
	DTO_FIELD_INFO(orderNum) {
		info->description = ZH_WORDS_GETTER("BaseProject.field.orderNum");
	}
	//officeId
	DTO_FIELD(String, officeId);
	DTO_FIELD_INFO(officeId) {
		info->description = ZH_WORDS_GETTER("BaseProject.field.officeId");
	}
	//officeName
	DTO_FIELD(String, officeName);
	DTO_FIELD_INFO(officeName) {
		info->description = ZH_WORDS_GETTER("BaseProject.field.officeId");
	}
	//项目单位
	DTO_FIELD(String, unitName);
	DTO_FIELD_INFO(unitName) {
		info->description = ZH_WORDS_GETTER("BaseProject.field.unitName");
	}
	//默认值
	DTO_FIELD(String, defaultValue);
	DTO_FIELD_INFO(defaultValue) {
		info->description = ZH_WORDS_GETTER("BaseProject.field.defaultValue");
	}
	//结果类型
	DTO_FIELD(String, resultType);
	DTO_FIELD_INFO(resultType) {
		info->description = ZH_WORDS_GETTER("BaseProject.field.resultType");
	}
	//是否进入小结
	DTO_FIELD(String, inConclusion);
	DTO_FIELD_INFO(inConclusion) {
		info->description = ZH_WORDS_GETTER("BaseProject.field.inConclusion");
	}
	//是否进入报告
	DTO_FIELD(String, inReport);
	DTO_FIELD_INFO(inReport) {
		info->description = ZH_WORDS_GETTER("BaseProject.field.inReport");
	}
	//LIS关联码
	DTO_FIELD(String, relationCode);
	DTO_FIELD_INFO(relationCode) {
		info->description = ZH_WORDS_GETTER("BaseProject.field.relationCode");
	}
};

#include OATPP_CODEGEN_END(DTO)
#endif // !_BASEPROJECTQUERY_H_