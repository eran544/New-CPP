#pragma once
#include "Line.h"
#include "Point.h"
#include <iostream>
#include <math.h>
#include <string>

using namespace std;


class Triangle
{
	/* TODO: REMEMBER RULE OF 5:
	* destructor
	* copy constructor
	* move constructor
	* copy assignment constructor
	* move assignment constructor
	*/
private:
	Line _AB;
	Line _BC;
	Line _CA;
	Point A;
	Point B;
	Point C;
	double lenAB;
	double lenBC;
	double lenCA;
	double AngleA;
	double AngleB;
	double AngleC;
	double Area;
	void calcAngles();
	void calcArea();


public:
	Triangle(Line A, Line B, Line C);
	string to_string();

};

