#include "array_utils.h"
#include <iostream>

using namespace std;

int main() {
    //array example
    usingArray();

    //struct example
    usingStruct();
    
}

void usingArray(){
    const int SIZE = 5;
    int scores[SIZE];

    loadDataToArray(scores, SIZE, "arr_data.txt");

    for (int i = 0; i < SIZE; ++i) {
        cout << "score" << i+1 << ":" << scores[i] << " " << endl;
    }

    return 0; 
}

void usingStruct(){
    
}