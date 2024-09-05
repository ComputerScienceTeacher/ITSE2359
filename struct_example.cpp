#include<iostream>

using namespace std;

struct Student 
{
    string name;
    int age;
    float gpa;
};


/*
* Prints the student data
*/
void printStudent(Student s)
{
    cout << "\nStudent Information:\n";
    cout << "Name: " << s.name << endl;
    cout << "Age: " << s.age << endl;
    cout << "GPA: " << s.gpa << endl;
}

Student getStudent(int index, Student students[]){
    Student result = students[index];
    return result;
}


int main() 
{
    Student students[3];

    // Getting input from the user
    for (int i = 0; i < 3; i++) {
        cout << "Enter name for student " << i + 1 << ": ";
        cin.ignore();
        getline(cin, students[i].name);
        cout << "Enter age for student " << i + 1 << ": ";
        cin >> students[i].age;
        cout << "Enter GPA for student " << i + 1 << ": ";
        cin >> students[i].gpa;
    }


    // Printing the data
    for(int i=0; i<3; i++){
        printStudent(students[i]);
    }
    return 0;
}