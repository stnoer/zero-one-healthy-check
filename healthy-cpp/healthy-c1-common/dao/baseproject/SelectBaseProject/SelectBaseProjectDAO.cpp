#include "stdafx.h"
#include "SelectBaseProjectDAO.h"
#include "SelectBaseProjectMapper.h"
#include <sstream>

#define SELECTBASEPROJECT_TERAM_PARSE(query, sql) \
SqlParams params; \
sql << " WHERE 1=1"; \
if (query->id) { \
    sql << " AND `id`=?"; \
    SQLPARAMS_PUSH(params, "s", std::string, query->id.getValue("")); \
} \
if (query->code) { \
    sql << " AND `code`=?"; \
    SQLPARAMS_PUSH(params, "s", std::string, query->code.getValue("")); \
} \
if (query->name) { \
    sql << " AND `name`=?"; \
    SQLPARAMS_PUSH(params, "s", std::string, query->name.getValue("")); \
} \
if (query->short_name) { \
    sql << " AND `short_name`=?"; \
    SQLPARAMS_PUSH(params, "s", std::string, query->short_name.getValue("")); \
} \
if (query->order_num) { \
    sql << " AND `order_num`=?"; \
    SQLPARAMS_PUSH(params, "f", float, query->order_num.getValue(0.0)); \
} \
if (query->office_id) { \
    sql << " AND `office_id`=?"; \
    SQLPARAMS_PUSH(params, "s", std::string, query->office_id.getValue("")); \
} \
if (query->office_name) { \
    sql << " AND `office_name`=?"; \
    SQLPARAMS_PUSH(params, "s", std::string, query->office_name.getValue("")); \
} \
if (query->unit_code) { \
    sql << " AND `unit_code`=?"; \
    SQLPARAMS_PUSH(params, "s", std::string, query->unit_code.getValue("")); \
} \
if (query->unit_name) { \
    sql << " AND `unit_name`=?"; \
    SQLPARAMS_PUSH(params, "s", std::string, query->unit_name.getValue("")); \
} \
if (query->default_value) { \
    sql << " AND `default_value`=?"; \
    SQLPARAMS_PUSH(params, "s", std::string, query->default_value.getValue("")); \
} \
if (query->result_type) { \
    sql << " AND `result_type`=?"; \
    SQLPARAMS_PUSH(params, "s", std::string, query->result_type.getValue("")); \
} \
if (query->in_conclusion) { \
    sql << " AND `in_conclusion`=?"; \
    SQLPARAMS_PUSH(params, "s", std::string, query->in_conclusion.getValue("")); \
} \
if (query->in_report) { \
    sql << " AND `in_report`=?"; \
    SQLPARAMS_PUSH(params, "s", std::string, query->in_report.getValue("")); \
} \
if (query->relation_code) { \
    sql << " AND `relation_code`=?"; \
    SQLPARAMS_PUSH(params, "s", std::string, query->relation_code.getValue("")); \
} \
if (query->del_flag) { \
    sql << " AND `del_flag`=?"; \
    SQLPARAMS_PUSH(params, "i", int, query->del_flag.getValue(0)); \
} \
if (query->create_id) { \
    sql << " AND `create_id`=?"; \
    SQLPARAMS_PUSH(params, "s", std::string, query->create_id.getValue("")); \
} \
if (query->create_time) { \
    sql << " AND `create_time`=?"; \
    SQLPARAMS_PUSH(params, "s", std::string, query->create_time.getValue("")); \
} \
if (query->update_id) { \
    sql << " AND `update_id`=?"; \
    SQLPARAMS_PUSH(params, "s", std::string, query->update_id.getValue("")); \
} \
if (query->update_time) { \
    sql << " AND `update_time`=?"; \
    SQLPARAMS_PUSH(params, "s", std::string, query->update_time.getValue("")); \
} \
if (query->delete_id) { \
    sql << " AND `delete_id`=?"; \
    SQLPARAMS_PUSH(params, "s", std::string, query->delete_id.getValue("")); \
} \
if (query->delete_time) { \
    sql << " AND `delete_time`=?"; \
    SQLPARAMS_PUSH(params, "s", std::string, query->delete_time.getValue("")); \
} \
if (query->department_id) { \
    sql << " AND `department_id`=?"; \
    SQLPARAMS_PUSH(params, "s", std::string, query->department_id.getValue("")); \
}


uint64_t SelectBaseProjectDAO::count(const SelectBaseProjectQuery::Wrapper& query)
{
	stringstream sql;
	sql << "SELECT COUNT(*) FROM t_base_project";
    SELECTBASEPROJECT_TERAM_PARSE(query, sql);
	string sqlStr = sql.str();
	return sqlSession->executeQueryNumerical(sqlStr, params);
}

