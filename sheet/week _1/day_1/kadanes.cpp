class Solution
{
public:
    int maxSubArray(vector<int> &nums)
    {
        int sum = 0, re = INT_MIN;
        for (int i = 0; i < nums.size(); i++)
        {
            sum += nums[i];
            re = max(re, sum);
            if (sum < 0)
            {
                sum = 0;
            }
        }
        return re;
    }
};