int countOnes(int a[], int n)
    {
       
         int cnt=0;
         for(int i=0;i<n;i++)
         {
             if(a[i]==1)
             cnt++;
         }
         return cnt;
         
        int l=0;
        int h=n-1;
        while(l<=h)
        {
            int mid=(l+h)/2;
            if(a[mid]==1)
            l=mid+1;
            else
            {
                if(mid==0 || a[mid-1]==1)
                return n-mid;
                else
                h=mid-1;
            }
        }
        return -1;
    }
