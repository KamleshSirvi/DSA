class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char, int > map;

        int i = 0;
        for(auto x : s){
            map[s[i]]++;
            i++;
        }
        for(int i = 0; i < s.size(); i++){
            if(map[s[i]] == 1){
                return i;
            }
        }
        return -1;
    }
};
