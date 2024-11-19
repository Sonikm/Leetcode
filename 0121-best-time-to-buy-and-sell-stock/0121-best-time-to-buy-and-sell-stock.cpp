class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxProfit = 0;
        int n = prices.size();
        int bestBuy = prices[0];
        int index = 0;

        for(int i = 0; i < n; i++){
            if(bestBuy > prices[i]){
              bestBuy = prices[i];
              index = i;
            }
        }

        for(int i=index+1; i<n; i++ ){
            int profit = prices[i] - bestBuy;
            maxProfit = max(maxProfit, profit);
        }

        return maxProfit;
    }
};