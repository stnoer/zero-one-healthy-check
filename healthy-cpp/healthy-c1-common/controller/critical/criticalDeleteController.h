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
	ENDPOINT_INFO(deleteCritical) {
		// 定义标题和返回类型以及授权支持
		API_DEF_ADD_COMMON_AUTH(ZH_WORDS_GETTER("crtical.delete.summary"), Uint64JsonVO::Wrapper);
		// 定义其他路径参数说明
		API_DEF_ADD_PATH_PARAMS(UInt64, "id", ZH_WORDS_GETTER("critical.field.id"), 1, true);
	}
	//定义危机值删除列表接口
	API_HANDLER_ENDPOINT_AUTH(API_M_DEL, "/critical/query-delete-critical", deleteCritical, PATH(UInt64, id), execDeleteCritical(id));
	
private:
	//定义接口执行函数
	CriticalDeleteListJsonVO::Wrapper execDeleteCritical(const UInt64& id);
};

#include OATPP_CODEGEN_END(ApiController) //<- End Codegen

#endif // _USERCONTROLLER_H_
