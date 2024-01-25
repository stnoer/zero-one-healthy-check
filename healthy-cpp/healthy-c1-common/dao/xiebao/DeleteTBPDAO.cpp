#include "DeleteTBPDAO.h"
#include "stdafx.h"
#include "SampleMapper.h"
#include <sstream>

int DeleteTBPDAO::DeleteTBP(const DeleteTBPDO& uObj)
{
    string sql = "DELETE FROM `t_base_project` WHERE `code`=?";
    return sqlSession->executeUpdate(sql, "%ull", uObj.getCode());
}
