 long binarySubstring(int n, string a){
        int cnt=0;
        // for(int i=0;i<n;i++)
        // {
        //     for(int j=i+1;j<n;j++)
        //     {
        //         if(a[i]=='1' && a[j]=='1')
        //         cnt++;
        //     }
        // }
        // return cnt;
        for(int i=0;i<n;i++)
        {
            if(a[i]=='1')
            cnt++;
        }
        
        return cnt*(cnt-1)/2;
    }
