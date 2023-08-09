class Solution
{
public:
    vector<int> merge2Array(vector<int> a, vector<int> b)
    {

        vector<int> temp;
        if (a.empty())
        {
            return b;
        }
        if (b.empty())
        {
            return a;
        }

        if (a.empty() && b.empty())
        {
            return temp;
        }

        int p = 0;
        int q = 0;

        while (p < a.size() && q < b.size())
        {
            if (a[p] < b[q])
            {
                temp.push_back(a[p]);
                p++;
            }

            else
            {
                temp.push_back(b[q]);
                q++;
            }
        }

        while (p < a.size())
        {
            temp.push_back(a[p]);
            p++;
        }

        while (q < b.size())
        {
            temp.push_back(b[q]);
            q++;
        }

        return temp;
    }
   
    vector<int> mergeKArrays(vector<vector<int>> arr, int K)
    {
        vector<int> v;
        if (arr.empty() || K == 0)
        {
            return v;
        }
        auto temp = arr[0];
        arr.erase(arr.begin());

      

        v = merge2Array(temp, mergeKArrays(arr, K - 1));
        return v;
    }
};