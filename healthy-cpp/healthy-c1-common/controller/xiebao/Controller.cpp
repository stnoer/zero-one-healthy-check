#include "stdafx.h"
#include "Controller.h"
#include "../ApiDeclarativeServicesHelper.h"
#include "../../service/xiebao/DeleteTBPService.h"
#include "../../service/xiebao/UpdateTBPService.h"

DeleteTBPJsonVO::Wrapper XiebaoController::execDelTBP(const DeleteTBPDTO::Wrapper& dto)
{
    // 定义返回数据对象
    auto jvo = DeleteTBPJsonVO::createShared();
    // 参数校验
    if (!dto->code)
    {
        jvo->init(UInt64(-1), RS_PARAMS_INVALID);
        return jvo;
    }
    // 定义一个Service
    DeleteTBPService service;
    // 执行数据删除
    if (service.DeleteTBP(dto){
        jvo->success(dto->code);
    }
    else
    {
        jvo->fail(dto->code);
    }
    // 响应结果
    return jvo;
}

UpdateTBPJsonVO::Wrapper XiebaoController::execUpdateTBP(const UpdateTBPDTO::Wrapper& dto)
{
    // 定义返回数据对象
    auto jvo = Uint64JsonVO::createShared();
    // 参数校验
    if (!dto->code)
    {
        jvo->init(UInt64(-1), RS_PARAMS_INVALID);
        return jvo;
    }
    // 定义一个Service
    UpdateTBPService service;
    // 执行数据修改
    if (service.updateTBP(dto)) {
        jvo->success(dto->code);
    }
    else
    {
        jvo->fail(dto->code);
    }
    // 响应结果
    return jvo;
}
