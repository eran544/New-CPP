#pragma once
class Point
{
private:
	int& _x;
	int& _y;

public:
	Point(Point& other);
	Point(int x, int y);
	Point(int x);
	~Point();
	Point();
	int getX();
	int getY();
	void incX();
	void decX();
	void incY();
	void decY();
};

