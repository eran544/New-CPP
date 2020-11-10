#include "Triangle.h"
#include <math.h>

using namespace std;

void Triangle::calcAngles()
{

	double ASquare = pow(lenAB, 2);
	double BSquare = pow(lenBC, 2);
	double CSquare = pow(lenCA, 2);
	AngleA = acos((BSquare + CSquare - ASquare) / (2 * lenBC * lenCA)) * 180 / M_PI;
	AngleB = acos((ASquare + CSquare - BSquare) / (2 * lenAB * lenCA)) * 180 / M_PI;
	AngleC = acos((ASquare + BSquare - CSquare) / (2 * lenAB * lenBC)) * 180 / M_PI;
}

void Triangle::calcArea()
{
	Area = (lenAB * lenBC * sin(AngleC * M_PI / 180));
}


Triangle::Triangle(Line A, Line B, Line C): _AB(A), _BC(B), _CA(C)
{
	lenAB = _AB.GetLen();
	lenBC = _BC.GetLen();
	lenCA = _CA.GetLen();
	A = _AB.GetP1();
	B = _BC.GetP1();
	C = _CA.GetP1();
	calcAngles();
	calcArea();
}

string Triangle::to_string()
{
	return "A: " + _AB.GetP1().to_string() +
		"\nB: " + _BC.GetP1().to_string() +
		"\nC: " + _CA.GetP1().to_string() +
		"\nAB = " + to_string((_AB.GetLen())) +
		"\nBC = " + to_string(_BC.GetLen()) +
		"\nCA = " + to_string(_CA.GetLen()) +
		"\n alpha = " + to_string(&AngleA) +
		"\n beta = " + to_string(AngleB) +
		"\n gamma = " + to_string(AngleC) +
		"\n area = " + to_string(Area) + "\n";
}