std::list<SelectBaseProjectDO> SelectBaseProjectDAO::selectWithPage(const SelectBaseProjectQuery::Wrapper& query)
{
    stringstream sql;
    sql << "SELECT id, code, name, short_name, order_num, office_id, office_name, unit_code, unit_name, default_value, result_type, in_conclusion, in_report, relation_code, del_flag, create_id, create_time, update_id, update_time, delete_id, delete_time, department_id FROM t_base_project";

    SELECTBASEPROJECT_TERAM_PARSE(query, sql);
    sql << " LIMIT " << ((query->pageIndex - 1) * query->pageSize) << "," << query->pageSize;
    SelectBaseProjectMapper mapper;
    string sqlStr = sql.str();
    return sqlSession->executeQuery<SelectBaseProjectDO, SelectBaseProjectMapper>(sqlStr, mapper, params);
}

std::list<SelectBaseProjectDO> SelectBaseProjectDAO::selectByName(const string& name)
{
    string sql = "SELECT id, code, name, short_name, order_num, office_id, office_name, unit_code, unit_name, default_value, result_type, in_conclusion, in_report, relation_code, del_flag, create_id, create_time, update_id, update_time, delete_id, delete_time, department_id FROM t_base_project WHERE `name` LIKE CONCAT('%',?,'%')";
    SelectBaseProjectMapper mapper;
    return sqlSession->executeQuery<SelectBaseProjectDO, SelectBaseProjectMapper>(sql, mapper, "%s", name);
}

uint64_t SelectBaseProjectDAO::insert(const SelectBaseProjectDO& iObj)
{
    string sql = "INSERT INTO `t_base_project` (`id`, `code`, `name`, `short_name`, `order_num`, `office_id`, `office_name`, `unit_code`, `unit_name`, `default_value`, `result_type`, `in_conclusion`, `in_report`, `relation_code`, `del_flag`, `create_id`, `create_time`, `update_id`, `update_time`, `delete_id`, `delete_time`, `department_id`) VALUES (?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?)";

    return sqlSession->executeInsert(sql, "%s%s%s%s%f%s%s%s%s%s%s%s%s%s%i%s%s%s%s%s%s%s",
        iObj.getId().c_str(),
        iObj.getCode().c_str(),
        iObj.getName().c_str(),
        iObj.getShortName().c_str(),
        iObj.getOrderNum(),
        iObj.getOfficeId().c_str(),
        iObj.getOfficeName().c_str(),
        iObj.getUnitCode().c_str(),
        iObj.getUnitName().c_str(),
        iObj.getDefaultValue().c_str(),
        iObj.getResultType().c_str(),
        iObj.getInConclusion().c_str(),
        iObj.getInReport().c_str(),
        iObj.getRelationCode().c_str(),
        iObj.getDelFlag(),
        iObj.getCreateId().c_str(),
        iObj.getCreateTime().c_str(),
        iObj.getUpdateId().c_str(),
        iObj.getUpdateTime().c_str(),
        iObj.getDeleteId().c_str(),
        iObj.getDeleteTime().c_str(),
        iObj.getDepartmentId().c_str());
}


int SelectBaseProjectDAO::update(const SelectBaseProjectDO& uObj)
{
    string sql = "UPDATE `t_base_project` SET `code`=?, `name`=?, `short_name`=?, `order_num`=?, `office_id`=?, `office_name`=?, `unit_code`=?, `unit_name`=?, `default_value`=?, `result_type`=?, `in_conclusion`=?, `in_report`=?, `relation_code`=?, `del_flag`=?, `create_id`=?, `create_time`=?, `update_id`=?, `update_time`=?, `delete_id`=?, `delete_time`=?, `department_id`=? WHERE `id`=?";
    return sqlSession->executeUpdate(sql, "%s%s%s%f%s%s%s%s%s%s%s%s%s%i%s%s%s%s%s%s%s%ull",
        uObj.getCode().c_str(),
        uObj.getName().c_str(),
        uObj.getShortName().c_str(),
        uObj.getOrderNum(),
        uObj.getOfficeId().c_str(),
        uObj.getOfficeName().c_str(),
        uObj.getUnitCode().c_str(),
        uObj.getUnitName().c_str(),
        uObj.getDefaultValue().c_str(),
        uObj.getResultType().c_str(),
        uObj.getInConclusion().c_str(),
        uObj.getInReport().c_str(),
        uObj.getRelationCode().c_str(),
        uObj.getDelFlag(),
        uObj.getCreateId().c_str(),
        uObj.getCreateTime().c_str(),
        uObj.getUpdateId().c_str(),
        uObj.getUpdateTime().c_str(),
        uObj.getDeleteId().c_str(),
        uObj.getDeleteTime().c_str(),
        uObj.getDepartmentId().c_str(),
        uObj.getId());
}

int SelectBaseProjectDAO::deleteById(uint64_t id)
{
    string sql = "DELETE FROM `t_base_project` WHERE `id`=?";
    return sqlSession->executeUpdate(sql, "%ull", id);
}
