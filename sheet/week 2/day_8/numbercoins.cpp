public
int minCoins(int coins[], int n, int v)
{
    // Your code goes here
    int dp[][] = new int[n + 1][v + 1];
    dp[0][0] = 0;
    for (int i = 1; i <= n; i++)
        dp[i][0] = 0;

    for (int j = 1; j <= v; j++)
        dp[0][j] = Integer.MAX_VALUE - 1;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= v; j++)
        {
            if (coins[i - 1] <= j)
                dp[i][j] = Math.min(dp[i - 1][j], 1 + dp[i][j - coins[i - 1]]);
            else
                dp[i][j] = dp[i - 1][j];
        }
    }

    int ans = dp[n][v];
    if (ans == Integer.MAX_VALUE - 1)
        return -1;

    return ans;
}