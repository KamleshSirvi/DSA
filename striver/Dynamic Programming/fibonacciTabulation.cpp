#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cout << "enter the value : ";
    cin >> n;

    vector<int> dp(n+1, -1);

    // dp[0] = 0;
    // dp[1] = 1;

    // optimization
    int prev2 = 0;
    int prev = 1;
    // int curri = 0;

    for(int i = 2; i <= n; i++){
        int curri = prev + prev2;
        prev2 = prev;
        prev = curri;

        // dp[i] = dp[i-1] + dp[i-2];
    }
    cout << endl;

    cout << " ans is : " << prev << endl;
    return 0;
}