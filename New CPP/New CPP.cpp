#include <iostream>
#include <string>
#include <cstdio>
#include "Point.h"
#include "Line.h"
#include "Triangle.h"

using namespace std;

int main() {
    int num1, num2;
    cout << "Enter num1: ";
    cin >> num1;
    cout << "Enter num2: ";
    cin >> num2;
    Point p1(num1, num2);
    cout << p1.to_string();
    cout << "Enter num1: ";
    cin >> num1;
    cout << "Enter num2: ";
    cin >> num2;
    Point p2(num1, num2);
    cout << p2.to_string();
    cout << "Enter num1: ";
    cin >> num1;
    cout << "Enter num2: ";
    cin >> num2;
    Point p3(num1, num2);
    Line l1(p1, p2);
    l1.PrintLine();
    Line l2(p2, p3);
    l2.PrintLine();
    Line l3(p3, p1);
    l3.PrintLine();
    Triangle t1(l1, l2, l3);
    cout << t1.to_string();
    //delete[] &l;
    //p1.~Point(); - not needed
    //uncheck the next line at windows only
    //system("pause");
    
    return 0;
}



