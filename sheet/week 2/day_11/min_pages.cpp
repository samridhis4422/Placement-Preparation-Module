class Solution
{
public:
    int shipWithinDays(vector<int> &weights, int days)
    {
        int l = INT_MIN, h = 0;
        for (int i = 0; i < weights.size(); i++)
        {
            l = max(l, weights[i]);
            h += weights[i];
        }
        int ans = 0;
        while (l <= h)
        {
            int mid = (l + h) / 2;
            int count = 1, sum = 0;
            int i = 0;
            for (int i = 0; i < weights.size(); i++)
            {
                if (sum + weights[i] <= mid)
                {
                    sum += weights[i];
                }
                else
                {
                    count++;
                    sum = 0;
                    i--;
                }
            }
            if (count <= days)
            {
                ans = mid;
                h = mid - 1;
            }
            else
                l = mid + 1;
        }
        return ans;
    }
};