#include "HealthCheck.h"
#include <stdexcept>

using namespace std;

void HealthCheck::addToQueue(const Bird& bird) {
    healthQueue.push(bird);
}

Bird HealthCheck::processNextInQueue() {
    if (healthQueue.empty()) {
        throw runtime_error("No birds in the health check queue!");
    }
    Bird nextBird = healthQueue.front();
    healthQueue.pop();
    return nextBird;
}

bool HealthCheck::isQueueEmpty() const {
    return healthQueue.empty();
}

size_t HealthCheck::queueSize() const {
    return healthQueue.size();
}

queue<Bird>& HealthCheck::getQueue(){
    return healthQueue;
};