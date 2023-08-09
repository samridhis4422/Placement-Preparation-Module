class Solution
{
public:
    void setZeroes(vector<vector<int>> &matrix)
    {
        int r = matrix.size(), c = matrix[0].size();
        int flag = 0;
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                if (matrix[i][j] == 0)
                {
                    if (i == 0) // first row or column
                    {
                        flag = 1;
                        cout << "1"
                             << " ";
                        matrix[0][j] = 0;
                    }
                    else
                    {
                        matrix[i][0] = 0;
                        matrix[0][j] = 0;
                    }
                }
            }
        }
        if (flag == 1)
        {
            for (int i = 0; i < matrix[0].size(); i++)
            {
                if (matrix[0][i] == 0)
                {
                    for (int j = 0; j < matrix.size(); j++)
                    {
                        cout << "yes"
                             << " ";
                        cout << matrix[j][i] << " ";
                        matrix[j][i] = 0;
                    }
                }
            }
        }

        for (int i = 0; i < matrix.size(); i++)
        {
            if (matrix[i][0] == 0)
                for (int j = 0; j < matrix[0].size(); j++)
                {
                    matrix[i][j] = 0;
                }
        }

        for (int i = 0; i < matrix[0].size(); i++)
        {
            if (matrix[0][i] == 0)
                for (int j = 0; j < matrix.size(); j++)
                {
                    matrix[j][i] = 0;
                }
        }
    }
};