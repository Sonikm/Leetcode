class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        int i=0, j=1;
        int n=prices.size();

        while(i<n-1){

          while(j<n){
            if(prices[j] <= prices[i]) {
                prices[i] = prices[i] - prices[j];
                break;
            }
            j++;
          }
          i++, j=i+1;
        }

        return prices;
    }
};