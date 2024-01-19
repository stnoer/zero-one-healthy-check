#include "stdafx.h"
#include "ComboController.h"
//#include "../../service/sample/SampleService.h"
#include "../ApiDeclarativeServicesHelper.h"

AddPackJsonVO::Wrapper ComboController::execAddPack(const AddPackDTO::Wrapper& dto)
{
	// 定义返回数据对象
	auto jvo = AddPackJsonVO::createShared();
	// 参数校验
	// 非空校验

	// 定义一个Service
	// 执行数据新增

	//响应结果
	return jvo;
}

DelPackJsonVO::Wrapper ComboController::execDelPack(const DelPackDTO::Wrapper& dto)
{
	// 定义返回数据对象
	auto jvo = DelPackJsonVO::createShared();
	// 参数校验
	// 非空校验

	// 定义一个Service
	// 执行数据新增

	//响应结果
	return jvo;
}

UpdatePackJsonVO::Wrapper ComboController::execUpdatePack(const UpdatePackDTO::Wrapper& dto)
{
	// 定义返回数据对象
	auto jvo = UpdatePackJsonVO::createShared();
	// 参数校验
	// 非空校验

	// 定义一个Service
	// 执行数据新增

	//响应结果
	return jvo;
}
