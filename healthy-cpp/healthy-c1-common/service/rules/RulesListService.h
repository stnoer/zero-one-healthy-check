#ifndef _RULESLIST_SERVICE_
#define _RULESLIST_SERVICE_
#include <list>
#include "domain/vo/rules/RulesListVO.h"
#include "domain/query/rules/RulesListQuery.h"
#include "domain/dto/rules/RulesListDTO.h"

/**
 * 示例服务实现，演示基础的示例服务实现
 */
class RulesListService
{
public:
	// 分页查询所有数据
	RulesListPageDTO::Wrapper listAll(const RulesListQuery::Wrapper& query);
	// 保存数据
	uint64_t saveData(const RulesListDTO::Wrapper& dto);
	// 修改数据
	bool updateData(const RulesListDTO::Wrapper& dto);
	bool removeData(const string id);
	// 通过ID删除数据
	
};

#endif // !_RULESLIST_SERVICE_

