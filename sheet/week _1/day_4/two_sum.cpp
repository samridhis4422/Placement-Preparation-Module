class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        map<int, int> m;
        vector<int> v;
        for (int i = 0; i < nums.size(); i++)
        {
            int diff = target - nums[i];
            if (m.find(diff) != m.end())
            {
                v.push_back(m[diff]);
                v.push_back(i);
                break;
            }
            else
            {
                m[nums[i]] = i;
            }
        }
        return v;
    }
};