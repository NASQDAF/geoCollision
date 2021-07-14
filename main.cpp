#include "Figure.h"
#include "Square.h"
#include "Circle.h"
#include "Rectangle.h"
#include "Equilateral_triangle.h"
#include <vector>

void enterCoord(Figure *f) {
	double x, y;
	std::cout	<<	"\nEnter "	<<	f->getName()	<<	" coordinates\nx: ";
									std::cin >> x; 
	std::cout	<<	"\ny:";			std::cin >> y; 
	
	f->setCentralPoint(x, y);
}

int main()
{
	using namespace std;
	int			i;
	double	square	= 0;
	double	circle	= 0;
	double	triang	= 0;
	double		a	= 0;
	double		b	= 0;
	const char* tmp = "\nPlease, enter the: ";

	cout << tmp << "side of the square: ";			cin >> square;
	cout << tmp << "radius of the circle: ";		cin >> circle;
	cout << tmp << "equilateral triangle's side: "; cin >> triang;
	cout << tmp << "sides of the rectangle: ";		cin >> a >> b; 
	cout << endl;
	
	vector<Figure*>	figures;
	figures.push_back(new Square(square));
	figures.push_back(new Circle(circle)); 
	figures.push_back(new Equilateral_triangle(triang));
	figures.push_back(new Rectangle(a, b));

	for (i = 0; i < figures.size(); i++)
		enterCoord(figures[i]);

	double h = 1.3;
	for (i = 0; i < figures.size(); i++)
	{
		figures[i]->printInfo();
		
		cout	<< figures[i]->calcCylindricVolume(h) << endl 
				<< "Collision: " << figures[i]->checkCollision(figures, i) 
				<< endl << endl;
	}
	system("pause");
	return 0;
}