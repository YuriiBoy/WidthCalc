#include "Header.h"
#include "Coordinats.h"

Coordinats::Coordinats() : x1(0.0), y1(0.0), x2(0.0), y2(0.0)
{}

Coordinats::Coordinats(double x1, double y1, double x2, double y2)
	: x1(x1), y1(y1), x2(x2), y2(y2)
{}

void Coordinats::display() const
{
	std::cout << "\n Coordinates of the first point: x1: " << x1 << ";  y1: " << y1 << std::endl;
	std::cout << " Coordinates of the second point: x2: " << x2 << ";  y2: " << y2 << std::endl;
}

double Coordinats::getX1() const
{
	return x1;
}

double Coordinats::getY1() const
{
	return y1;
}

double Coordinats::getX2() const
{
	return x2;
}

double Coordinats::getY2() const
{
	return y2;
}
