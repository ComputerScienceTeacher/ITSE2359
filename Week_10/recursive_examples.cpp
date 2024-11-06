#include<iostream>


using namespace std;

// Recursive function to calculate the nth Fibonacci number
int fibonacci(int n) {
    if (n <= 1) return n;  // Base case
    return fibonacci(n - 1) + fibonacci(n - 2);  // Recursive call
}


// Function to print the Fibonacci sequence up to 'terms'
void printFibonacciSequence(int terms)
{
    for( int i = 0; i< terms; i++)
    {
        cout<< fibonacci(i) << " ";
    }
    cout << endl;
}


void towerOfHanoi(int n, char from_rod, char to_rod, char aux_rod) {
    if (n == 1) {
        cout << "Move disk 1 from " << from_rod << " to " << to_rod << endl;
        return;
    }
    towerOfHanoi(n - 1, from_rod, aux_rod, to_rod);
    cout << "Move disk " << n << " from " << from_rod << " to " << to_rod << endl;
    towerOfHanoi(n - 1, aux_rod, to_rod, from_rod);
}

int main() {
    int terms = 10;
    cout << "Fibonacci sequence up to " << terms << " terms: ";
    printFibonacciSequence(terms);
    
    int n = 3;  // Number of disks
    cout << "\nTower of Hanoi steps for " << n << " disks:" << endl;
    towerOfHanoi(n, 'A', 'C', 'B');
    return 0;
}