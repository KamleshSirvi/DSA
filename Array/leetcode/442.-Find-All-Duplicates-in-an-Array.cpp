
class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> v;
        unordered_map<int ,int> map;
        
        for(auto x : nums){
            map[x]++;
        }
        
        for(auto i = map.begin(); i != map.end(); i++){
            if((i->second) >= 2){
                v.push_back(i->first);
            }
        }
        return v;
    }
};
