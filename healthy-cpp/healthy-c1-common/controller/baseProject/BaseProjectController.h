#pragma once

#ifndef _BASEPROJECTCONTROLLER_H_
#define _BASEPROJECTCONTROLLER_H_

#include "oatpp-swagger/Types.hpp"
#include "domain/vo/BaseJsonVO.h"
#include "domain/vo/baseproject/AddBaseProjectVO.h"
#include "domain/vo/baseproject/SelectBaseProjectVO.h"
#include "domain/vo/baseproject/SelectBaseProjectListVO.h"
#include "domain/query/baseproject/SelectBaseProjectQuery.h"
#include "domain/query/baseproject/SelectBaseProjectListQuery.h"


using namespace oatpp;

#include OATPP_CODEGEN_BEGIN(ApiController) //<- Begin Codegen

class BaseProjectController :public oatpp::web::server::api::ApiController
{
	// 定义控制器访问入口
	API_ACCESS_DECLARE(BaseProjectController);


public:// 定义接口
	// 3.1 定义新增接口描述
	ENDPOINT_INFO(addBaseProject) {
		// 定义接口标题
		API_DEF_ADD_TITLE(ZH_WORDS_GETTER("baseproject.post.addBaseProject"));
		// 定义默认授权参数（可选定义，如果定义了，下面ENDPOINT里面需要加入API_HANDLER_AUTH_PARAME）
		API_DEF_ADD_AUTH();
		// 定义响应参数格式
		API_DEF_ADD_RSP_JSON_WRAPPER(AddBaseProjectJsonPageVO);
	}
	// 3.2 定义新增接口处理
	ENDPOINT(API_M_POST, "/baseproject/add-baseproject", addBaseProject, BODY_DTO(AddBaseProjectDTO::Wrapper, dto), API_HANDLER_AUTH_PARAME) {
		// 呼叫执行函数响应结果
		API_HANDLER_RESP_VO(execAddBaseProject(dto));
	}

	// 定义分页查询单位列表接口描述
	ENDPOINT_INFO(selectBaseProject) {
		// 定义接口标题
		API_DEF_ADD_TITLE(ZH_WORDS_GETTER("baseproject.query.selectBaseProject"));
		// 定义默认授权参数（可选定义，如果定义了，下面ENDPOINT里面需要加入API_HANDLER_AUTH_PARAME）
		API_DEF_ADD_AUTH();
		// 定义响应参数格式
		API_DEF_ADD_RSP_JSON_WRAPPER(SelectBaseProjectPageJsonVO);
		// 定义分页查询参数描述
		API_DEF_ADD_PAGE_PARAMS();
		// 定义其他查询参数描述
		API_DEF_ADD_QUERY_PARAMS(String, "id", ZH_WORDS_GETTER("common.baseproject.field.id"), "", false);
		API_DEF_ADD_QUERY_PARAMS(String, "code", ZH_WORDS_GETTER("common.baseproject.field.code"), "", false);
		API_DEF_ADD_QUERY_PARAMS(String, "name", ZH_WORDS_GETTER("common.baseproject.field.name"), "", false);
		API_DEF_ADD_QUERY_PARAMS(String, "short_name", ZH_WORDS_GETTER("common.baseproject.field.short_name"), "", false);
		API_DEF_ADD_QUERY_PARAMS(Float32, "order_num", ZH_WORDS_GETTER("common.baseproject.field.order_num"), 0.0, false);
		API_DEF_ADD_QUERY_PARAMS(String, "office_id", ZH_WORDS_GETTER("common.baseproject.field.office_id"), "", false);
		API_DEF_ADD_QUERY_PARAMS(String, "office_name", ZH_WORDS_GETTER("common.baseproject.field.office_name"), "", false);
		API_DEF_ADD_QUERY_PARAMS(String, "unit_code", ZH_WORDS_GETTER("common.baseproject.field.unit_code"), "", false);
		API_DEF_ADD_QUERY_PARAMS(String, "unit_name", ZH_WORDS_GETTER("common.baseproject.field.unit_name"), "", false);
		API_DEF_ADD_QUERY_PARAMS(String, "default_value", ZH_WORDS_GETTER("common.baseproject.field.default_value"), "", false);
		API_DEF_ADD_QUERY_PARAMS(String, "result_type", ZH_WORDS_GETTER("common.baseproject.field.result_type"), "", false);
		API_DEF_ADD_QUERY_PARAMS(String, "in_conclusion", ZH_WORDS_GETTER("common.baseproject.field.in_conclusion"), "", false);
		API_DEF_ADD_QUERY_PARAMS(String, "in_report", ZH_WORDS_GETTER("common.baseproject.field.in_report"), "", false);
		API_DEF_ADD_QUERY_PARAMS(String, "relation_code", ZH_WORDS_GETTER("common.baseproject.field.relation_code"), "", false);
		info->queryParams.add<UInt32>("del_flag").description = YamlHelper().getString(&(ServerInfo::getInstance().getZhDictNode()), "common.baseproject.field.del_flag");
		info->queryParams["del_flag"].addExample("default", 0);
		info->queryParams["del_flag"].required = false;
		API_DEF_ADD_QUERY_PARAMS(String, "create_id", ZH_WORDS_GETTER("common.baseproject.field.create_id"), "", false);
		API_DEF_ADD_QUERY_PARAMS(String, "create_time", ZH_WORDS_GETTER("common.baseproject.field.create_time"), "", false);
		API_DEF_ADD_QUERY_PARAMS(String, "update_id", ZH_WORDS_GETTER("common.baseproject.field.update_id"), "", false);
		API_DEF_ADD_QUERY_PARAMS(String, "update_time", ZH_WORDS_GETTER("common.baseproject.field.update_time"), "", false);
		API_DEF_ADD_QUERY_PARAMS(String, "delete_id", ZH_WORDS_GETTER("common.baseproject.field.delete_id"), "", false);
		API_DEF_ADD_QUERY_PARAMS(String, "delete_time", ZH_WORDS_GETTER("common.baseproject.field.delete_time"), "", false);
		API_DEF_ADD_QUERY_PARAMS(String, "department_id", ZH_WORDS_GETTER("common.baseproject.field.department_id"), "", false);
	}
	// 定义分页查询单位列表接口
	ENDPOINT(API_M_GET, "/baseproject/select-baseproject", selectBaseProject, QUERIES(QueryParams, params), API_HANDLER_AUTH_PARAME) {
		// 解析查询参数为Query领域模型
		API_HANDLER_QUERY_PARAM(query, SelectBaseProjectQuery, params);
		// 呼叫执行函数响应结果
		API_HANDLER_RESP_VO(execSelectBaseProject(query));
	}

