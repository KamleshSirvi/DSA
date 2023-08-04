// less space - efficient solution
class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        // tarnspose the matrix
        int row = matrix.size();
        int col = matrix[0].size();
        
        // swap elements
        for(int i = 0; i < row; i++){
            for(int j = i; j < col; j++){
                swap(matrix[i][j], matrix[j][i]);
            }
        }
            int start = 0;
            int end = col - 1;
            while(start < end){
                for(int i = 0; i < row; i++){
                swap(matrix[i][start], matrix[i][end]);    
            }
            start++;
            end--;
        }
    }
};

class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        // tarnspose the matrix
        int row = matrix.size();
        int col = matrix[0].size();
        int newMatrix[col][row];
        // transpose has been done
        for(int i = 0; i < row; i++){
            for(int j = 0; j < col; j++){
                newMatrix[i][j] = matrix[j][i];
            }
        }
//         swap rows
        int start = 0;
        int end = col - 1;
        while(start <= end){
            for(int i = 0; i < row; i++){
                swap(newMatrix[i][start], newMatrix[i][end]);
            }
            start++;
            end--;
        }
        for(int i = 0; i < row; i++){
            for(int j = 0; j < col; j++){
                matrix[i][j] = newMatrix[i][j];
            }
        }
    }
};
