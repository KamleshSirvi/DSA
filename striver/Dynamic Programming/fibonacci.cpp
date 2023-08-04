#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int fun(int n, vector<int> &dp){
    if(n <= 1){
        return n;
    }

    // now dp comes into the mind 
    if(dp[n] != -1){
        return dp[n];
    }


    return dp[n] =  fun(n-1, dp) + fun(n-2, dp);
}

int main(){

    int n;
    cin >> n;

    // creating a vector

    vector<int> dp(n+1, -1);

    int res = fun(n, dp);

    cout << "ans is : " << res ;
    return 0;
}