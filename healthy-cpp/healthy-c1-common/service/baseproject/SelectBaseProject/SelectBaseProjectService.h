#pragma once
/*
 Copyright Zero One Star. All rights reserved.

 @Author: firmiana
 @Date: 2024/01/23
 @FileName: SelectBaseProjectService.h
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
#ifndef _SELECTBASEPROJECT_SERVICE_H_
#define _SELECTBASEPROJECT_SERVICE_H_
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

#endif // !_SELECTBASEPROJECT_SERVICE_H_

