public:
// Function to get the maximum total value in the knapsack.

static bool compare(struct Item a, struct Item b)
{
    double val1 = ((double)a.value) / (a.weight);
    double val2 = ((double)b.value) / (b.weight);

    return val1 > val2;
}
double fractionalKnapsack(int W, Item arr[], int n)
{
    // Your code here
    sort(arr, arr + n, compare);

    int currW = 0;
    double fvalue = 0;
    for (int i = 0; i < n; i++)
    {
        if (currW + arr[i].weight <= W)
        {
            currW += arr[i].weight;
            fvalue += arr[i].value;
        }
        else
        {
            int rwgt = W - currW;
            fvalue += arr[i].value * ((double)rwgt / arr[i].weight);
            break;
        }
    }
    return fvalue;
}