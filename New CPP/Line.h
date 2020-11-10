#pragma once
#define _USE_MATH_DEFINES
#include "Point.h"
#include <math.h>

class Line
{
	/* TODO: REMEMBER RULE OF 5: 
	* destructor
	* copy constructor
	* move constructor
	* copy assignment constructor
	* move assignment constructor
	*/
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
	Line(Point p1, Point p2);
	Line(double x1, double y1, double x2, double y2);
	Line(Point p);
	Line();
	Line(const Line& other); //Copy constructor
	Line(const Line&& other); //Move constructor
	~Line(); //Destructor
	Line& operator=(const Line& other); //Copy assignment
	Line& operator=(Line&& other); //Move Assignment
	void PrintLine();
	double GetLen();
	Point GetP1();
	Point GetP2();

};