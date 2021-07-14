#pragma once
#include <iostream>
#include <string>
#include <cmath>
#include <vector>
class Figure
{
protected:
	const char * name;
	double x = 0;
	double y = 0;
public:
			bool	checkCollision(std::vector<Figure*> f, int k);
			
			void	setCentralPoint(double _x, double _y);
			void	printInfo();

			double	calcCylindricVolume(double height);
			double* getCentralPoint();

	virtual double	calcPerimeter() = 0;
	virtual double	getMaxPoint() = 0;
	virtual double	calcArea() = 0;

	const	char*	getName();

};
