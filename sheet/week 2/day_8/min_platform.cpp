int findPlatform(int arr[], int dep[], int n)
{
    // Your code here
    sort(arr, arr + n);
    sort(dep, dep + n);
    int i = 0, j = 0, count = 0, maxi = 0;
    while (i < n && j < n)
    {
        if (arr[i] <= dep[j])
        {
            i++;
            count++;
            maxi = max(count, maxi);
        }
        else
        {
            j++;
            count--;
        }
    }
    return maxi;
}