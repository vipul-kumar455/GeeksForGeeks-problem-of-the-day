//Function to return the count of non-repeated elements in the array.
    int countNonRepeated(int arr[], int n)
    {
         map<int,int>mp;
         for(int i=0;i<n;i++)
         {
             mp[arr[i]]++;
         }
         int cnt=0;
         for(auto i:mp)
         {
            if(i.second==1)
            {
                cnt++;
            }
         }
         return cnt;
    }
