#include<iostream>

using namespace std;

int main()
{
    /*
    int myArray[5];
    int* dynamicArray = new int[5];
    
    dynamicArray[0] = 10;
    dynamicArray[1] = 20;
    dynamicArray[2] = 30;

    int* newArray  = new int[10];
    for(int i = 0; i<5; i++)
    {
        newArray[i] = dynamicArray[i];
    }
    delete[]  dynamicArray;
    dynamicArray = newArray;
    */

    int size;
    cout << "Enter size of the array: ";
    cin >> size;

    int* userArray = new int[size];

    for(int i = 0; i<size; i++)
    {
        cout<< "Enter element " << i+1  << ":";
        cin >> userArray[i]; 
    }

    delete[] userArray;
    return 0;
}