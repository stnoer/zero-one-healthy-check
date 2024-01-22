#pragma once

#ifndef _SELECTBASEPROJECT_SERVICE_
#define _SELECTBASEPROJECT_SERVICE_
#include <list>
#include "domain/vo/baseproject/SelectBaseProjectVO.h"
#include "domain/query/baseproject/SelectBaseProjectQuery.h"
#include "domain/dto/baseproject/SelectBaseProjectDTO.h"

/**
 * 示例服务实现，演示基础的示例服务实现
 */
class SelectBaseProjectService
{
public:
	// 分页查询所有数据
	SelectBaseProjectPageDTO::Wrapper listAll(const SelectBaseProjectQuery::Wrapper& query);
	// 保存数据
	uint64_t saveData(const SelectBaseProjectDTO::Wrapper& dto);
	// 修改数据
	bool updateData(const SelectBaseProjectDTO::Wrapper& dto);
	// 通过ID删除数据
	bool removeData(uint64_t id);
};

#endif // !_SELECTBASEPROJECT_SERVICE_

