class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int currMin = prices[0];
        int maxProfit = 0;
        for (int i = 1, n = prices.size(); i < n; i++) {
            maxProfit = max(maxProfit, prices[i] - currMin);
            currMin = min(currMin, prices[i]);
        }
        return maxProfit;
        
    }
};
