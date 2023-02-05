 int maxEvenOdd(int a[], int n) 
    { 
        int res=1;
    int cnt=1;
    for(int i=1;i<n;i++)
    {
        //if(a[i]%2==0 && a[i-1]%2!=0 || a[i]%2!=0 && a[i-1]%2==0)
        if(abs(a[i]-a[i-1])%2!=0)
        {
            cnt++;
            res=max(cnt, res);
        }
        else
        cnt=1;
    }
    return res;
    }
