#include "Figure.h"
#include <cmath>

void Figure::printInfo()
{
	std::cout << "this is a "				<< name					<< std::endl;
	std::cout << "area: "					<< calcArea()			<< std::endl;
	std::cout << "perimeter: "				<< calcPerimeter()		<< std::endl;
	std::cout << "center coordinates: ["	<< getCentralPoint()[0] 
									<< ";"	<< getCentralPoint()[1] 
									<< "]"							<< std::endl;
};

double Figure::calcCylindricVolume(double height)
{
	return height * calcArea();
}

double* Figure::getCentralPoint() {
	double d[] = { x, y };
	return d;
}

void Figure::setCentralPoint(double _x, double _y) {
	x = _x;
	y = _y;
}
const char* Figure::getName() {
	return name;
}

bool Figure::checkCollision(std::vector<Figure*> f, int k) {
	
	bool b = 0;
	
	if (k != f.size() - 1)
		for (int i = k+1; i < f.size(); i++) {
			
			double
					_Max	=	getMaxPoint(),
					maX_	=	f[i]->getMaxPoint(),
					_x		=	f[i]->getCentralPoint()[0],
					_y		=	f[i]->getCentralPoint()[1],
					dist	=	sqrt((_x - x) * (_x - x) + (_y - y) * (_y - y));
				
			if (
				(1000 + x + _Max)	>	(1000 + _x - maX_) &&
				(1000 + y + _Max)	>	(1000 + _y - maX_) &&
				(dist - (_Max + maX_))	<=	(_Max > maX_ ? _Max : maX_)
				) return 1;
		}
	return b;
}