#include<iostream>
#include<stack>

using namespace std;

int main(){
    // creating a stack using cpp stl
    stack<int> s;

    // push element 
    s.push(2);
    s.push(3);

    // pop element 
    s.pop();

    // print peak element
    cout << "top element is : " << s.top() << endl;

    // printing stack is empty or not
    if(s.empty()){
        cout << "stack is empty" << endl;
    }else{
        cout << "stack is not empty" << endl;
    }

    // print the size of stack
    cout << "size of the stack is : " << s.size() << endl;

    return 0;
}