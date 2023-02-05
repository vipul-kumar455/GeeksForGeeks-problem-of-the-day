 void convertToWave(int n, vector<int>& a){
        
        // Your code here
        for(int i=1;i<n;i+=2)
        {
            swap(a[i],a[i-1]);
             
        }
        
    }
