
#include <bits/stdc++.h> 
#include <bits/stdc++.h> 
vector<vector<int>> pairSum(vector<int> &arr, int s){
   // Write your code here.
    // 2d vector
    vector<vector<int>> v;
    for(int i = 0; i < arr.size(); i++){
        for(int j = i + 1; j < arr.size(); j++){
            if(arr[i] + arr[j] == s){
                vector<int> temp;
                temp.push_back(min(arr[i] , arr[j])); // for storing first value
                temp.push_back(max(arr[i], arr[j])); // for storing second value
                v.push_back(temp);
            }
        }
    }
    sort(v.begin(), v.end());
    return v;
}
