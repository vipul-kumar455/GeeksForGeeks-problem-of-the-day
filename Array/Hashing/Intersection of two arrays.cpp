 int NumberofElementsInIntersection(int a[], int b[], int n, int m) {
        unordered_set<int>s(a,a+n);
        int cnt=0;
        for(int i=0;i<m;i++)
        {
            if(s.find(b[i])!=s.end())
            {
                cnt++;
                    s.erase(b[i]);
            }
        }
        return cnt;
        
    }
