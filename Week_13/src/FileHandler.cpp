#include "FileHandler.h"
#include <fstream>
#include <iostream>

void FileHandler::saveStackToFile(const stack<Bird>& birdStack, const string& filename) {
    ofstream file(filename);
    if (!file.is_open()) {
        cerr << "Error opening file for saving: " << filename << "\n";
        return;
    }

    stack<Bird> tempStack = birdStack;  // Copy stack for processing
    while (!tempStack.empty()) {
        Bird bird = tempStack.top();
        file << bird.name << "," << bird.species << "\n";
        tempStack.pop();
    }
    file.close();
}

void FileHandler::loadStackFromFile(stack<Bird>& birdStack, const string& filename) {
    ifstream file(filename);
    if (!file.is_open()) {
        cerr << "Error opening file for loading: " << filename << "\n";
        return;
    }

    string line;
    stack<Bird> tempStack;
    while (getline(file, line)) {
        size_t commaPos = line.find(',');
        string name = line.substr(0, commaPos);
        string species = line.substr(commaPos + 1);
        tempStack.push({name, species});
    }
    file.close();

    // Reverse stack to maintain original order
    while (!tempStack.empty()) {
        birdStack.push(tempStack.top());
        tempStack.pop();
    }
}

void FileHandler::saveQueueToFile(const queue<Bird>& healthQueue, const string& filename) {
    ofstream file(filename);
    if (!file.is_open()) {
        cerr << "Error opening file for saving: " << filename << "\n";
        return;
    }

    queue<Bird> tempQueue = healthQueue;  // Copy queue for processing
    while (!tempQueue.empty()) {
        Bird bird = tempQueue.front();
        file << bird.name << "," << bird.species << "\n";
        tempQueue.pop();
    }
    file.close();
}

void FileHandler::loadQueueFromFile(queue<Bird>& healthQueue, const string& filename) {
    ifstream file(filename);
    if (!file.is_open()) {
        cerr << "Error opening file for loading: " << filename << "\n";
        return;
    }

    string line;
    while (getline(file, line)) {
        size_t commaPos = line.find(',');
        string name = line.substr(0, commaPos);
        string species = line.substr(commaPos + 1);
        healthQueue.push({name, species});
    }
    file.close();
}
