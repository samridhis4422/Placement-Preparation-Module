class Solution
{
public:
    int uniquePaths(int m, int n)
    {
        vector<vector<int>> dp(m, vector<int>(n, -1));
        return find(0, 0, m - 1, n - 1, dp);
    }
    int find(int i, int j, int fr, int fc, vector<vector<int>> &dp)
    {
        if (i == fr + 1 || j == fc + 1)
            return 0;
        if (i == fr && j == fc)
            return 1;
        if (dp[i][j] != -1)
            return dp[i][j];
        else
            return dp[i][j] = find(i, j + 1, fr, fc, dp) + find(i + 1, j, fr, fc, dp);
    }
};