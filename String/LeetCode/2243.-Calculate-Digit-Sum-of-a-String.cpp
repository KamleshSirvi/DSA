class Solution {
public:
    string digitSum(string s, int k) {
        string ans;
        // when condition is true 
        while(1){
            if(s.length() <= k)
                return s;
            int sum = 0;
            // traverse whole string once
            for(int i = 0; i < s.length(); i++){
                if(i != 0 && i % k == 0){
                    ans = ans + to_string(sum);
                    sum = 0;
                }
                sum = sum + (s[i] - '0');
            }
            ans = ans + to_string(sum);
            s = ans;
            ans = "";
        }
    }
};
