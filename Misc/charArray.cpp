#include <iostream>
#include <cmath>  // Including libraries for input/output and math functions

using namespace std;  // Standard namespace for input/output functions

// Function to convert a character array to an integer
long long charArrayToInt(const char myValue[])
{
    long long finalValue = 0;  // Variable to store the final integer value
    int size = 0;  // Variable to store the size of the character array
    
    // Loop to calculate the size of the character array (ignores the null terminator)
    while (myValue[size] != '\0') {
        size++;  // Increment the size counter for each character until the null terminator is reached
    }
    
    // Loop through each character in the array
    for(int i = 0; i < size; i++)
    {    
        // Convert the current character to its numeric value by subtracting '0'
        // This works because the ASCII value of '0' is 48, '1' is 49, and so on
        // By subtracting '0', you get the actual numeric value (e.g., '1' becomes 1)
        
        // Multiply the numeric value by the appropriate power of 10 based on its position
        // For example, for "1234", '1' should be multiplied by 1000, '2' by 100, etc.
        finalValue += (myValue[i] - '0') * pow(10, size - i - 1); 
    }
    
    return finalValue;  // Return the final computed integer value
}

int main()
{
    char myCharValue[] = "1234256878954";  // Declare a character array holding the string "1234"
    
    // Call the charArrayToInt function to convert the character array to an integer
    // and print the result using cout
    cout << charArrayToInt(myCharValue) << endl;  
    
    return 0;  // Indicate successful execution of the program
}