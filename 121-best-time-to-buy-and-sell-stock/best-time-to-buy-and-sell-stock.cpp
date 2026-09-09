class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int sell = 1;
        int buy = 0;
        int profit = INT_MIN;

        while(sell < n)
        {
            int tempprofit =  prices[sell] - prices[buy];
            if(tempprofit < 0)
            {
                buy=sell;
                sell++;
            }
            else{
                profit = max(profit, tempprofit);
                sell++;
            }
        }
        if(profit==INT_MIN)
        {
            return 0;
        }
        else return profit;
    }
};