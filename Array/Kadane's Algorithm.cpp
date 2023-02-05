long long maxSubarraySum(int a[], int n){
        
        int res=a[0];
        int mx=a[0];
        for(int i=1;i<n;i++)
        {
            mx=max(mx+a[i],a[i]);
            res=max(res,mx);
        }
        return res;
        
    }
