#include <iostream>

using namespace std;

void functionA(int n);
void functionB(int n);

void functionA(int n) {
    cout << "Function A call" << ": n value : " << n << endl;

    if (n <= 0) return;  // Base case
    cout << "Function A: " << n << endl;
    functionB(n - 1);  // Calls functionB, creating indirect recursion
}

void functionB(int n) {
    cout << "Function B call" << ": n value : " << n << endl;

    if (n <= 0) return;  // Base case
    cout << "Function B: " << n << endl;
    functionA(n - 2);  // Calls functionA, creating indirect recursion
}

int recursiveFunction(int n)
{
    // output each n to the terminal at each call of the function
    cout << n << endl;

    // Base case: stops recursion
    if(n==0)
    {
        return 0;
    }

    // General case: reduces problem size
    else
    {
        return n + recursiveFunction(n-1);
    }

}

int fact(int n)
{
    // output each n to the terminal at each call of the function
    cout << n << endl;

    // Base case: stops recursion
    if(n==1)
    {
        return 1;
    }

    // General case: reduces problem size
    else
    {
        return n * fact(n-1);
    }

}


int factIteration(int n)
{
    int result = 1;
    for (int i = 1; i <= n; i ++)
    {
        cout << i << endl;
        result *= i;
    }
    return result;
}

int main()
{
    int myFact = fact(5);
    cout << "Factorial of 5 is: " << myFact << endl;

    myFact = factIteration(5);
    cout << "Factorial of 5 is: " << myFact << endl;
    return 0;

}