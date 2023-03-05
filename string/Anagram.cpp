bool isAnagram(string s1, string s2){
        
          int n=s1.size();
    int m=s2.size();
    if(n!=m)
    return 0;
unordered_map<char,int>cnt;
    for(int i=0;i<n;i++)
    {
        cnt[s1[i]]++;
        cnt[s2[i]]--;
    }
    for(auto i:cnt)
    {
        if(i.second!=0)
        return 0;
    }
    return 1;      
    }
