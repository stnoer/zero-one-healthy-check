#pragma once

/*
 Copyright Zero One Star. All rights reserved.

 @Author: awei
 @Date: 2022/10/25 14:21:55

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

#ifndef _CONTRAINDICATIONS_MAPPER_
#define _CONTRAINDICATIONS_MAPPER_

#include "Mapper.h"
#include "domain/do/basis/ContraindicationsDO.h"

/**
 * ְҵ����֢������ֶ�ƥ��ӳ��
 */
class ContraindicationsMapper : public Mapper<ContraindicationsDO>
{
public:
	ContraindicationsDO mapper(ResultSet* resultSet) const override
	{
		ContraindicationsDO data;
		data.setTitle(resultSet->getString(1));
		return data;
	}
};

#endif // !_CONTRAINDICATIONS_MAPPER_