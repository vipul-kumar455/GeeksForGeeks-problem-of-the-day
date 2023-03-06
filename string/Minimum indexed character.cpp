 int minIndexChar(string str, string patt)
    {
        unordered_map<char,int>mp;
        int n=patt.size();
        for(int i=0;i<n;i++)
        {
            mp[patt[i]]++;
        }
        for(int i=0;i<str.size();i++)
        {
            if(mp.find(str[i])!=mp.end())
            return i;
        }
        return -1;
        
    }
