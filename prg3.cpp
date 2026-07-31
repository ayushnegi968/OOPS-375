#include <iostream>

using namespace std;


inline double multiply(double a, double b) {
    return a * b;
}

inline double divide(double a, double b = 1.0) {
    if (b == 0) {
        cout << "Error: Division by zero! ";
        return 0;
    }
    return a / b;
}




int add(int a, int b) {
    cout << "Using add(int, int): ";
    return a + b;
}

int add(int a, int b, int c) {
    cout << "Using add(int, int, int): ";
    return a + b + c;
}


double add(double a, double b) {
    cout << "Using add(double, double): ";
    return a + b;
}

int main() {
    cout << "=== Demonstrating Function Overloading (Addition) ===" << endl;
    cout << add(10, 20) << endl;         
    cout << add(5, 10, 15) << endl;     
    cout << add(5.5, 4.5) << endl;     
    cout << "\n=== Demonstrating Inline Functions (Multiplication) ===" << endl;
    double num1 = 7.5, num2 = 4.0;
    cout << "Product of " << num1 << " and " << num2 << " = " << multiply(num1, num2) << endl;

    cout << "\n=== Demonstrating Default Arguments (Division) ===" << endl;
    cout << "Division with two arguments (10.0 / 2.0) = " << divide(10.0, 2.0) << endl;
    cout << "Division using default argument (10.0 / default) = " << divide(10.0) << endl;

    return 0;
}

