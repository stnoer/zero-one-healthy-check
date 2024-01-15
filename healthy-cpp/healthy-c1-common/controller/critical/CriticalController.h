#pragma once
#ifndef _CRITICALCONTROLLER_H_
#define _CRITICALCONTROLLER_H_


#include "domain/vo/BaseJsonVO.h"
#include "../../domain/vo/critical/criticalVO.h"
#include "../../domain/query/critical/CriticalQuery.h"



#include OATPP_CODEGEN_BEGIN(ApiController) //<- Begin Codegen

class CriticalController : public oatpp::web::server::api::ApiController
{
	//定义控制器访问入口
	API_ACCESS_DECLARE(CriticalController);
public:

	// 定义危险值列表查询接口描述
	ENDPOINT_INFO(queryCritical) {
		// 定义接口标题
		API_DEF_ADD_TITLE(ZH_WORDS_GETTER("critical.query.summary"));
		// 定义默认授权参数（可选定义，如果定义了，下面ENDPOINT里面需要加入API_HANDLER_AUTH_PARAME）
		API_DEF_ADD_AUTH();
		// 定义响应参数格式
		API_DEF_ADD_RSP_JSON_WRAPPER(CriticalListJsonVO);
		// 定义分页查询参数描述
		API_DEF_ADD_PAGE_PARAMS();
		// 定义其他查询参数描述
		API_DEF_ADD_QUERY_PARAMS(String, "level", ZH_WORDS_GETTER("critical.field.level"), "N", false);
		API_DEF_ADD_QUERY_PARAMS(String, "type", ZH_WORDS_GETTER("critical.field.type"), "N", false);
		API_DEF_ADD_QUERY_PARAMS(String, "intervalValue", ZH_WORDS_GETTER("critical.field.intervalValue"), "N", false);
		API_DEF_ADD_QUERY_PARAMS(String, "allowSex", ZH_WORDS_GETTER("critical.field.allowSex"), "N", false);
		API_DEF_ADD_QUERY_PARAMS(UInt32, "minAge", ZH_WORDS_GETTER("critical.field.minAge"), 1, true);
		API_DEF_ADD_QUERY_PARAMS(UInt32, "maxAge", ZH_WORDS_GETTER("critical.field.maxAge"), 1, true);
	}
	//定义危机值查询列表接口
	ENDPOINT(API_M_GET, "/critical/query-critical", queryCritical, QUERIES(QueryParams, params), API_HANDLER_AUTH_PARAME) 
	{
		// 解析查询参数为Query领域模型
		API_HANDLER_QUERY_PARAM(cq, CriticalQuery, params);
		// 呼叫执行函数响应结果
		API_HANDLER_RESP_VO(execQueryCritical(cq));
	}
private:
	//定义接口执行函数
	CriticalListJsonVO::Wrapper execQueryCritical(const CriticalQuery::Wrapper& query);
};

#include OATPP_CODEGEN_END(ApiController) //<- End Codegen

#endif // _USERCONTROLLER_H_