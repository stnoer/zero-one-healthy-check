#include "stdafx.h"
#include "../../dao/base/ReferenceDelDAO.h"
#include "ReferenceDelService.h"
//uint64_t ReferenceDelService::saveData(const ReferenceDelDTO::Wrapper& dto)
//{
//	return 0;
//}

bool ReferenceDelService::removeData(string id)
{
	ReferenceDelDAO dao;
	return dao.deleteById(id) == 1;
}

