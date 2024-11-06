#include <iostream>
using namespace std;

int findMax(const int arr[], int size) {
    // Base case: Only one element left
    if (size == 1) return arr[0];

    // Recursive case: Find the maximum between the last element and the rest
    int maxOfRest = findMax(arr, size - 1);
    return max(arr[size - 1], maxOfRest);
}


int sumArray(const int arr[], int size) {
    // Base case: If array is empty, sum is 0
    if (size == 0) return 0;

    // Recursive case: Sum current element and remaining elements
    return arr[size - 1] + sumArray(arr, size - 1);
}


int power(int base, int exponent) {
    // Base case: Any number to the power of 0 is 1
    if (exponent == 0) return 1;

    // Recursive case: Multiply base by result of power(base, exponent - 1)
    return base * power(base, exponent - 1);
}

int main() {
    int arr[] = {3, 5, 9, 1, 6};
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << "Sum of array elements: " << sumArray(arr, size) << endl;
    cout << "Max element in array: " << findMax(arr, size) << endl;
    int base = 7;
    int exp = 10;
    cout << base << " raised to " << exp << " is: " << power(base, exp) << endl;

    return 0;
}
