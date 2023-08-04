class Solution {
public:
    vector<vector<int>> mergeSimilarItems(vector<vector<int>>& items1, vector<vector<int>>& items2) {
        map<int, int> map;
        vector<vector<int>> v;

        for(auto x : items1){
            map[x[0]] = map[x[0]] + x[1];
        }
        
        for(auto x : items2){
            map[x[0]] = map[x[0]] + x[1];
        }

        for(auto x : map){
            v.push_back({x.first, x.second});
        }

        return v;
    }
};
