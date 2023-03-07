 bool checkPangram (string &str) {
        // your code here
        int n=str.size();
        for(auto& c:str)
        {
            c=tolower(c);
        }
        map<char,int>mp;
         for(int i=0;i<n;i++)
         {
            if(str[i]-'a'>=0)
             mp[str[i]]++;
         }
         if(mp.size()==26)
         return 1;
         return 0;
    }
