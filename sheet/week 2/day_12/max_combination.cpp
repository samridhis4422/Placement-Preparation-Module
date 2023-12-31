long total = 0;
for (auto next : arr)
    total += next;

long onepass = kadane(arr);
long circular = circ(arr);
long startmax = start(arr);
long endmax = end(arr);
if (k == 1)
    return onepass;
return max<long int>(max(onepass, circular), startmax + endmax + (k - 2) * total) % 1000000007;
}

private:
long circ(vector<int> arr)
{
    int total = 0;
    for (auto &next : arr)
    {
        next = -1 * next;
        total += next;
    }
    int temp = kadane(arr);
    return -1 * (total - minarray(arr));
}

long minarray(vector<int> arr)
{
    int temp = kadane(arr);
    return temp;
}
long kadane(vector<int> &arr)
{
    int sumsf = 0;
    int res = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        sumsf += arr[i];
        sumsf = max(sumsf, 0);
        res = max(res, sumsf);
    }
    return res;
}

long start(vector<int> &arr)
{
    int sumsf = 0;
    int res = 0;
    for (auto next : arr)
    {
        sumsf += next;
        res = max(res, sumsf);
    }
    return res;
}

long end(vector<int> &arr)
{
    int sumsf = 0;
    int res = 0;
    for (int i = arr.size() - 1; i >= 0; i--)
    {
        sumsf += arr[i];
        res = max(res, sumsf);
    }
    return res;
}
}
;