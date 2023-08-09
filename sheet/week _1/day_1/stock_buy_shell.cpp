class Solution
{
public:
    int maxProfit(vector<int> &prices)
    {
        int n = prices.size();
        int maxi = prices[n - 1];
        int diff = 0;
        for (int i = n - 2; i >= 0; i--)
        {
            maxi = max(maxi, prices[i]);
            diff = max(diff, abs(maxi - prices[i]));
        }
        return diff;
    }
};