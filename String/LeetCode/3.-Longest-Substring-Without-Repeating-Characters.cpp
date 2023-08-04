class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        set<char> Set;

        int start = 0;
        int end = 0;
        int Max = 0;

        while(start < s.size()){
            auto x = Set.find(s[start]);

            // if x is not present in the set
            if(x == Set.end()){
                if(Max < start - end + 1){
                    Max = start - end + 1;
                }
                Set.insert(s[start]);
                start++;
            }else{  // element is already present in the set
                Set.erase(s[end]);
                end++;
            }
        }
        return Max;
      
        // i don't know the code is running or not but it shows that time limit exceed
        // unordered_map< string, int > map;
        // unordered_set< char> set;
        // for(int i = 0; i < s.length(); i++){
        //     string str;
        //     for(int j = i; j < s.length(); j++){
        //         str += s[j];
        //         map.insert({str, j-i+1});
        //     }
            
        // }
        // int res = 0;
        // for(auto x : map){
        //     string mapStr = x.first;
        //     unordered_set< char > set;
        //     for(int i = 0; i < mapStr.length(); i++){
        //         set.insert(mapStr[i]);
        //     }
            
        //     if(set.size() == x.second){
        //         res = max(x.second, res);
        //     }
        // }
        // return res;
    }
};
