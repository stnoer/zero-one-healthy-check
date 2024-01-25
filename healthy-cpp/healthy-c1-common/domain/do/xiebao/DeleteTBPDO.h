#ifndef _DeleteTBP_DO_
#define _DeleteTBP_DO_
#include "../DoInclude.h"

/**
 * 示例数据库实体类
 */
class DeleteTBPDO
{
    // 
    CC_SYNTHESIZE(string, code, Code);
    // 姓名
    CC_SYNTHESIZE(string, del_flag, Del_flag);


public:
    DeleteTBPDO() {
        code = "";
        del_flag = "";
    }
};
#endif // !_DeleteTBP_DO_