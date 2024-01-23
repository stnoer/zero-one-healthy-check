#include "stdafx.h"
#include "AddBaseProjectDAO.h"
/*
 Copyright Zero One Star. All rights reserved.

 @Author: firmiana
 @Date: 2024/01/23
 @FileName: AddBaseProjectDAO.cpp
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
uint64_t AddBaseProjectDAO::insert(const AddBaseProjectDO& iObj)
{

    string sql = "INSERT INTO `t_base_project` (`id`, `code`, `name`, `short_name`, `order_num`, `office_id`, `office_name`, `unit_code`, `unit_name`, `default_value`, `result_type`, `in_conclusion`, `in_report`, `relation_code`, `del_flag`, `create_id`, `create_time`, `update_id`, `update_time`, `delete_id`, `delete_time`, `department_id`) VALUES (?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?)";

    return sqlSession->executeInsert(sql, "%s%s%s%s%f%s%s%s%s%s%s%s%s%s%i%s%s%s%s%s%s%s",
        iObj.getId().c_str(),        // %s - string
        iObj.getCode().c_str(),      // %s - string
        iObj.getName().c_str(),      // %s - string
        iObj.getShortName().c_str(), // %s - string
        iObj.getOrderNum(),          // %f - float
        iObj.getOfficeId().c_str(),  // %s - string
        iObj.getOfficeName().c_str(),// %s - string
        iObj.getUnitCode().c_str(),  // %s - string
        iObj.getUnitName().c_str(),  // %s - string
        iObj.getDefaultValue().c_str(),// %s - string
        iObj.getResultType().c_str(),// %s - string
        iObj.getInConclusion().c_str(),// %s - string
        iObj.getInReport().c_str(),  // %s - string
        iObj.getRelationCode().c_str(),// %s - string
        iObj.getDelFlag(),           // %i - int
        iObj.getCreateId().c_str(),  // %s - string
        iObj.getCreateTime().c_str(),// %s - string
        iObj.getUpdateId().c_str(),  // %s - string
        iObj.getUpdateTime().c_str(),// %s - string
        iObj.getDeleteId().c_str(),  // %s - string
        iObj.getDeleteTime().c_str(),// %s - string
        iObj.getDepartmentId().c_str() // %s - string
    );

}
