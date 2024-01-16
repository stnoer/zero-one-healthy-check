#include "stdafx.h"
#include "ComboController.h"
//#include "../../service/sample/SampleService.h"
#include "../ApiDeclarativeServicesHelper.h"

Uint64JsonVO::Wrapper ComboController::execAddPack(const AddPackDTO::Wrapper& dto)
{
	// 定义返回数据对象
	auto jvo = Uint64JsonVO::createShared();
	// 参数校验
	// 非空校验

	// 定义一个Service
	// 执行数据新增

	//响应结果
	return jvo;
}
