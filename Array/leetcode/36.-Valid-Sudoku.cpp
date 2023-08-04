class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        // using unordered_set
        unordered_set<string> set;

        for(int i = 0; i < 9; i++){
            for(int j = 0; j < 9; j++){
                // row = i
                // col = j
                // box = (row/3)*3 + (col/3)
                int row = i;
                int col = j;
                int box = (row/3)*3 + (col/3);

                string s1 = "";
                string s2 = "";
                string s3 = "";
                if(board[row][col] != '.'){
                    int data = board[row][col] - '0';
                    
                    // add string into s1;
                    s1 = "row" + to_string(row) + to_string(data);
                    s2 = "col" + to_string(col) + to_string(data);
                    s3 = "box" + to_string(box) + to_string(data);

                    if(set.find(s1) != set.end()){
                        // present element 
                        return false;
                    }else{
                        set.insert(s1);
                    }

                    if(set.find(s2) != set.end()){
                        // present element 
                        return false;
                    }else{
                        set.insert(s2);
                    }

                    if(set.find(s3) != set.end()){
                        // present element 
                        return false;
                    }else{
                        set.insert(s3);
                    }

                    // cout << "string s1 : " << s1 << endl;
                    // cout << "string s2 : " << s2 << endl;
                    // cout << "string s3 : " << s3 << endl;
                    // cout << endl;
                }
                
            }
        }
        return true;
    }
};
