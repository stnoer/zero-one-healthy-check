#include "CritValueController.h"
#include "../../../domain/vo/database/CritValueVO.h"
#include "../../../domain/query/database/CritValuePageQuery.h"
#include "../../../service/database/CritValueService.h"


CritValuePageJsonVO::Wrapper CritValueController::execQueryPageCritValue(const CritValuePageQuery::Wrapper& query)
{
	//// 定义一个Service
	//CriValueService service;
	//// 查询数据
	//auto result = service.listAll(query);
	//// 响应结果
	//auto jvo = CritValuePageJsonVO::createShared();
	//jvo->success(result);
	//return jvo;
	return {};
}
