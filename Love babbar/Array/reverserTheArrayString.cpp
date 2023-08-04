#include <iostream>
#include <unordered_map>
using namespace std;

// remove extra space
void maxTime(string str){
    unordered_map<char, int> map;
    int k = 0;
    int n = str.size();
    char ch[n]; 
    for(int i = 0; i < n ; i++){
        ch[i] = str.at(i);
    }
    for(auto x : str){
        map[x]++;
        k++;
    }
    int j = 0;
    for(auto x : map){
        cout << "first value is : " << x.first << " second value is : " << x.second << endl;
        
        j++;
    }
}
int main(){
    string s = "test";
    maxTime(s);

    for (size_t i = 0; i < count; i++)
    {
        /* code */
    }
    
}