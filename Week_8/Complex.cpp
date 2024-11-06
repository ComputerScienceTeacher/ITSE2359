#include "Complex.h"

// Constructor implementation
Complex::Complex(double r, double i) : real(r), imaginary(i) {}

// Overload + operator to add two complex numbers
Complex Complex::operator+(const Complex& other) const {
    return Complex(real + other.real, imaginary + other.imaginary);
}

// Overload - operator to subtract two complex numbers
Complex Complex::operator-(const Complex& other) const {
    return Complex(real - other.real, imaginary - other.imaginary);
}

// Overload == operator to compare two complex numbers
bool Complex::operator==(const Complex& other) const {
    return real == other.real && imaginary == other.imaginary;
}

// Overload << operator for outputting complex numbers
ostream& operator<<(ostream& out, const Complex& c) {
    out << c.real << " + " << c.imaginary << "i";
    return out;
}

// Overload >> operator for inputting complex numbers
istream& operator>>(istream& in, Complex& c) {
    cout << "Enter real part: ";
    in >> c.real;
    cout << "Enter imaginary part: ";
    in >> c.imaginary;
    return in;
}
