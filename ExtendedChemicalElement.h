#pragma once
#include "ChemicalElement.h"
#include "ChemicalElementsInformation.h"

// Адаптер
class ExtendedChemicalElement :
	public ChemicalElement
{
private:
	std::unique_ptr<ChemicalElementsInformation> pInformation = std::make_unique<ChemicalElementsInformation>();
public:
	ExtendedChemicalElement(string);
	virtual ~ExtendedChemicalElement();
	void Show();
};