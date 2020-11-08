#pragma once
#define _USE_MATH_DEFINES
#include "Point.h"
#include <math.h>

class Line
{
private:
	Point _p1;
	Point _p2;
	double _m;
	double _n;
	double _angle;
	double _len;
	//const double pi = boost::math::cons

	void initPoint();

public:
	Line(Point p1, Point p2): _p1(p1), _p2(p2), _m(0), _n(0), _angle(0), _len(0)
	{initPoint();}

	Line(int x1, int y1, int x2, int y2) : Line(Point(x1, y1), Point(x2, y2))
	{

	}
};