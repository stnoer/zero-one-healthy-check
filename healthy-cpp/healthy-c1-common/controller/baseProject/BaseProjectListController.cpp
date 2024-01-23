#include "stdafx.h"
#include "BaseProjectController.h"
#include "../ApiDeclarativeServicesHelper.h"
#include "service/baseproject/SelectBaseProject/SelectBaseProjectService.h"

Uint64JsonVO::Wrapper BaseProjectController::execAddBaseProject(const AddBaseProjectDTO::Wrapper& dto)
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

Uint64JsonVO::Wrapper BaseProjectController::execSelectBaseProject(const SelectBaseProjectQuery::Wrapper& query)
{
	auto jvo = Uint64JsonVO::createShared();
	return jvo;
}

Uint64JsonVO::Wrapper BaseProjectController::execSelectBaseProjectList(const SelectBaseProjectListQuery::Wrapper& query)
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