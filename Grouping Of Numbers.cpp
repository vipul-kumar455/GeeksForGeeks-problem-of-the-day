int maxGroupSize(int arr[], int N, int k) {
        
        unordered_map<int ,int>m;
        for(int i=0;i<N;i++)
        {
            m[arr[i]%k]++;
        }
        int size=0;
        for(int i=1;i<=k/2;i++)
        {
            if(i!=k-i)
            {
                size+=max(m[i],m[k-i]);
            }
            else
            {
            if(m[i]!=0)
            size++;
            }
        }
        if(m[0]!=0)
        size++;
        return size;
    }
