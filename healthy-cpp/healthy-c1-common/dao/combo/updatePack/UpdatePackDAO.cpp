#include "UpdatePackDAO.h"

int UpdatePackDAO::update(const UpdatePackDO& iObj)
{

	string sql = "UPDATE `t_combo` SET (`id`, `name`, `url`, `type`, `simpleSpell`, `fitSex`, `orderNum`, `remark`, `careerStage`, `hazardFactors`, `hazardFactorsText`, `occupationalDiseases`, `occupationalTaboo`, `occupationalDiseasesCode`, `occupationalTabooCode`, `diagnosticCriteria`, `symptomInquiry`) VALUES (?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?)";

	return sqlSession->executeUpdate(sql, "%s%s%s%s%s%s%i%s%s%s%s%s%s%s%s%s%s",
		iObj.getId(),
		iObj.getName(), iObj.getUrl(), iObj.getType(),
		iObj.getSimpleSpell(), iObj.getFitSex(), iObj.getOrderNum(),
		iObj.getRemark(), iObj.getCareerStage(), iObj.getHazardFactors(),
		iObj.getHazardFactorsText(), iObj.getOccupationalDiseases(),
		iObj.getOccupationalTaboo(), iObj.getOccupationalDiseasesCode(),
		iObj.getOccupationalTabooCode(), iObj.getDiagnosticCriteria(),
		iObj.getSymptomInquiry()
	);
}
