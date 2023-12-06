#pragma once

class Coordinats
{
	double x1;
	double y1;
	double x2;
	double y2;
public:
	Coordinats();
	Coordinats(double x1,	double y1,	double x2,	double y2);
	void display() const;
	double getX1() const;
	double getY1() const;
	double getX2() const;
	double getY2() const;
};

