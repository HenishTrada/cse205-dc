class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int currentProfit= 0,profit=0, buyPrice = INT_MAX;
int n=0;
        for(int i=0; i<prices.size(); i++){
            if(prices[i] < buyPrice) {
                buyPrice = prices[i];
            }
            currentProfit = prices[i] - buyPrice;

            if(profit < currentProfit) profit = currentProfit;
        }

        return profit;

    }
};