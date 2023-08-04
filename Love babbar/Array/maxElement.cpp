#include <iostream>
using namespace std;

int maxValue(int arr[], int size){
    int count = INT16_MIN;
    // int max = 0;
    for(int i = 0; i < size; i++){
        // if(count < arr[i]){
            // cout<<arr[i] <<endl;
            count = max(count, arr[i]);
        // }
    }
    return count;
};
int minValue(int arr[], int size){
    int count = arr[0];
    for(int i = 0; i < size; i++){
        count = min(count, arr[i]);
    }
    return count;
};
int main(){
    int arr[10] = {2,5,2,7,-6,4000,10,100,800,41};
    cout<< maxValue(arr, 10)<<endl;
    cout<< minValue(arr, 10);
}