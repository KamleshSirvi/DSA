#include <iostream>
#include <array>
using namespace std;

int main(){
    //Creating an array
    array<int, 4> a = {1,2,3,4};

    // find the size of array
    int size = a.size();

    // print the array
    cout << "Array is : " <<endl;
    for(int i = 0; i < size; i++){
        cout <<"Element at index " << i << " : "<< a[i] << endl;
    }
    
    // find element at fixed index
    cout << "Element at index 2 is : " << a.at(2) << endl;

    // find if array is empty or not
    cout << "Array is empty or not : " << a.empty() << endl;

    // find first element in array
    cout << "first element is : " << a.front() << endl;

    // find last element 
    cout << "Last element is : " << a.back() << endl;
}