#include <iostream>
#include <string>

using namespace std;

void add(float& num1, float& num2) {
    num1 += num2;
}

float sub(float num1, float num2) {
    return num1 - num2;
}

float mul(float num1, float num2) {
    return num1 * num2;
}

float divide(float num1, float num2) {
    return num1 / num2;
}


int main() {
    float num1, num2;
    char sign;
    cout << "Enter number 1" << endl;
    cin >> num1;
    cout << "Enter number 2" << endl;
    cin >> num2;
    cout << "Enter sign" << endl;
    cin >> sign;

    float result = (float)0;
    switch (sign)
    {
    case '+':
        cout << "before: num1=" << num1 << endl;
        add(num1, num2);
        cout << "after: num1=" << num1 << endl;
        break;
    case '-':
        result = sub(num1, num2);
        break;
    case '*':
        result = mul(num1, num2);
        break;
    case '/':
        result = divide(num1, num2);
        break;
    default:
        cout << "Wrong sign" << endl;
        return -1;
    }
    
    cout << "address of num1, num2, sign are: " << &num1 << ", " << &num2 << ", " << (void*)&sign << endl;
    cout << "Your result is: " << result << endl;
    return 0;
}



