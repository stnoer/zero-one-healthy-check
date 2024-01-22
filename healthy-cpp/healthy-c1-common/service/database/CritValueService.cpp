/*
 Copyright Zero One Star. All rights reserved.

 @Author: stoner
 @Date: 2024/1/15 

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
#include "stdafx.h"
#include "../../domain/dto/database/CritValueDTO.h"
#include "CritValueService.h"
#include "../../domain/query/database/CritValueQuery.h"

CritValuePageDTO::Wrapper CriValueService::listAll(const CritValueQuery::Wrapper& query)
{
	return{};
}

uint64_t CriValueService::saveData(const CritValuePageDTO::Wrapper& dto)
{
	return{};

}

bool CriValueService::updateData(const CritValuePageDTO::Wrapper& dto)
{
	return{};

}

bool CriValueService::removeData(uint64_t id)
{
	return{};

}

