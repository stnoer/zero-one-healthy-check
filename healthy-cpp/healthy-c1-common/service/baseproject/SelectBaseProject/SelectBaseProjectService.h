#pragma once

#ifndef _SELECTBASEPROJECTLIST_SERVICE_H_
#define _SELECTBASEPROJECTLIST_SERVICE_H_
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
};

#endif // !_SELECTBASEPROJECTLIST_SERVICE_H_

