#include "array_utils.h"
#include <fstream>
#include <iostream>

using namespace std;

void loadDataToArray(int arr[], int size, const string &filename) {
    ifstream inFile(filename);
    if (!inFile) {
        cerr << "File could not be opened!" << endl;
        return;
    }

    for (int i = 0; i < size; ++i) {
        inFile >> arr[i];
    }

    inFile.close();
}