 int repeatedCharacter (string s) 
    { 
        //Your code here
        unordered_map<char,int>mp;
        for(int i=0;i<s.size();i++)
        {
            mp[s[i]]++;
        }
        char p;
       /* for(auto i:mp)
        {
            if(i.second>1)
            p=i.first;
        }*/
        for(int i=0;i<s.size();i++)
        {
            if(mp[s[i]]>1)
            {
            return i;
            
            }
        }
       return -1;
    } 
