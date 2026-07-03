class Solution {
public:
    int maxProfit(vector<int>& prices) 
    {
        int profit=0;
        int buy=prices[0];
        int sell=prices[0];
        for(int i=0;i<prices.size();i++)
        {
            if(prices[i]<buy)
            {
                buy=prices[i];
                sell=prices[i];
            }
            if(prices[i]>sell)
            {
                sell=prices[i];
            }
            int current_profit=sell-buy;
            profit=max(current_profit,profit);
        }
        return profit;

        
    }
};