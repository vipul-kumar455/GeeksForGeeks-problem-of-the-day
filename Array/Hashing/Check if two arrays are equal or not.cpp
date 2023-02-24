bool check(vector<ll> A, vector<ll> B, int n) {
        unordered_map<ll,ll>mp;
        for(int i=0;i<n;i++)
        {
            mp[A[i]]++;
        }
        for(int i=0;i<n;i++)
        {
            auto key=B[i];
            if(mp.find(key)!=mp.end())
            {
                auto it=mp.find(key);
                if(it->second>0)
                {
                    it->second--;
                }
                else
                return 0;
            }
            else
            {
                return 0;
            }
        }
        return 1;
        
    }
