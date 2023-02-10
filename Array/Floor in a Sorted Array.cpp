 int findFloor(vector<long long> v, long long n, long long x){
        
        // Your code here
        vector<long long>::iterator low1; 
 
    low1 = lower_bound(v.begin(), v.end(), x); 
        if(x<v[0] )
        return -1;
        if(x>=v[n-1])
        return n-1;
        
        return (low1-v.begin());
        
    }
