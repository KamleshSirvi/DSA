#include <iostream>
using namespace std;

int main(){
    int array[100];
    fill_n(array,100,5);
    int n = sizeof(array)/sizeof(int);
    for(int i = 0; i < n; i++){
        cout<< "index["<<i<<"] : "<< array[i]<<endl;
    }
}