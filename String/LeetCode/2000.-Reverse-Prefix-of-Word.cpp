class Solution {
public:
    string reversePrefix(string word, char ch) {
        // find the index of ch
        int i;
        int index = 0;
        for(i = 0; i < word.size(); i++){
            if(word.at(i) == ch){
                index = i;
                break;
            }
        }
        
        // ch is present at ith index
        // reverse 0 to ith index
        cout << "index is : " << index<< endl;
                int start = 0;
                int end = index;
        
                while(start <= end){
                    // reverse the character
                    swap(word[start], word[end]);
                    start++;
                    end--;
                }
        return word;
    }
};
