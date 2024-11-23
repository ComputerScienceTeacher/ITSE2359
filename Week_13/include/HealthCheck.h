#ifndef HEALTHCHECK_H
#define HEALTHCHECK_H

#include <queue>
#include <string>
#include "Aviary.h"

using namespace std;

class HealthCheck {
private:
    queue<Bird> healthQueue;
public:
    void addToQueue(const Bird& bird);
    Bird processNextInQueue();
    bool isQueueEmpty() const;
    size_t queueSize() const;
    queue<Bird>& getQueue(); // return queue of birds
};

#endif
