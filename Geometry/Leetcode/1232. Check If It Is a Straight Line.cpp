class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& coordinates) {
        int n = coordinates.size();

        // base case does not required according to the question
        // if(n <= 2){
        //     return true;
        // }

        float slope1, slope2;
        float x1, x2;
        float y1, y2;
        for(int i = 2; i < n; i++){
            cout << "for i = " << i << endl;
            x1 = coordinates[i][0] - coordinates[0][0];
            y1 = coordinates[i][1] - coordinates[0][1];
            x2 = coordinates[i-1][0] - coordinates[0][0];
            y2 = coordinates[i-1][1] - coordinates[0][1];
            if(x1 == 0 && x2 == 0){
                continue;
            }

            if(x1 == 0 && !x2 == 0){
                return false;
            }
            if(!x1 == 0 && x2 == 0){
                return false;
            }
            
            slope1 = y1 / x1;
            slope2 = y2 / x2;
            if(slope1 != slope2){
                return false;
            }
        }

        return true;
    }
};
