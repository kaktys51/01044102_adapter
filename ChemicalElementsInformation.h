#pragma once
#include <string>
using namespace std;
// ����������� �볺��
class ChemicalElementsInformation
{
public:
	ChemicalElementsInformation();
	virtual ~ChemicalElementsInformation();
	double GetDensity(string) const;
	int    GetPositionFromPeriodicTable(string) const;
};