	// 定义分页查询单位列表接口描述
	ENDPOINT_INFO(selectBaseProjectList) {
		// 定义接口标题
		API_DEF_ADD_TITLE(ZH_WORDS_GETTER("baseproject.query.selectBaseProjectList"));
		// 定义默认授权参数（可选定义，如果定义了，下面ENDPOINT里面需要加入API_HANDLER_AUTH_PARAME）
		API_DEF_ADD_AUTH();
		// 定义响应参数格式
		API_DEF_ADD_RSP_JSON_WRAPPER(SelectBaseProjectListPageJsonVO);
		// 定义分页查询参数描述
		API_DEF_ADD_PAGE_PARAMS();
		// 定义其他查询参数描述
		API_DEF_ADD_QUERY_PARAMS(List<Object<SelectBaseProjectDTO>>, "records", ZH_WORDS_GETTER("common.baseproject.field.records"), List<Object<SelectBaseProjectDTO>>(0), false);

	}
	// 定义分页查询单位列表接口
	ENDPOINT(API_M_GET, "/baseproject/select-baseprojectlist", selectBaseProjectList, QUERIES(QueryParams, params), API_HANDLER_AUTH_PARAME) {
		// 解析查询参数为Query领域模型
		API_HANDLER_QUERY_PARAM(query, SelectBaseProjectListQuery, params);
		// 呼叫执行函数响应结果
		API_HANDLER_RESP_VO(execSelectBaseProjectList(query));
	}

private:// 定义接口执行函数
	//新增数据
	Uint64JsonVO::Wrapper execAddBaseProject(const AddBaseProjectDTO::Wrapper& dto);
	//删除数据
	Uint64JsonVO::Wrapper execSelectBaseProject(const SelectBaseProjectQuery::Wrapper& query);
	//修改数据
	Uint64JsonVO::Wrapper execSelectBaseProjectList(const SelectBaseProjectListQuery::Wrapper& query);
};

#include OATPP_CODEGEN_END(ApiController) //<- End Codegen

#endif // !_BASEPROJECTCONTROLLER_H_