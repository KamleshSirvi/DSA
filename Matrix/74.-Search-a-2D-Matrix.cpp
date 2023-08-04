// efficient solution 
// Time Complexity = O(log(n))
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int rowLen = matrix.size();
        int colLen = matrix[0].size();
        
        // if(matrix[rowLen][colLen])
        for(int row = 0; row < rowLen; row++){
            if(target <= matrix[row][colLen-1]){
                // binary search 
                int start = 0;
                int end = colLen-1;
                int mid;
                while(start <= end){
                    mid = start + (end - start)/2;
                    if(matrix[row][mid] == target){
                        return 1;
                    }else if(matrix[row][mid] > target){
                        end = mid - 1;
                    }else if(matrix[row][mid] < target){
                        start = mid + 1;
                    }
                }
            }
        }
        return 0;
    }
};

// little bit high time complexity
// time complexity = O(n*log(n))
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int rowLen = matrix.size();
        int colLen = matrix[0].size();

        for(int row = 0; row < rowLen; row++){
            if(target <= matrix[row][colLen-1]){
                // binary search 
                int start = 0;
                int end = colLen-1;
                int mid;
                while(start <= end){
                    mid = start + (end - start)/2;
                    if(matrix[row][mid] == target){
                        return 1;
                    }else if(matrix[row][mid] > target){
                        end = mid - 1;
                    }else if(matrix[row][mid] < target){
                        start = mid + 1;
                    }
                }
            }
        }
        return 0;
    }
};
