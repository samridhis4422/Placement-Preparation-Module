class Solution
{
public:
    static bool cmp(Job &a, Job &b)
    {
        if (a.dead == b.dead)
            return a.profit > b.profit;
        return a.dead < b.dead;
    }
    // Function to find the maximum profit and the number of jobs done.
    vector<int> JobScheduling(Job arr[], int n)
    {
        sort(arr, arr + n, cmp);
        int time = 0;
        int i = 0;
        int cnt = 0;
        int profit = 0;
        priority_queue<int, vector<int>, greater<int>> pq;
        while (i < n)
        {
            while (arr[i].dead <= time && i < n)
            {
                if (pq.top() < arr[i].profit)
                {
                    profit -= pq.top();
                    pq.pop();
                    pq.push(arr[i].profit);
                    profit += arr[i].profit;
                }
                i++;
            }
            if (i == n)
                break;
            cnt++;
            pq.push(arr[i].profit);
            profit += arr[i].profit;
            time++;
            i++;
        }
        return {cnt, profit};
    }
};