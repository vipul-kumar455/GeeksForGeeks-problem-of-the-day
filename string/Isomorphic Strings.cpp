 bool areIsomorphic(string s1, string s2)
    {
        int n=s1.size();
        int m=s2.size();
        if(n!=m)
        return 0;
       unordered_map<char,int>mp;
       for(int i=0;i<s1.size();i++)
       {
           mp[s1[i]]=i+1;
       }
        
        unordered_map<char,int>mp1;
       for(int i=0;i<s2.size();i++)
       {
           mp1[s2[i]]=i+1;
       }
       
       for(int i=0;i<s1.size();i++)
       {
           if(mp[s1[i]]!=mp1[s2[i]])
           {
               return 0;
           }
           
       }
       return 1;
        
    }
