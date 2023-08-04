class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        int m = mat.size();
        int n = mat[0].size();

        
        if(r*c != m*n){
            return mat;
        }

        vector<vector<int>> v(r, vector<int>(c));

        int row = 0;
        int col = 0;

        for(int i = 0; i < mat.size(); i++){
            for(int j = 0; j < mat[i].size(); j++){
                v[row][col] = mat[i][j];
                col++;
                if(col == c){
                    row++;
                    col = 0;
                }
            }
        }

        return v;

    }
};
