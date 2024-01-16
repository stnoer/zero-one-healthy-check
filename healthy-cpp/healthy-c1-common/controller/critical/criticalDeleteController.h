#pragma once
#ifndef _CRITICALDELETECONTROLLER_H_
#define _CRITICALDELETECONTROLLER_H_


#include "domain/vo/BaseJsonVO.h"
#include "../../domain/vo/critical/CriticalDeleteVO.h"
#include "../../domain/query/critical/CriticalQuery.h"



#include OATPP_CODEGEN_BEGIN(ApiController) //<- Begin Codegen

class CriticalDeleteController : public oatpp::web::server::api::ApiController
{
	//定义控制器访问入口
	API_ACCESS_DECLARE(CriticalDeleteController);
public:

	// 定义危险值列表查询接口描述
	ENDPOINT_INFO(queryDeleteCritical) {
		// 定义接口标题
		API_DEF_ADD_TITLE(ZH_WORDS_GETTER("critical.query.summary"));
		// 定义默认授权参数（可选定义，如果定义了，下面ENDPOINT里面需要加入API_HANDLER_AUTH_PARAME）
		API_DEF_ADD_AUTH();
		// 定义响应参数格式
		API_DEF_ADD_RSP_JSON_WRAPPER(CriticalDeleteListJsonVO);
		// 定义分页查询参数描述
		API_DEF_ADD_PAGE_PARAMS();
		// 定义其他查询参数描述
	}
	//定义危机值查询列表接口
	ENDPOINT(API_M_DEL, "/critical/query-delete-critical", queryDeleteCritical, QUERIES(QueryParams, params), API_HANDLER_AUTH_PARAME)
	{
		// 解析查询参数为Query领域模型
		API_HANDLER_QUERY_PARAM(cq, CriticalQuery, params);
		// 呼叫执行函数响应结果
		API_HANDLER_RESP_VO(execDeleteCritical(cq));
		return createResponse(Status::CODE_200, "OK");
	}
private:
	//定义接口执行函数
	CriticalDeleteListJsonVO::Wrapper execDeleteCritical(const CriticalQuery::Wrapper& query);
};

#include OATPP_CODEGEN_END(ApiController) //<- End Codegen

#endif // _USERCONTROLLER_H_
