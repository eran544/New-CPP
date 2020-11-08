#pragma once
class Point
{
	/* TODO: REMEMBER RULE OF 5:
	* destructor
	* copy constructor
	* move constructor
	* copy assignment constructor
	* move assignment constructor
	*/
private:
	double _x;
	double _y;

public:
	~Point(); // destructor
	Point(const Point& other); // copy constructor
	Point& operator=(const Point& other); //copy assignment destructor
	Point(int x, int y);
	Point(int x);
	Point();
	double getX();
	double getY();
	void incX();
	void decX();
	void incY();
	void decY();
	void PrintPoint();
};

