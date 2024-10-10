#include <iostream>

using namespace std;

class Student{
    public: 
        //constructor
        Student(){
            cout << "Constructor" <<endl;
        }

        //destructor
        ~Student(){
            cout << "Destructor" << endl;
        }

        void printName()
        {
            cout << "name is " + s_name;
        }

        void setName (string name)
        {
            s_name = name;
        }
        
        string getName()
        {
            return s_name;
        }

    private:
        string s_name;
};


int main(){
    
    cout << "Program Starts" <<endl;
    Student mike;
    mike.setName("Mike S.");
    mike.printName();
    
    Student sue;
    sue.setName("Sue E.");
    sue.printName();

    cout << "Program Ends" <<endl;
    return 0;
}