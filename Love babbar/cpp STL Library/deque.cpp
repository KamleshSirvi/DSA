#include<deque>
#include <iostream>
using namespace std;

int main(){
    deque<int> d;
    // deque is similler as vector
    // but the difference is that => in vector we insert element at end
    // but in deque we insert element at beginning and end both side
    d.push_back(1);
    d.push_front(2);
    d.push_back(3);
    d.push_front(10);
    d.push_back(20);

    d.pop_front();
    d.pop_back();

    cout << "index 0 is : " << d.at(0) << endl;
    cout << "Front element is : " << d.front() << endl;
    cout << "Last element is : " << d.back() << endl;

    cout << "Deque is empty or not : " << d.empty() << endl;
    d.erase(d.begin(), d.end());
    cout << "After erase the deque size is : " << d.size() << endl;
}

