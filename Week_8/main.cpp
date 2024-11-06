#include "Complex.h"
#include <iostream>

using namespace std;

int main() {
    // Create two complex numbers using the constructor
    Complex c1(3, 4);  // Represents 3 + 4i
    Complex c2(1, 2);  // Represents 1 + 2i

    // Display initial complex numbers
    cout << "Initial Complex Numbers:" << endl;
    cout << "c1 = " << c1 << endl;
    cout << "c2 = " << c2 << endl;

    // Demonstrate addition of numbers
    Complex sum = c1 + c2;
    cout << "\nAddition" << endl;
    cout << c1 << " + "  << c2 << " = " << sum << endl;
    
    // Demonstrate subtraction of two complex numbers
    Complex diff = c1 - c2;
    cout << "\nSubtraction:" << endl;
    cout << c1 << " - " << c2 << " = " << diff << endl;

    // Demonstrate equality check between two complex numbers
    cout << "\nEquality Check:" << endl;
    if (c1 == c2) {
        cout << c1 << " is equal to " << c2 << endl;
    } else {
        cout << c1 << " is not equal to " << c2 << endl;
    }

    // Demonstrate user input for complex number
    Complex c3;
    cout << "\nEnter a new complex number:" << endl;
    cin >> c3;

    // Output the user-entered complex number
    cout << "\nYou entered: " << c3 << endl;

    // Perform another operation with the user-entered complex number
    Complex sumWithC3 = sum + c3;
    cout << "\nAddition with user-entered complex number:" << endl;
    cout << sum << " + " << c3 << " = " << sumWithC3 << endl;

    return 0;
}

