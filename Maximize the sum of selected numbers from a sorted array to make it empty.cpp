 int maximizeSum(int arr[], int n) 
    {
        int sum = 0;
        map<int,int,greater<int>>mp;
        for(int i = 0 ; i < n ; i++){
            mp[arr[i]]++;
        }
       
        while(mp.size()!=0){
          auto itr = mp.begin();
          sum += (itr->first*itr->second);
          
          if(mp[itr->first - 1] != 0){
              mp[itr->first - 1 ] -= itr->second;
          }
          
          mp[itr->first] = 0;
          
          
          
          if(mp[itr->first - 1]<=0){
              mp.erase(itr->first - 1);
          }
          
          if(mp[itr->first]==0){
              mp.erase(itr->first);
          }
         
        }
        return sum;
    }
**************************************
*****************************************************
***********************************************************************
*********************************************************************************************

 unordered_map<int,int>mp;
        for(int i=0;i<n;i++)
        {
            mp[arr[i]]++;
        }
        int ans=0;
        for(int i=n-1;i>=0;i--)
        {
            int a=arr[i];
            if(mp.find(a)!=mp.end() && mp.find(a-1)!=mp.end())
            {
               ans+=a;
               mp[a]--;
               mp[a-1]--;
               if(mp[a]==0)
               mp.erase(a);
               if(mp[a-1]==0)
               {
                   mp.erase(a-1);
               }
            }
            else if(mp.find(a)!=mp.end())
            {
                ans+=a;
               mp[a]--;
                if(mp[a]==0)
               mp.erase(a);
            }
        }
        return ans;
