class Solution {
public:
    // remove extra space
    bool removeSpace(char ch){
        if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || (ch >= '0' && ch <= '9')){
            return 1;
        }else{
            return 0;
        }
    }
    
    // convert to lowerCase
    char toLowerCase(char ch){
        if( (ch >= 'a' &&ch <= 'z') || (ch >= '0' && ch <= '9') ){
            return ch;
        }else{
            char temp = ch - 'A' + 'a';
            return temp;
        }
    }
   
    bool isPalindrome(string s) {
        string temp = "";
        for(int i = 0; i < s.length(); i++){
            if(removeSpace(s[i])){
                temp.push_back(s[i]);
            }
        }
        for(int i = 0; i < temp.length(); i++){
            temp[i] = toLowerCase(temp[i]);
        }
        // check for pallindrome
        int start = 0;
        int end = temp.length() - 1;
        
        while(start <= end){
            if(temp[start] != temp[end]){
                return 0;
            }
            start++;
            end--;
        }
        return 1;
    }
};
