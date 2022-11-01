 vector<int> satisfyEqn(int A[], int N) {
        
        vector<vector<int>>v;
        unordered_map<int,pair<int,int>>mp;
        for(int i=0;i<N;i++)
        {
             for(int j=i+1;j<N;j++)
             {
                 int sum=A[i]+A[j];
                 if(mp.find(sum)!=mp.end())
                 {
                     pair<int,int>p=mp[sum];
                     if(i!=p.first && i!=p.second && j!=p.first && j!=p.second)
                     {
                         v.push_back({p.first,p.second,i,j});
                     }
                 }
                 else
                 mp[sum]={i,j};
             }
        }
        if(v.size()==0)
        return {-1,-1,-1,-1};
        sort(v.begin(),v.end());
        return v[0];
    }
};
  
