#include "array_utils.h"
#include "struct_utils.h"
#include <iostream>

using namespace std;

void usingArray(){
    const int SIZE = 5;
    int scores[SIZE];

    loadDataToArray(scores, SIZE, "arr_data.txt");

    for (int i = 0; i < SIZE; ++i) {
        cout << "score" << i+1 << ":" << scores[i] << " " << endl;
    }     
}

void usingStruct(){
    const int SIZE = 2;
    Student students[SIZE];

    loadDataToStruct(students, SIZE, "struct_data.txt");

    for (int i = 0; i < SIZE; ++i) {
        cout << students[i].name << " " << students[i].age << " " << students[i].gpa << endl;
    }
}


int main() {
    //array example
    usingArray();

    //struct example
    usingStruct();
    return 0;
}