#include <iostream>
using namespace std;

int main(){
    int num = 5;

    cout <<"value of num : "<< num << endl;

    cout <<"Address of num is : " << &num << endl;

    // pointer start from here
    // address ko store karne ka kaam pointer krta hai

    // int *ptr ---> declare a pointer --> initially store any garbage value
    // create a pointer
    int *ptr = &num;
    // * --> dereference operator
    cout << *ptr << endl;
    
    char ch = 'a';
    char *p2 = &ch;
    cout << "address of ch is : " << &ch << endl;
    cout << "value of ch is : " << *p2 << endl;

    cout << "size of Integer is : " << sizeof(num) << endl;
    cout << "size of Integer pointer is : " << sizeof(ptr) << endl;
    cout << "size of char is : " << sizeof(ch) << endl;
    cout << "size of char pointer is : " << sizeof(p2) << endl;
    return 0;
}