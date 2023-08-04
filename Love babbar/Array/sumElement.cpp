#include<iostream>
using namespace std;

int sumOfElement(int arr[], int size){
    int sum = 0;
    for(int i = 0; i < size; i++){
        sum = sum + arr[i];
    }
    return sum;
};
int main(){
    int arr[10] = {1,2,5,4,7,8,6,3,4,4};
    cout << sumOfElement(arr, 10);
}