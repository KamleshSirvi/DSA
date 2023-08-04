class Solution {
public:
    int maxProfit(vector<int>& prices) {
        // efficient approach
        int minValue = INT_MAX;
        int maxProfit = 0;

        for(int i = 0; i < prices.size(); i++){
            if(prices[i] < minValue){
                minValue = prices[i];
            }else if(prices[i] - minValue > maxProfit){
                maxProfit = prices[i] - minValue;
            }
        }
        return maxProfit;
        
        // brute force approach
        // int maxProfit = 0;

        // for(int i = 0; i < prices.size()-1; i++){
        //     for(int j = i+1; j < prices.size(); j++){
        //         if(prices[i] < prices[j]){
        //             maxProfit = max(maxProfit, prices[j]-prices[i]);
        //         }
        //     }
        // }
        // return maxProfit;
    }
};
