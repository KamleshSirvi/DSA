class Solution {
public:
    string reverseWords(string s) {
        // create a stack and store it
        stack<char> st;
        string temp = "";
        for(int i = 0; i < s.length(); i++){
            
            if(s[i] == ' '){
                if(!st.empty()){
                    while(!st.empty()){
                    temp.push_back(st.top());
                    st.pop();
                    }
                    temp = temp + " ";
                }
            }else{
             st.push(s[i]); 
                if(i == s.length()-1){
                    while(!st.empty()){
                    temp.push_back(st.top());
                    st.pop();
                    }
                }
            }
        }
        return temp;
    }
};
