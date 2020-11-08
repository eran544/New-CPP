#include "Point.h"

Point::Point(Point& other): _x(other._x), _y(other._y)
{
}

Point::Point(int x, int y): _x(x), _y(y)
{
}

Point::Point(int x): _x(x), _y(0)
{
}

Point::~Point()
{
	delete _x;
	delete _y;
}

Point::Point() : _x(0), _y(0)
{
}

int Point::getX()
{
	return _x;
}

int Point::getY()
{
	return _y;
}

void Point::incX()
{
	++_x;
}

void Point::decX()
{
	--_x;
}

void Point::incY()
{
	++_y;
}

void Point::decY()
{
	--_y;
}
