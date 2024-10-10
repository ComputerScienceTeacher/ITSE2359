#include<iostream>

using namespace std;

class Student {
    public:
        string name;
        int age;

        void display() {
            cout << "Name: " << name << ", Age: " << age << endl; 
        }
};

class Node{
    public:
        int data;
        Node *next;
};

int main()
{
    Student *students = new Student[3];
    students[0].name = "Alice";
    students[0].age = 20;
    students[1].name = "Bob";
    students[1].age = 21;
    students[2].name = "Charlie";
    students[2].age = 22;

    for(int i = 0; i <3; i++)
    {
        students[i].display();
    }

    delete[] students;
    return 0;
}