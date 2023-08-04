#include<iostream>
#include<stack>
using namespace std;

class reverse{
    public:

    // method for reverse
    string reverseStr(string s){
        stack<char> st;
        string str = "";
        for(int i = 0; i < s.size(); i++){
            st.push(s[i]);
        }

        for(int i = 0; i < s.size(); i++){
            char ch = st.top();
            str = str + ch;
            st.pop();
        }
        return str;
    }
};

int main(){
    reverse re;
    cout << "reverse of kamlesh is : " << re.reverseStr("kamlesh") << endl; 
    cout << "reverse of suresh is : " << re.reverseStr("suresh") << endl;   

    return 0;
}