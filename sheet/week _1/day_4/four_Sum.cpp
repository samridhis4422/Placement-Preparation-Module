class Solution
{
public:
    vector<vector<int>> fourSum(vector<int> &nums, int target)
    {
        sort(nums.begin(), nums.end());
        vector<vector<int>> re;
        set<vector<int>> s;

        for (int i = 0; i < nums.size(); i++)
        {
            for (int j = i + 1; j < nums.size(); j++)
            {
                int low = j + 1;
                int high = nums.size() - 1;
                while (low < high)
                {
                    long long sum = 1ll * nums[i] + 1ll * nums[j] + 1ll * nums[low] + 1ll * nums[high];
                    if (sum == target)
                    {
                        vector<int> v{nums[i], nums[j], nums[low], nums[high]};
                        if (s.find(v) == s.end())
                        {
                            re.push_back(v);
                            s.insert(v);
                        }
                        low++, high--;
                    }
                    else if (sum < target)
                        low++;
                    else
                        high--;
                }
            }
        }

        return re;
    }
};