class Solution {
public:
    int maxProfit(vector<int>& prices) {
        // int l = 0;
        // int r = 1;
        // int max_profit = 0;
        // while(r < prices.size()){
        //     if(prices[r] < prices[l]){
        //         l = r;
        //     }
        //     else{
        //         int profit = prices[r] - prices[l];
        //         max_profit = max(max_profit, profit);
        //     }
            
        //     ++r;
        // }
        // return max_profit;

        int max_profit = 0;
        int l = 0;
        int r = 1;
        while(r < prices.size()){
            if(prices[r] < prices[l]){
                l =r;
            }
            else{
                int profit = prices[r] - prices[l];
                max_profit = max(max_profit, profit);
            }
            ++r;
        }
        return max_profit;
    }
};
