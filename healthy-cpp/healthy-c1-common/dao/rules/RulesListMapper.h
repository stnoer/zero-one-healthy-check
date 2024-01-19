#pragma once
#ifndef _RULESLIST_MAPPER_
#define _RULESLIST_MAPPER_

#include "Mapper.h"
#include "../../domain/do/rules/RulesListDO.h"

/**
 * Ê¾Àý±í×Ö¶ÎÆ¥ÅäÓ³Éä
 */
class RulesListMapper : public Mapper<RulesListDO>
{
public:
	RulesListDO mapper(ResultSet* resultSet) const override
	{
		RulesListDO data;
		data.setId(resultSet->getString(1));
		data.setName(resultSet->getString(2));
		data.setShort_name(resultSet->getString(3));
		data.setType(resultSet->getString(4));
		data.setAllow_Sex(resultSet->getString(5));
		data.setBase_project_id(resultSet->getString(6));
		data.setCaree_advice(resultSet->getString(7));
		data.setCreate_id(resultSet->getString(8));
		data.setCreate_time(resultSet->getString(9));
		data.setDepartment_id(resultSet->getString(10));
		data.setDietary_guidance(resultSet->getString(11));
		data.setHealth_advice(resultSet->getString(12));
		data.setHealth_knowledge(resultSet->getString(13));
		data.setIn_conclusion(resultSet->getString(14));
		data.setInterval_value(resultSet->getString(15));
		data.setMax_Age(resultSet->getUInt64(16));
		data.setMin_Age(resultSet->getUInt64(17));
		data.setPositive(resultSet->getString(18));
		data.setReminder(resultSet->getString(19));
		data.setSports_guidance(resultSet->getString(20));
		return data;
	}
};

#endif // !_RULESLIST_MAPPER_