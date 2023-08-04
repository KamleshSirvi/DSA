class Solution {
public:
    int fib(int n) {
        if(n < 2){
            return n;
        }
        
        // recursively calling function
        return fib(n-1)+fib(n-2);
    }
};
