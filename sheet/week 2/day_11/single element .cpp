class Solution
{
public:
    int singleNonDuplicate(vector<int> &nums)
    {
        if (nums.size() == 1)
            return nums[0];
        int high = nums.size() - 1, low = 0;
        int l, r;
        while (low <= high)
        {
            int m = (low + high) / 2;
            if (m == 0)
            {
                if (nums[m] != nums[m + 1])
                    return nums[0];
            }
            else if (m == nums.size() - 1)
            {
                if (nums[m] != nums[m - 1])
                    return nums[nums.size() - 1];
            }
            else
            {
                if (nums[m] == nums[m + 1])
                {
                    r = high - m + 1;
                    l = m - low;
                    if (l % 2 != 0)
                        high = m - 1;
                    else if (r % 2 != 0)
                        low = m;
                }
                else if (nums[m] == nums[m - 1])
                {
                    r = high - m;
                    l = m - low + 1;
                    if (l % 2 != 0)
                        high = m;
                    else if (r % 2 != 0)
                        low = m + 1;
                }
                else
                {
                    return nums[m];
                }
            }
        }
        return -1;
    }
};