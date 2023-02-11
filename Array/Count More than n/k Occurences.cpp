 int countOccurence(int a[], int n, int k) {
 
     
      map<int,int>mp;
      for(int i=0;i<n;i++)
      {
          mp[a[i]]++;
      }
      int cnt=0;
      for(auto i:mp)
      {
          if(i.second>n/k)
          //return i.first;
          cnt++;
      }
      return cnt;
 
 
    }
