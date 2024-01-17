#pragma once

#ifndef _BASEPROJECTCONTROLLER_H_
#define _BASEPROJECTCONTROLLER_H_

#include "oatpp-swagger/Types.hpp"
#include "domain/vo/BaseJsonVO.h"
#include "domain/vo/baseproject/AddBaseProjectVO.h"
#include "domain/vo/baseproject/SelectBaseProjectVO.h"
#include "domain/vo/baseproject/SelectBaseProjectListVO.h"
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
		API_DEF_ADD_RSP_JSON_WRAPPER(Uint64JsonVO);
	}
	// 3.2 定义新增接口处理
	ENDPOINT(API_M_POST, "/baseproject/add-baseproject", addBaseProject, BODY_DTO(AddBaseProjectDTO::Wrapper, dto), API_HANDLER_AUTH_PARAME) {
		// 呼叫执行函数响应结果
		API_HANDLER_RESP_VO(execAddBaseProject(dto));
	}

	ENDPOINT_INFO(selectBaseProject) {
		// 定义接口标题
		API_DEF_ADD_TITLE(ZH_WORDS_GETTER("baseproject.post.selectBaseProject"));
		// 定义默认授权参数（可选定义，如果定义了，下面ENDPOINT里面需要加入API_HANDLER_AUTH_PARAME）
		API_DEF_ADD_AUTH();
		// 定义响应参数格式
		API_DEF_ADD_RSP_JSON_WRAPPER(Uint64JsonVO);
	}
	// 3.2 定义新增接口处理
	ENDPOINT(API_M_POST, "/baseproject/select-baseproject", selectBaseProject, BODY_DTO(SelectBaseProjectDTO::Wrapper, dto), API_HANDLER_AUTH_PARAME) {
		// 呼叫执行函数响应结果
		API_HANDLER_RESP_VO(execSelectBaseProject(dto));
	}

private:// 定义接口执行函数
	//新增数据
	Uint64JsonVO::Wrapper execAddBaseProject(const AddBaseProjectDTO::Wrapper& dto);
	//删除数据
	Uint64JsonVO::Wrapper execSelectBaseProject(const SelectBaseProjectDTO::Wrapper& dto);
	//修改数据
	//Uint64JsonVO::Wrapper execSelectBaseProjectList(const SelectBaseProjectListDTO::Wrapper& dto);
};

#include OATPP_CODEGEN_END(ApiController) //<- End Codegen

#endif // !_BASEPROJECTCONTROLLER_H_