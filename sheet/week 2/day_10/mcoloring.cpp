bool solve(int prev_col, int idx, vector<vector<int>> &g, int m, vector<int> &col)
{
    if (col[idx] != 0)
    {
        if (col[idx] == prev_col)
            return false;
        else
            return true;
    }

    for (int i = 1; i <= m; i++)
    {
        if (i == prev_col) // Skip the color that is used for the previous vertex
            continue;

        col[idx] = i;
        int flag = 1;
        for (auto itr : g[idx])
        {
            if (!solve(i, itr, g, m, col))
            {
                flag = 0;
                break;
            }
        }
        if (flag)
            return true;
        col[idx] = 0; // Backtrack and try a different color
    }
    return false;
}

bool graphColoring(bool graph[101][101], int m, int n)
{
    vector<vector<int>> g(n);
    int i, j;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (graph[i][j])
            {
                g[i].push_back(j);
                g[j].push_back(i);
            }
        }
    }

    vector<int> col(n);
    return solve(-1, 0, g, m, col);
}
}
;