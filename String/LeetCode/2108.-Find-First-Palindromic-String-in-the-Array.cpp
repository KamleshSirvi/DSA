class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        string s2 = "";
        for(int i = 0; i < words.size(); i++){
            // two pointer approach
            string s = "";
            
            for(int j = words[i].size() - 1; j >= 0; j--){
                s.push_back(words[i].at(j));
            }
            cout << "string is : " << s << endl;
            if(words[i] == s){
            return s;
        }
        }
        
        return s2;
    }
};
