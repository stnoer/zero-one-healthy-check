#include "stdafx.h"
#include "ReferenceDelMapper.h"
#include <sstream>
#include "ReferenceDelDAO.h"

int ReferenceDelDAO::deleteById(string id)
{
	string sql = "DELETE FROM `relation_project_reference` WHERE `id`=?";
	return sqlSession->executeUpdate(sql, "%s", id);
}

