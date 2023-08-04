// method name = seive of eratosthenes

class Solution {
public:
    int countPrimes(int n) {
        vector<bool> v(n+1, true);
        int count = 0;
        // 0 and 1 are not prime number
        v[0] = v[1] = false;
        
        for(int i = 2; i < n; i++){
            if(v[i]){
                count++;
            
            for(int j = 2*i; j < n; j = j+i){
                v[j] = false;
            }
            }
        }
        return count;
    }
};
