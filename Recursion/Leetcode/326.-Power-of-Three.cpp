class Solution {
public:

    bool check(int n, int rem){
        if(n < 0){
            return false;
        }
        if(rem == 1 || rem == 2 || n == 0){
            return false;
        }

        if(rem == 0 && n == 1){
            return true;
        }

        rem = n % 3;
        n = n / 3;
        return check(n, rem);

    }
    bool isPowerOfThree(int n) {
        if(n == 1){
            return true;
        }
        int rem = n % 3;
        n = n /3;
    
        bool ans = check(n,rem );
        return ans;
    }
};
