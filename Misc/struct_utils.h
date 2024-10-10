#ifndef STRUCT_UTILS_H
#define STRUCT_UTILS_H

#include <string>

struct Student {
    std::string name;
    int age;
    float gpa;
};

void loadDataToStruct(Student students[], int size, const std::string &filename);

#endif