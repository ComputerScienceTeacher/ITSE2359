#include<iostream>
#include<stack>

using namespace std;

void printStack(stack<int> s){
    while(!s.empty()){
        cout<< s.top() << " ";
        s.pop();
    }
    cout << endl;
}

int main(){
    //declare a stack of integers
    stack<int> myStack;

    //push elements on to the stack
    myStack.push(10);
    myStack.push(20);
    myStack.push(30);

    printStack(myStack);

    //Display the top element
    cout << "top element is: " << myStack.top() << endl;


    //pop an element
    myStack.pop();
    cout << "After popping, top element is: " << myStack.top() << endl;

    //check if the stack is empty
    if (myStack.empty()){
        cout << "Stack is empty" << endl;
    } 
    else 
    {
        cout << "Stack is not empty" << endl;
    }

    printStack(myStack);
    return 0;
}

