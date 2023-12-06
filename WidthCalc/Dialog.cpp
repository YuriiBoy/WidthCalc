#include "Header.h"
#include "Dialog.h"

void Dialog::inputData()
{
	std::cout << "\n Two Points Width Calculation\n";
	std::cout << " =============================\n";
	std::cout << "\n Input coordinates of the first point\n";
	double x1;
	std::cout << " x1 = ";
	if (!(std::cin >> x1)) {
		throw std::runtime_error("Bad value of coordinate x1");
	}
	double y1;
	std::cout << " y1 = ";
	if (!(std::cin >> y1)) {
		throw std::runtime_error("Bad value of coordinate y1");
	}

	std::cout << "\n Input coordinates of the second point\n";
	double x2;
	std::cout << " x2 = ";
	if (!(std::cin >> x2)) {
		throw std::runtime_error("Bad value of coordinate x2");
	}
	double y2;
	std::cout << " y2 = ";
	if (!(std::cin >> y2)) {
		throw std::runtime_error("Bad value of coordinate y2");
	}
	Coordinats temp(x1, y1, x2, y2);
	points = temp;
}

void Dialog::outputData()
{
	points.display();
	double W = culc.widthCalc(points);
	std::cout << " W = " << std::setprecision(2) << std::fixed << W << std::endl;
}
