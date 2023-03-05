 bool isIsogram(string s)
    {
       map<char,int>mp;
       int n=s.size();
       for(int i=0;i<n;i++)
       {
           mp[s[i]]++;
       }
       for(auto i:mp)
       {
           if(i.second>1)
           return 0;
       }
       return 1;
    }
