#include <iostream>
using namespace std;

class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        int n = s.size();
        
        string newStr = "";
        
        for(int i = 0; i < n; i++){
            cout << "Added element is : " << s.at(indices[i]);
            cout << " idices is : " << indices[i] << endl;
            newStr.push_back(s.at(indices[i]));
        }
        return newStr;
    }
};

int main(){
    
}