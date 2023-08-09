class Solution
{
public:
    int majorityElement(vector<int> &nums)
    {
        int vote = 0, candidate;
        for (auto i : nums)
        {
            if (vote == 0)
                candidate = i;
            if (i == candidate)
                vote++;
            else
                vote--;
        }
        return candidate;
    }
};