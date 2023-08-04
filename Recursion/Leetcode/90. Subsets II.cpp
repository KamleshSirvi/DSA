class Solution {
public:
    void subset(vector<int> nums, set<vector<int>> &set, vector<int> v, int ind, int n){
        if(ind == n){
            sort(v.begin(), v.end());
            set.insert(v);
            return ;
        }

        v.push_back(nums[ind]);
        subset(nums, set, v, ind+1, n);
        v.pop_back();
        subset(nums, set, v, ind+1, n);
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        set<vector<int>> set;

        int n = nums.size();

        vector<int> v;

        subset(nums, set, v, 0, n);
        
        vector<vector<int>> ans;

        for(auto x : set){
            ans.push_back(x);
        }

        return ans;
    }
};


// second solution  optimal solution
class Solution {
public:
    void subset(vector<int> &nums, vector<vector<int>> &ans, vector<int> &v, int ind){
        ans.push_back(v);

        for(int i = ind; i < nums.size(); i++){
            if(i != ind && nums[i] == nums[i - 1]){
                continue;
            }
            v.push_back(nums[i]);
            subset(nums, ans, v, i+1);
            v.pop_back();
        }

    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>> ans;

        int n = nums.size();

        vector<int> v;
        sort(nums.begin(), nums.end());

        subset(nums, ans, v, 0);

        return ans;
    }
};
