 int maxOccured(int L[], int R[], int n, int maxx){
    
         vector<int>a(maxx+2);
         for(int i=0;i<n;i++)
         {
             a[L[i]]++;
             a[R[i]+1]--;
         }
         int mx=a[0];
         int res=0;
         for(int j=1;j<maxx+2;j++)
         {
             a[j]+=a[j-1];
             if(a[j]>mx)
             {
                 mx=a[j];
                 res=j;
             }
         }
         return res;
        
    }
