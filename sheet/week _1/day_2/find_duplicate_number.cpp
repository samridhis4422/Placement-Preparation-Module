class Solution
{
public:
    int findDuplicate(vector<int> &nums)
    {

        int ind, n = nums.size();
        vector<int> v(n, 0);
        for (int i = 0; i < nums.size(); i++)
        {
            v[nums[i]]++;
        }
        for (int i = 0; i < v.size(); i++)
        {
            if (v[i] > 1)
            {
                ind = i;
            }
        }
        return ind;
    }
};