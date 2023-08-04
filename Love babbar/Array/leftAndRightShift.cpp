#include<iostream>
using namespace std;

int main(){
    int a = 1;
    int n = 9;
    int res = 0;
    while(a <= n){
        res = a ^ n;
        cout << "a is : " << a <<endl;
        a = a << 1;
        cout << "res is : " << res<< endl;
        if(res == 0){
            cout << "n is power of two";
        }
        // res = 0;
    }
}