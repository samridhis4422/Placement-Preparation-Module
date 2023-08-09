class Solution
{
public:
    int longestConsecutive(vector<int> &nums)
    {
        if (nums.size() == 0)
            return 0;
        unordered_set<int> m;
        int re = 1;
        for (int i = 0; i < nums.size(); i++)
        {
            m.insert(nums[i]);
        }
        for (int i = 0; i < nums.size(); i++)
        {
            int pre = nums[i] - 1;
            if (m.find(pre) == m.end()) // not found
            {
                int curr = nums[i];
                int count = 0;
                cout << curr << " ";
                while (m.find(curr) != m.end())
                {
                    count++;
                    curr++;
                    cout << curr << " ";
                }
                re = max(re, count);
            }
        }
        return re;
    }
};