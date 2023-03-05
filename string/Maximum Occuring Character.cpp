 char getMaxOccuringChar(string str)
    {
       map<char,int>mp;
       for(int i=0;i<str.size();i++)
       {
           mp[str[i]]++;
       }
       int mx=0;
       char p;
       for(auto i:mp)
       {
           if(i.second>mx)
           {
           mx=i.second;
           p=i.first;
           }
       }
    return p;   
    }
