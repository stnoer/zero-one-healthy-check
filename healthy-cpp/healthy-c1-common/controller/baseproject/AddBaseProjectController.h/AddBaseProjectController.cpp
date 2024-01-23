#include "AddBaseProjectController.h"
#include "../../../service/baseproject/AddBaseProject/AddBaseProjectService.h"

Uint64JsonVO::Wrapper AddBaseProjectController::execAddBaseProject(const AddBaseProjectDTO::Wrapper& dto)
{
	// 定义返回数据对象
	auto jvo = Uint64JsonVO::createShared();

	// 定义一个Service
	AddBaseProjectService service;
	// 执行数据新增
	uint64_t id = service.saveData(dto);
	std::cout << id << std::endl;
	if (id > 0) {
		jvo->success(UInt64(id));
	}
	else
	{
		jvo->fail(UInt64(id));
	}
	//响应结果
	return jvo;
}
