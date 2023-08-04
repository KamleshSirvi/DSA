#include <iostream>
using namespace std;

int sumOfFirst(int arr[], int mid){
    int sum = 0;
    for(int i = 0; i < mid - 1; i++){
        sum = sum + arr[i];
    }
    return sum;
};

int lastSum(int arr[], int mid){
    int res = 0;
    for(int i = mid + 1; i < 6; i++){
        res = res + arr[i];
    }
    return res;
};

void pivot(int arr[], int size){
    int start = 0;
    int end = size-1;
    int mid = start + (end - start)/2;
    while(start < end){
        mid = start + (end - start)/2;
        if(sumOfFirst(arr, (mid-1)) > lastSum(arr, (mid+1))){
            start = mid + 1;
        }else if(sumOfFirst(arr, (mid-1)) < lastSum(arr, (mid+1))){
            end = mid - 1;
        }else{
            cout << "Element is : " << mid <<endl;
        }
    }
    cout << "mid element is : " << mid << endl;
}
int main(){
    int arr[6] = {1,7,3,6,5,6};
    pivot(arr, 6);
}