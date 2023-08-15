class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int l(0),r(1),brock(0),profit;
        
      
        while(r < prices.size())
        {
            if(prices[l] < prices[r])
            {
                profit = prices[r] - prices[l];
                brock = max(profit,brock);
            }
            else
              l = r;
            r++;
        }
        return (brock);
    }
};