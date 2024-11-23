#ifndef AVIARY_H
#define AVIARY_H

#include <stack>
#include <string>

using namespace std;

struct Bird {
    string name;
    string species;
};

class Aviary {
private:
    stack<Bird> birdStack;
public:
    void addBird(const Bird& bird);
    Bird removeBird();
    Bird peekBird() const;
    bool isEmpty() const;
    stack<Bird>& getStack(); // return a reference to the stack of birds
};

#endif
