class Solution
{
public:
    void helper(int sum, vector<int> &ans, vector<int> &arr, int ind, int n)
    {
        if (ind == n)
        {
            ans.push_back(sum);
            return;
        }
        helper(sum + arr[ind], ans, arr, ind + 1, n);
        helper(sum, ans, arr, ind + 1, n);
    }
    vector<int> subsetSums(vector<int> arr, int N)
    {
       
        vector<int> ans;
        helper(0, ans, arr, 0, N);
        sort(ans.begin(), ans.end());
        return ans;
    }
};