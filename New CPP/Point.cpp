#include "Point.h"
#include <iostream>

using namespace std;

/*
Point::Point(const Point& other): _x(other._x), _y(other._y) //copy constructor
{
}
*/


Point::Point(int x, int y): _x(x), _y(y)
{
}

Point::Point(int x): _x(x), _y(0)
{
}

/*
Point::~Point()
{
}
*/

Point::Point(): _x(0), _y(0)
{
}

double Point::getX()
{
	return _x;
}

double Point::getY()
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

string Point::to_string()
{
	return "(" + to_string(_x) + "," + to_string(_y) + ")\n";
}
