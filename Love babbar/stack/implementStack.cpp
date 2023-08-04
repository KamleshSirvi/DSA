#include <iostream>
using namespace std;

class Stack{
    public:

    int *arr;
    int top;
    int size;

    Stack(int size){
        this -> size = size;
        arr = new int[26];
        top = -1;
    }

    // inserting an element 
    void push(int element){
        // atleast one empty space is available than we can add element in stack
        if(size - top > 1){
            top++;
            arr[top] = element;
        }else{
            cout << "Stack Overflow";
        }
    }

    // removing an element
    void pop(){
        if(top != -1){
            top--;
        }else{
            cout << "stack is empty" << endl;
        }
    }

    // find peek element 
    int peek(){
        if(top >= 0){
            return arr[top];
        }else{
            cout << "stack is empty" << endl;
            return -1;
        }
    }

    // is stack empty ?
    bool isEmpty(){
        if(top == -1){
            return true;
        }else{
            return false;
        }
    }

};

int main(){
    Stack st(5);
    st.push(5);
    cout << "peek element is : " << st.peek() << endl;
    
    return 0;
}