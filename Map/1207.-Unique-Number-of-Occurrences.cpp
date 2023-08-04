class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int, int> map;
        unordered_set<int> set;
        
        for(auto x : arr){
            map[x]++;
        }
        for(auto& p : map){
            set.insert(p.second);
        }
        return map.size() == set.size();
    }
};
