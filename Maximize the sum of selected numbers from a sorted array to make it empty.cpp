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
