#include <iostream>
using namespace std;

void alternate(int arr[], int size){
    int first = 0;
    int second = 1;
    for(int i=0; i<size/2; i++) {
        swap(arr[first], arr[second]);
        first += 2;
        second += 2;
    }
}
void alternate2(int arr[], int size){
    for(int i = 0; i < size; i+=2){
        if(i+1 < size){
            // swap(arr[i], arr[i+1]);
            int temp = arr[i];
            arr[i] = arr[i+1];
            arr[i+1] = temp;
        }
    }
}
void printArray(int arr[], int size){
    for(int i = 0; i < size; i++){
        cout<< arr[i] << endl;
    }
}
int main(){
    int arr[7] = {1,2,3,4,5,6,7};
    alternate2(arr, 7);
    printArray(arr, 7);
}