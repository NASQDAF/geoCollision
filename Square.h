#pragma once
#include "Figure.h"
class Square :
	public Figure
{
private:
	double size;
public:
	Square() { size = 0; name = "square"; };
	Square(double a);
	
	double calcPerimeter() override;
	double getMaxPoint() override;
	double calcArea() override;
};

