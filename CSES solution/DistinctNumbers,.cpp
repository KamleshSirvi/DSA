#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int distnictNumbers(vector<int> ans){
    // no extra space
    unordered_set<int> set;
    // int count = 0;

    for(int i = 0; i < ans.size(); i++){
        set.insert(ans[i]);
    }
    return set.size();
}

int main(){
    int n;
    cin >> n;

    vector<int> element;

    // int arr[n];

    for(int i = 0; i < n; i++){
        int t;
        cin >> t;
        element.push_back(t);
    }

    int ans = distnictNumbers(element);
    cout << ans << endl;
    return 0;
}
