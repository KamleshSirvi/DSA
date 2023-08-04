// simplest solution

class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        int n = s.size();
        
        string newStr = s;
        
        for(int i = 0; i < n; ++i){
            cout << "Added element is : " << s.at(indices[i]);
            cout << " idices is : " << indices[i] << endl;
            newStr[indices[i]] = s[i];
        }
        return newStr;
    }
};
