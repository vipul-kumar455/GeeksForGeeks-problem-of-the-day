 vector<int> printNonRepeated(int arr[],int n)
    {
        unordered_map<int,int>mp;
        vector<int>v;
         for(int i=0;i<n;i++)
         {
             mp[arr[i]]++;
         }
   
         for(int i=0;i<n;i++)
         {
            if(mp[arr[i]]==1)
            {
                v.push_back(arr[i]);
            }
         }
         return v;
         
         
         
    }
