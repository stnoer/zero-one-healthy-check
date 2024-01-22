
#include "stdafx.h"
#include "SelectBaseProjectService.h"
#include "../../dao/baseproject/SelectBaseProjectDAO.h"

SelectBaseProjectPageDTO::Wrapper SelectBaseProjectService::listAll(const SelectBaseProjectQuery::Wrapper& query)
{
	// 构建返回对象
	auto pages = SelectBaseProjectPageDTO::createShared();
	pages->pageIndex = query->pageIndex;
	pages->pageSize = query->pageSize;

	// 查询数据总条数
	SelectBaseProjectDAO dao;
	uint64_t count = dao.count(query);
	if (count <= 0)
	{
		return pages;
	}

	// 分页查询数据
	pages->total = count;
	pages->calcPages();
	list<SelectBaseProjectDO> result = dao.selectWithPage(query);
	// 将DO转换成DTO
	for (SelectBaseProjectDO sub : result)
	{
		auto dto = SelectBaseProjectDTO::createShared();
		dto->id = sub.getId();
		dto->code = sub.getCode();
		dto->name = sub.getName();
		dto->short_name = sub.getShortName();
		dto->order_num = sub.getOrderNum();
		dto->office_id = sub.getOfficeId();
		dto->office_name = sub.getOfficeName();
		dto->unit_code = sub.getUnitCode();
		dto->unit_name = sub.getUnitName();
		dto->default_value = sub.getDefaultValue();
		dto->result_type = sub.getResultType();
		dto->in_conclusion = sub.getInConclusion();
		dto->in_report = sub.getInReport();
		dto->relation_code = sub.getRelationCode();
		dto->del_flag = sub.getDelFlag();
		dto->create_id = sub.getCreateId();
		dto->create_time = sub.getCreateTime();
		dto->update_id = sub.getUpdateId();
		dto->update_time = sub.getUpdateTime();
		dto->delete_id = sub.getDeleteId();
		dto->delete_time = sub.getDeleteTime();
		dto->department_id = sub.getDepartmentId();

		ZO_STAR_DOMAIN_DO_TO_DTO(dto, sub,
			id, Id,
			code, Code,
			name, Name,
			short_name, ShortName,
			order_num, OrderNum,
			office_id, OfficeId,
			office_name, OfficeName,
			unit_code, UnitCode,
			unit_name, UnitName,
			default_value, DefaultValue,
			result_type, ResultType,
			in_conclusion, InConclusion,
			in_report, InReport,
			relation_code, RelationCode,
			del_flag, DelFlag,
			create_id, CreateId,
			create_time, CreateTime,
			update_id, UpdateId,
			update_time, UpdateTime,
			delete_id, DeleteId,
			delete_time, DeleteTime,
			department_id, DepartmentId)
			pages->addData(dto);

	}
	return pages;
}

uint64_t SelectBaseProjectService::saveData(const SelectBaseProjectDTO::Wrapper& dto)
{
	// 组装DO数据
	SelectBaseProjectDO data;
	// 	data.setName(dto->name.getValue(""));
	// 	data.setSex(dto->sex.getValue(""));
	// 	data.setAge(dto->age.getValue(1));
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
		DepartmentId, department_id)

		// 执行数据添加
		SelectBaseProjectDAO dao;
	return dao.insert(data);
}

bool SelectBaseProjectService::updateData(const SelectBaseProjectDTO::Wrapper& dto)
{
	// 组装DO数据
	SelectBaseProjectDO data;
	// 	data.setId(dto->id.getValue(0));
	// 	data.setName(dto->name.getValue(""));
	// 	data.setSex(dto->sex.getValue(""));
	// 	data.setAge(dto->age.getValue(1));
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
		DepartmentId, department_id)
		// 执行数据修改
		SelectBaseProjectDAO dao;
	return dao.update(data) == 1;
}

bool SelectBaseProjectService::removeData(uint64_t id)
{
	SelectBaseProjectDAO dao;
	return dao.deleteById(id) == 1;
}
