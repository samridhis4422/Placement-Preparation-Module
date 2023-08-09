class Solution{
    public:
    int maxLen(vector<int>&arr, int n)
    {   
        int sum=0,ans=0;
        map<int,int>m;
        m[0]=-1;
        for(int i=0;i<n;i++)
        {
            sum+=arr[i];
            if(m.find(sum)==m.end())//1st index
            {
                m[sum]=i;
            }
            else
            {
                ans=max(ans,i-m[sum]);
            }
        }
        return ans;
        
    }
};
