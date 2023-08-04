#include <bits/stdc++.h> 
pair<int, int> firstAndLastPosition(vector<int>& arr, int n, int k)
{
    // Write your code here
    // create a pair function for storing first and last occurences
    pair<int, int> p;
    // first occurence
    int s1 = 0;
    int e1 = n - 1;
    int ans1 = -1;
    while(s1 <= e1){
        int mid1 = s1 + (e1 - s1)/2;
        if(arr[mid1] == k){
            ans1 = mid1;
            e1 = mid1 - 1;
        }else if(arr[mid1] > k){
            e1 = mid1 - 1;
        }else if(arr[mid1] < k){
            s1 = mid1 + 1;
        }
    }
    
    int ans2 = -1;
    int s2 = 0;
    int e2 = n - 1;
    while(s2 <= e2){
        int mid2 = s2 + (e2 - s2)/2;
        if(arr[mid2] == k){
            ans2 = mid2;
            s2 = mid2 + 1;
        }else if(arr[mid2] > k){
            e2 = mid2 - 1;
        }else if(arr[mid2] < k){
            s2 = mid2 + 1;
        }
    }
    p.first = ans1;
    p.second = ans2;
    return p;
}
