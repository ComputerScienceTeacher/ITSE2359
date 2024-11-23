#include "Aviary.h"
#include <stdexcept>

using namespace std;

void Aviary::addBird(const Bird& bird) {
    birdStack.push(bird);
}

Bird Aviary::removeBird() {
    if (birdStack.empty()) {
        throw runtime_error("The aviary is empty! No birds to remove.");
    }
    Bird topBird = birdStack.top();
    birdStack.pop();
    return topBird;
}

Bird Aviary::peekBird() const {
    if (birdStack.empty()) {
        throw runtime_error("The aviary is empty! No birds to view.");
    }
    return birdStack.top();
}

bool Aviary::isEmpty() const {
    return birdStack.empty();
}

stack<Bird>& Aviary::getStack() {
    return birdStack;
}
