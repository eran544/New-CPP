#include "Line.h"

void Line::initPoint()
{
	_m = (_p2.getY() - _p1.getY()) / (_p2.getX() - _p1.getX());
	_n = _m * _p1.getX() - _p1.getY();
	_angle = atan(_m) * 180 / M_PI;
}
