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
#ifndef _CRITVALUEPAGEDTO_H_
#define _CRITVALUEPAGEDTO_H_

#include "../../GlobalInclude.h"
#include "domain/query/PageQuery.h"

#include OATPP_CODEGEN_BEGIN(DTO)

/*
 * 获取指定项目危机值列表（分页）
 */
class CritValuePageDTO : public PageQuery
{
	DTO_INIT(CritValuePageDTO, PageQuery);
	// id
	API_DTO_FIELD_DEFAULT(String, id, ZH_WORDS_GETTER("critical_value.field.id"));
	// base_project_id 项目id
	API_DTO_FIELD_DEFAULT(String, baseProjectId, ZH_WORDS_GETTER("critical_value.field.baseProjectId"));
	//level 等级
	API_DTO_FIELD_DEFAULT(String, level, ZH_WORDS_GETTER("critical_value.field.level"));
	//type 类型
	API_DTO_FIELD_DEFAULT(String, type, ZH_WORDS_GETTER("critical_value.field.type"));
	//interval_value 区间值
	API_DTO_FIELD_DEFAULT(String, intervalValue, ZH_WORDS_GETTER("critical_value.field.intervalValue"));
	// allow_sex 适合性别
	API_DTO_FIELD_DEFAULT(String, allowSex, ZH_WORDS_GETTER("critical_value.field.allowSex"));
	// min_age 年龄最低值
	API_DTO_FIELD_DEFAULT(Int64, minAge, ZH_WORDS_GETTER("critical_value.field.minAge"));
	// max_age 年龄最高值
	API_DTO_FIELD_DEFAULT(Int64, maxAge, ZH_WORDS_GETTER("critical_value.field.maxAge"));
	// department_id 所属部门
	API_DTO_FIELD_DEFAULT(String, departmentId, ZH_WORDS_GETTER("critical_value.departmentId"));
	// create_id 创建人
	API_DTO_FIELD_DEFAULT(String, createId, ZH_WORDS_GETTER("critical_value.field.createId"));
	// create_time 创建时间
	API_DTO_FIELD_DEFAULT(String, createTime, ZH_WORDS_GETTER("critical_value.field.createTime"));
	

};

#include OATPP_CODEGEN_END(DTO)
#endif
