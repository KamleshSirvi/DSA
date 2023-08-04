class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> map;

        if(s.size() != t.size()){
            return false;
        }
        for(int i = 0; i < s.size(); i++){
            map[s[i]]++;
        }

        for(int i = 0; i < t.size(); i++){
            auto x = map.find(t[i]);
            if(x != map.end()){
                cout << "present : " << x->first << endl;
                // update map
                x->second = x->second - 1;
                if(x->second == 0){
                    map.erase(x);
                }
            }
        }
        return map.empty();
    }
};
