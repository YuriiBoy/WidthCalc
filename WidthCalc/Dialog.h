#pragma once
#include "Coordinats.h"
#include "Calculator.h"


class Dialog
{
	Coordinats points;
	Calculator culc;
public:
	void inputData();
	void outputData();
};

