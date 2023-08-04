class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int> v;
        unordered_map<int, int> map1;
        unordered_map<int, int> map2;

        for(auto x : nums1){
            map1[x]++;
        }
        
        for(auto x : nums2){
            map2[x]++;
        }

        for(auto x : map1){
            int key = x.first;
            int val = x.second;
            if(map2.find(key) != map2.end()){
                // present 
                int secVal = map2[key];
                int temp = min(val, secVal);
                
                for(int i = 0; i < temp; i++){
                    v.push_back(key);
                }
            }else{
                continue;
            }
        }
        return v;

    }
};
