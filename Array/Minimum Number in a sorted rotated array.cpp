 int minNumber(int a[], int l, int h)
    {
      //  int n=sizeof(a)/sizeof(a[0]);
      /*  int mi=INT_MAX;
        for(int i=0;i<=high;i++)
        {
            mi=min(mi,a[i]);
        }
        return mi;
        */
        int res=INT_MAX;
        while(l<=h)
        {
            res=min(res,min(a[l],a[h]));
            l++;
            h--;
        }
        return res;
        
    }
