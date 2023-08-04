#include <iostream>
using namespace std;

long long problemA(long long *arr, int n){
    signed long long res = 0;
    for(int i = 1; i < n; i++){
        int temp = arr[0] * arr[i];
        arr[0] = temp;
        arr[i] = 1;
    }

    for(int i = 0; i < n; i++){
        res = res + arr[i];
    }
    return res * 2022;
}

int main(){
    int t;
    cin >> t;
    while(t --> 0){
        int n;
        cin >> n;
        long long arr[n];
        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }
        // problemA(arr, n);
        cout << problemA(arr, n) << endl;
    }
    
    return 0;
}