class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int ans = 0;
        int i = 0;
        int n = prices.size();
        while (i < n - 1) // start
        {
            // min
            while(i < n-1 && (prices[i+1] <= prices[i])) i++;         
            if (i==n-1) return ans;
            int mn = i;
            // max
            while(i < n-1 && (prices[i+1] >= prices[i])) i++;
            int mx = i;
            ans += (prices[mx] - prices[mn]);
        }
        return ans;
    }
};