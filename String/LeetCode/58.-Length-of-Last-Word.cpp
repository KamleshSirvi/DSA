class Solution {
public:
    int lengthOfLastWord(string s) {
        int length = 0;
        int tail = s.length()-1;
        
      // remove space from end of string 
        while(tail >= 0 && s[tail] == ' '){
            tail--;
        }
      
      // find next space and we find then return the length
        while(tail >= 0 && s[tail] != ' '){
            length++;
            tail--;
        }
        return length;
    }
};
