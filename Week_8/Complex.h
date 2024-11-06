#ifndef COMPLEX_H
#define COMPLEX_H

#include <iostream>

using namespace std;

class Complex {
private:
    double real;
    double imaginary;

public:
    // Constructor
    Complex(double r = 0.0, double i = 0.0);

    // Overload + operator to add two complex numbers
    Complex operator+(const Complex& other) const;

    // Overload - operator to subtract two complex numbers
    Complex operator-(const Complex& other) const;

    // Overload == operator to compare two complex numbers
    bool operator==(const Complex& other) const;

    // Overload << operator for outputting complex numbers
    friend ostream& operator<<(ostream& out, const Complex& c);

    // Overload >> operator for inputting complex numbers
    friend istream& operator>>(istream& in, Complex& c);
};

#endif

