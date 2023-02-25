int firstRepeated(int a[], int n) {
        unordered_map<int,int>mp;
     for(int i=0;i<n;i++)
     {
         mp[a[i]]++;
     }
     int temp=-1;
      for(int i=0;i<n;i++)
     {
         if(mp[a[i]]>1)
         {
        temp=i+1;
         break;
         }
         
     }
     return temp;
    }
