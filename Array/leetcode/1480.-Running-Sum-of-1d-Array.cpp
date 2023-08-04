class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        // efficient solution
        int i = 1;
        while(i < nums.size()){
            nums[i] = nums[i] + nums[i-1];
            i++;
        }
        return nums;
        // naive solution
        // vector<int> v;
        // int sum = 0;
        // for(int i = 0; i < nums.size(); i++){
        //     for(int j = 0; j <= i; j++){
        //         sum = sum + nums[j];
        //     }
        //     v.push_back(sum);
        //     sum = 0;
        // }
        // return v;
    }
};
