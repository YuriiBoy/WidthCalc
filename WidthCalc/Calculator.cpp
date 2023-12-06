#include "Header.h"
#include "Calculator.h"

double Calculator::widthCalc(const Coordinats& points)
{
	return sqrt(pow((points.getX2() - points.getX1()), 2) 
		+ pow((points.getY2() - points.getY1()), 2));
}
