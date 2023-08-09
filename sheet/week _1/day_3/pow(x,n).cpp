class Solution
{
public:
    double find(double x, long long k)
    {
        if (k == 0)
            return 1.0;
        double re = find(x, k / 2);
        if (k % 2 == 0)
            return re * re;
        else
            return x * re * re;
    }
    double myPow(double x, int n)
    {
        long long k1 = n;
        if (n < 0)
        {
            long long k = -k1;
            cout << k;
            return 1 / find(x, k);
        }
        else
            return find(x, k1);
    }
};