#ifndef FILEHANDLER_H
#define FILEHANDLER_H

#include <stack>
#include <queue>
#include <string>
#include "Aviary.h"

using namespace std;

class FileHandler {
public:
    static void saveStackToFile(const stack<Bird>& birdStack, const string& filename);
    static void loadStackFromFile(stack<Bird>& birdStack, const string& filename);

    static void saveQueueToFile(const queue<Bird>& healthQueue, const string& filename);
    static void loadQueueFromFile(queue<Bird>& healthQueue, const string& filename);
};

#endif
