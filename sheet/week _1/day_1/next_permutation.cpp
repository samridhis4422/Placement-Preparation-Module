class Solution
{
public:
    void nextPermutation(vector<int> &nums)
    {
        if (nums.size() == 1)
            return;
        int bp = -1;
        for (int i = nums.size() - 2; i >= 0; i--)
        {
            if (nums[i] < nums[i + 1]) // bp
            {
                cout << "yes";
                bp = i;
                break;
            }
        }
        if (bp != -1)
        {
            for (int i = nums.size() - 1; i > bp; i--)
            {
                if (nums[i] > nums[bp])
                {
                    swap(nums[i], nums[bp]);
                    break;
                }
            }
        }
        if (bp != -1)
            reverse(nums.begin() + bp + 1, nums.end());
        else
            reverse(nums.begin(), nums.end());
    }
};