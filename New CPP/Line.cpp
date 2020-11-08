#include "Line.h"

void Line::initPoint()
{
	m = (_p2.getY() - _p1.getY()) / (_p2.getX() - _p1.getX());
	n = m * _p1.getX() - _p1.getY();
	angle = atan(m) * 180 / M_PI;
}
