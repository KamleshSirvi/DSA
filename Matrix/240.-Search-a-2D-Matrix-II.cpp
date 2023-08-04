class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int rowLen = matrix.size();
        int colLen = matrix[0].size();
        
        int rowIndex = 0;
        int colIndex = colLen - 1;
        
        while(rowIndex < rowLen && colIndex >= 0){
            int element = matrix[rowIndex][colIndex];
            
            if(element == target){
                return 1;
            }else if(element > target){
                colIndex--;
            }else if(element < target){
                rowIndex++;
            }
        }
        return 0;
    }
};
