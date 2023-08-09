class Solution
{
public:
    bool searchMatrix(vector<vector<int>> &matrix, int target)
    {
        if (matrix.size() == 0)
            return false;
        int n = matrix.size(), m = matrix[0].size();
        int l = 0, r = (n * m) - 1;
        while (l <= r)
        {
            int mid = l + (r - l) / 2;
            int i = mid / m, j = mid % m;
            if (matrix[i][j] == target)
                return true;
            if (matrix[i][j] < target)
                l = mid + 1;
            else
                r = mid - 1;
        }
        return false;
    }
};