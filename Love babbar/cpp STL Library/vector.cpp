#include <vector>
#include <iostream>
using namespace std;

int main(){
    vector<int> v;
    // another way of declaring vector of initially size and fill with 1
    // vector<int> v(5, 1);

    // copy the vector v into v2
    // vector<int> v2(v);
    
    // capacity = the maximum size that vector can be store
    cout << "capacity is : " << v.capacity() << endl;

    // add element into vector
    v.push_back(5);
    cout << "capacity is : " << v.capacity() << endl;

    v.push_back(10);
    cout << "capacity is : " << v.capacity() << endl;

    v.push_back(40);
    cout << "capacity is : " << v.capacity() << endl;
    // each time size of vector is doubled
    cout << "Size of vector is : " << v.size() << endl;
    // in some case size != capacity

    cout << "element at index 1 is : " << v.at(1) << endl;
    cout << "first element is : " << v.front() << endl;
    cout << "Last element is : " << v.back() << endl;
    v.pop_back();
    cout << "after removing last element is : "<< v.back() << endl;

    v.clear();
    // after clearing vector size is 0 but capacity is not 0.
    // capacity means = how many memory accure by vector
    cout << "capacity of vector is : " << v.capacity() << endl;
    cout << "size of vector is : " << v.size() << endl;



}