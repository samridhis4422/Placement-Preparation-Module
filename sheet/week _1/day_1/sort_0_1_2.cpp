class Solution
{
public:
    void sortColors(vector<int> &v)
    {
        int zero = 0, one = 0, two = 0;
        for (int i = 0; i < v.size(); i++)
        {
            if (v[i] == 0)
                zero++;
            else if (v[i] == 1)
                one++;
            else
                two++;
        }
        for (int i = 0; i < zero; i++)
        {
            v.push_back(0);
        }
        for (int i = 0; i < one; i++)
        {
            v.push_back(1);
        }
        for (int i = 0; i < two; i++)

        {
            v.push_back(2);
        }
        for (int i = 0; i < v.size(); i++)
        {
            cout << v[i];
        }
    }
};