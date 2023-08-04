#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void reverseArray1(int arr[], int size){
    int start = 0;
    int end = size-1;
    while(start <= end){
        // swap(arr[start], arr[end]);
        // if use of swap function is not allowed
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

void printArray(int arr[], int size){
    for(int i = 0; i < size; i++){
        cout<< arr[i] <<endl;
    }
}
int main(){
    int arr[7] = {1,2,3,4,5,6,7};
    reverseArray1(arr, 7);
    printArray(arr, 7);
}