class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int x = 0;
        for(int i = 0; i < operations.length(); i++){
            if(operations[i] == "--X"){
                --x;
            }else if(operations[i] == "++X"){
                ++x;
            }else if(operations[i] == "X--"){
                x--;
            }else if(operations[i] == "X++"){
                x++;
            }else{
                return 0;
            }
        }
        return x;
    }
};
