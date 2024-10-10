#include "struct_utils.h"
#include <fstream>
#include <iostream>

using namespace std;

void loadDataToStruct(Student students[], int size, const string &filename) {
    ifstream inFile(filename);
    if (!inFile) {
        cerr << "File could not be opened!" << endl;
        return;
    }

    for (int i = 0; i < size; ++i) {
        inFile >> students[i].name >> students[i].age >> students[i].gpa;
    }

    inFile.close();
}