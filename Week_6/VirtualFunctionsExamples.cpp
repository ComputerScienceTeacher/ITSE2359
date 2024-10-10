#include<iostream>

using namespace std;

class Animal {
    public:
        virtual void speak() = 0;

        virtual ~Animal(){
            cout<<"Animal destroyed" <<endl;
        }

};

class Dog : public Animal {
    void speak() override{
        cout<< "Woof!" <<endl;
    }
};

class Cat : public Animal {
    void speak() override {
        cout<< "Meow!" <<endl;
    }
};

class Cow: public Animal{
    void speak() override {
        cout<< "Moo!" <<endl;
    }
};

int main()
{
    Animal *animalPtr = new Dog();
    animalPtr -> speak();
    Animal *animalPtr2 = new Cow();
    animalPtr2 -> speak();
    delete animalPtr;
    delete animalPtr2;
    return 0;
}