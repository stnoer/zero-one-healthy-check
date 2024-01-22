
#ifndef _SELECT_BASEPROJECTLISTQUERY_H_
#define _SELECT_BASEPROJECTLISTQUERY_H_

#include "../../GlobalInclude.h"
#include "domain/query/PageQuery.h"
#include "../../dto/baseproject/SelectBaseProjectDTO.h"

#include OATPP_CODEGEN_BEGIN(DTO)

class SelectBaseProjectListQuery : public PageQuery
{
	DTO_INIT(SelectBaseProjectListQuery, PageQuery);

	// records
	API_DTO_FIELD_DEFAULT(List<Object<SelectBaseProjectDTO>>, records, ZH_WORDS_GETTER("common.baseproject.field.records"));
};

#include OATPP_CODEGEN_END(DTO)

#endif // !_SELECT_BASEPROJECTLISTQUERY_H_