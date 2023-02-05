  int minAdjDiff(int a[], int n){    
        // Your code here
        int mx=INT_MAX;
        int temp=abs(a[n-1]-a[0]);
        for(int i=1;i<n;i++)
        {
            
            if(abs(a[i]-a[i-1])<mx)
            {
                mx=abs(a[i]-a[i-1]);
            }
        }
        if(temp>mx)
        return mx;
        else
        temp;
        
    }
