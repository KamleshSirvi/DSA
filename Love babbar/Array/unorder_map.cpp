#include <iostream>
#include <unordered_map>
#include <bits/stdc++.h>
using namespace std;

int main(){
    int arr[10] = {1,2,3,4,5,1,5,2,1,2};
    unordered_map< int , int> map;

    // for(auto x : arr){
    //     map[x]++;
    // }
    for(int i = 0; i < 10; i++){
        map[arr[i]]++;
    }
    for(auto x : map){
        cout <<"key is : "<< x.first << " value is : " << x.second << endl;
    }
}