#include "Line.h"
#include <iostream>

using namespace std;

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

Line::Line(const Line&& other):Line(other._p1, other._p2)
{
	delete[] &other;
}


Line::~Line()
{
	/*
	delete[] &_p1;
	delete[] & _p2;
	*/
}

Line& Line::operator=(const Line& other)
{
	_p1 = other._p1;
	_p2 = other._p2;
	return *this;
}

Line& Line::operator=(Line&& other)
{
	_p1 = other._p1;
	_p2 = other._p2;
	delete[] &other;
	return *this;
}

void Line::PrintLine()
{
	cout << "Point One: " + _p1.to_string();
	cout << "Point Two: " + _p2.to_string();
	if (_n >=0)
		cout << "Line equation: " << _m << "x + " << _n << endl;
	else
		cout << "Line equation: " << _m << "x " << _n << endl;
	cout << "Angle with the positive side of x axis: " << _angle << endl;
	cout << "Length of line: " << _len << endl;
}

double Line::GetLen()
{
	return _len;
}

Point Line::GetP1()
{
	return _p1;
}

Point Line::GetP2()
{
	return _p2;
}

Line::Line(Point p):Line(p, Point(0, 0))
{
}

Line::Line():Line(Point(0, 0), Point(0, 0))
{
}

void Line::initPoint()
{
	if (_p1.getX() != _p2.getX())
	{
		_m = (_p2.getY() - _p1.getY()) / (_p2.getX() - _p1.getX());
		_n = _m * _p1.getX() * -1 + _p1.getY();
		_angle = atan(_m) * 180 / M_PI;
	}
	else
	{
		//line of type: x=a where a is a real number
		_m = INFINITY;
		_n = _p1.getX();
		_angle = 90;
		//represent as infinity x + a
	}
	_len = sqrt(pow((_p1.getX() - _p2.getX()), 2) + pow((_p1.getY() - _p2.getY()), 2));
}
