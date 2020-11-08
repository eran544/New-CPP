#pragma once
#define _USE_MATH_DEFINES
#include "Point.h"
#include <math.h>

class Line
{
private:
	Point& _p1;
	Point& _p2;
	double& m;
	double& n;
	double& angle;
	//const double pi = boost::math::cons

	void initPoint();

public:
	Line(Point& p1, Point& p2): _p1(p1), _p2(p2), 
	{initPoint();}
};

