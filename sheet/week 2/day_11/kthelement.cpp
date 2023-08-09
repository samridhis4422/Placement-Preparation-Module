lass Solution{
    public :
        int kthElement(int arr1[], int arr2[], int n, int m, int k){
            if (m > n) return kthElement(arr2, arr1, n, m, k);

int l = max(0, k - n), h = min(k, m);
int totalleft = k;

while (l <= h)
{
    int m = (l + h) / 2; // no of elements to take from small array
    int part1 = m;
    int part2 = totalleft - part1;

    int l1 = (part1 == 0) ? l1 = INT_MIN : arr1[part1 - 1];
    int l2 = (part2 == 0) ? l2 = INT_MIN : arr2[part2 - 1];

    int r1 = (part1 == n) ? r1 = INT_MAX : arr1[part1];
    int r2 = (part2 == m) ? r2 = INT_MAX : arr2[part2];

    if (l1 <= r2 && l2 <= r1)
    {

        return max(l1, l2);
    }
    else if (l1 > r2)
    {
        h = m - 1;
    }
    else
    {
        l = m + 1;
    }
}
return -1;
}
}
;