class Solution {
public:
    int myAtoi(string s) {
        int sign = 0;
        long out = 0;

        // check whether char is white space or not 
        int i = 0;
        while(i < s.size() && s[i] == ' '){
            i++;
        }
        if(i == s.size()){
            return 0;
        }

        // check whether first element is negative or positive
        if(s[i] == '-'){
            sign = 1;
            i++;
        }
        else if(s[i] == '+'){
            i++;
        }

        while(s[i] >= '0' && s[i] <= '9'){
            out = out * 10;

            // if out is out of int range
            if(out <= INT_MIN || out >= INT_MAX){
                break;
            }
            out = out + (s[i] - '0');
            i++;
        }

        if(sign == 1){
            out = -1 * out;
        }
        if(out <= INT_MIN){
            return INT_MIN;
        }
        if(out >= INT_MAX){
            return INT_MAX;
        }
        
        return (int)out;
    }
};
