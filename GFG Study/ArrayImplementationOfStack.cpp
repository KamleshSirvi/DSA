#include <iostream>

using namespace std;

class Stack{
    public:
    int size;
    int top;
    int* arr;
    
    Stack(int s){
        this->size = s;
        top = -1;
        arr = new int[26];
    }

    // operation on stack
    void push(int element){
        if(top + 1 < size){
            top++;
            arr[top] = element;
        }else{
            cout << "stack overflow" << endl;
        }
    }

    void pop(){
        if(top >= 0){
            top--;
        }else{
            cout << "stack underflow" << endl;
        }
    }

    int Size(){
        return top+1;
    }

    int peek(){
        if(top >= 0){
            return arr[top];
        }else{
            return -1;
        }
    }

    bool empty(){
        if(top >= 0){
            return false;
        }else{
            return true;
        }
    }
};

int main(){
    Stack st(10);

    st.push(5);
    st.push(15);
    st.push(25);

    cout << "size : " << st.Size() << endl;
    cout << "peek Element : " << st.peek() << endl;
    
    st.pop();
    st.push(35);

    cout << "peek element is : " << st.peek() << endl;
    
    if(st.empty()){
        cout << "stack is empty" << endl;
    }else{
        cout << "Stack is not empty" << endl;
    }

    return 0;
}