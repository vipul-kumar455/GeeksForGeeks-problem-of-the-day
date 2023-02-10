int majorityElement(int a[], int n)
    {
        
       /* int p=n/2;
        map<int,int>mp;
        for(int i=0;i<n;i++)
        {
            mp[a[i]]++;
        }
        for(auto i:mp)
        {
            if(i.second>p)
            return i.first;
        }
        return -1;*/
        int cnt=0;
        int res=0;
        for(int i=0;i<n;i++)
        {
            if(cnt==0)
            res=a[i];
            if(res==a[i])
            cnt++;
            else
            cnt--;
        }
        for(int i=0;i<n;i++)
        {
            if(a[i]==res)
            cnt++;
        }
        if(cnt>n/2)
        {
            return res;
        }
        else
        return -1;
        
    }
