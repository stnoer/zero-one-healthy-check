#pragma once

#ifndef _SELECTBASEPROJECTDAO_H_
#define _SELECTBASEPROJECTDAO_H_
#include "BaseDAO.h"
#include "../../../domain/do/baseproject/SelectBaseProjectDO.h"
#include "../../../domain/query/baseproject/SelectBaseProjectQuery.h"

/**
 * 示例表数据库操作实现
 */
class SelectBaseProjectDAO : public BaseDAO
{
public:
	// 统计数据条数
	uint64_t count(const SelectBaseProjectQuery::Wrapper& query);
	// 分页查询数据
	list<SelectBaseProjectDO> selectWithPage(const SelectBaseProjectQuery::Wrapper& query);
	// 通过姓名查询数据
	list<SelectBaseProjectDO> selectByName(const string& name);
	// 插入数据
	uint64_t insert(const SelectBaseProjectDO& iObj);
	// 修改数据
	int update(const SelectBaseProjectDO& uObj);
	// 通过ID删除数据
	int deleteById(uint64_t id);
};
#endif // !_SELECTBASEPROJECTDAO_H_
