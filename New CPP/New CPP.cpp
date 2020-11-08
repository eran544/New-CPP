#include <iostream>
#include <string>
#include "Point.h"

using namespace std;

int main() {
    int num1, num2;
    cout << "Enter num1: ";
    cin >> num1;
    cout << "Enter num2: ";
    cin >> num2;
    Point p1(num1, num2);
    p1.PrintPoint();
    p1.~Point();
    
    return 0;
}



