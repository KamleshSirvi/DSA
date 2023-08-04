#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void selection(int arr[] , int size){
    for(int i = 0; i < size-1; i++){
        // int min = INT16_MAX;
        int min = i;
        cout << "first min is : " << min << endl;
        // find the minumum
        for(int j = i+1; j < size; j++){
            if(arr[min] > arr[j]){
                min = j;
                cout << "for loop wala min : " << min << endl;
            }
        }
        cout << "Minimum is : " << min << endl;
        swap(arr[min], arr[i]);
    }
}
int main(){
    int arr[5] = {12,50,74,10,5};
    for(int i = 0; i < 5; i++){
        cout << arr[i] << endl;
    }
    selection(arr, 5);
    for(int i = 0; i < 5; i++){
        cout << arr[i] << endl;
    }
}