class Solution {
public:
    int maxProfit(vector<int>& prices) {
        /* Dynamic Programming - O(n) & O(1) */
        // int currMin = prices[0];
        // int maxProfit = 0;
        // for (int i = 1, n = prices.size(); i < n; i++) {
        //     maxProfit = max(maxProfit, prices[i] - currMin);
        //     currMin = min(currMin, prices[i]);
        // }
        // return maxProfit;

        
        /* BUY LOW, SELL HIGH */
        /* Two pointer sliding window - O(n) & O(1) */
        int n = prices.size();
        int left = 0; // left -> buy low pointer
        int right = 1; // sell at high pointer
        int maxP = 0;

        while (right < n) {
            // Is curr transaction profitable?
            if (prices[left] < prices[right]) {
                maxP = max(maxP, prices[right] - prices[left]);
            }
            else {
                left = right; // move left to lowest buying prices
            }
            right++;
        }
        return maxP;
        
    }
};
