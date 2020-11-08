#include "Line.h"

Line::Line(Point p1, Point p2) : _p1(p1), _p2(p2), _m(0), _n(0), _angle(0), _len(0)
{
	initPoint();
}

Line::Line(double x1, double y1, double x2, double y2):Line(Point(x1, y1), Point(x2, y2))
{
}

Line::Line(const Line& other):Line(other._p1, other._p2) 
//copy constructor
{
}

Line::Line(Point p):Line(p, Point(0, 0))
{
}

Line::Line():Line(Point(0, 0), Point(0, 0))
{
}

void Line::initPoint()
{
	_m = (_p2.getY() - _p1.getY()) / (_p2.getX() - _p1.getX());
	_n = _m * _p1.getX() - _p1.getY();
	_angle = atan(_m) * 180 / M_PI;
	_len = sqrt(pow((_p1.getX() - _p2.getX()), 2) + pow((_p1.getY() - _p2.getY()), 2));
}
