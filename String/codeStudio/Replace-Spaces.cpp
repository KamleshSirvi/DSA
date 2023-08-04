#include <bits/stdc++.h> 
string replaceSpaces(string &str){
	// Write your code here.
    int n = str.length();
    string temp = "";
    for(int i = 0; i < n; i++){
        char ch = str[i];
        if(ch == ' '){
            temp.push_back('@');
            temp.push_back('4');
            temp.push_back('0');
        }else{
            temp.push_back(ch);
        }
    }
    return temp;
}

// time complexity = O(n)  ---> running for loop
// space complexity = O(n) ---> temp string created
