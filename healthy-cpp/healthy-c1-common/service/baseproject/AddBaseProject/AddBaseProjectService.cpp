#include "AddBaseProjectService.h"
#include "../../../dao/baseproject/AddBaseProject/AddBaseProjectDAO.h"
#include "../../../domain/dto/baseproject/AddBaseProjectDTO.h"
#include "../../../domain/do/baseproject/AddBaseProjectDO.h"
/*
 Copyright Zero One Star. All rights reserved.

 @Author: firmiana
 @Date: 2024/01/23
 @FileName: AddBaseProjectService.cpp
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
uint64_t AddBaseProjectService::saveData(const AddBaseProjectDTO::Wrapper& dto)
{
	// 组装DO数据
	AddBaseProjectDO data;

	data.setId(dto->id.getValue(""));
	data.setCode(dto->code.getValue(""));
	data.setName(dto->name.getValue(""));
	data.setShortName(dto->short_name.getValue(""));
	data.setOrderNum(dto->order_num.getValue(0.0f));
	data.setOfficeId(dto->office_id.getValue(""));
	data.setOfficeName(dto->office_name.getValue(""));
	data.setUnitCode(dto->unit_code.getValue(""));
	data.setUnitName(dto->unit_name.getValue(""));
	data.setDefaultValue(dto->default_value.getValue(""));
	data.setResultType(dto->result_type.getValue(""));
	data.setInConclusion(dto->in_conclusion.getValue(""));
	data.setInReport(dto->in_report.getValue(""));
	data.setRelationCode(dto->relation_code.getValue(""));
	data.setDelFlag(dto->del_flag.getValue(0));
	data.setCreateId(dto->create_id.getValue(""));
	data.setCreateTime(dto->create_time.getValue(""));
	data.setUpdateId(dto->update_id.getValue(""));
	data.setUpdateTime(dto->update_time.getValue(""));
	data.setDeleteId(dto->delete_id.getValue(""));
	data.setDeleteTime(dto->delete_time.getValue(""));
	data.setDepartmentId(dto->department_id.getValue(""));

	
	ZO_STAR_DOMAIN_DTO_TO_DO(data, dto,
		Id, id,
		Code, code,
		Name, name,
		ShortName, short_name,
		OrderNum, order_num,
		OfficeId, office_id,
		OfficeName, office_name,
		UnitCode, unit_code,
		UnitName, unit_name,
		DefaultValue, default_value,
		ResultType, result_type,
		InConclusion, in_conclusion,
		InReport, in_report,
		RelationCode, relation_code,
		DelFlag, del_flag,
		CreateId, create_id,
		CreateTime, create_time,
		UpdateId, update_id,
		UpdateTime, update_time,
		DeleteId, delete_id,
		DeleteTime, delete_time,
		DepartmentId, department_id);

		// 执行数据添加
	AddBaseProjectDAO dao;
	return dao.insert(data);
}