#include <iostream>
using namespace std;

int LinearSearch(int arr[], int number){
    // int size = sizeof(arr)/sizeof(int);
    for(int i=0; i<5; i++){
        if(arr[i] == number){
            return i;
        }
    }
    return 0;
}

int main(){
    int arr[5] = {1,3,2,5,6};
    cout<< LinearSearch(arr, 6) <<endl;
}