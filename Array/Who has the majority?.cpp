 int majorityWins(int arr[], int n, int x, int y) {
        // code here
        int x1=0,y1=0;
        
        for(int i=0;i<n;i++)
        {
            if(arr[i]==x)
            x1++;
            else if(arr[i]==y)
            y1++;
        }
        if(x1==0 && y1==0)
        return min(x,y);
        if(x1==y1)
        {
            if(x<y)
            return x;
            else
            return y;
        }
        if(x1>y1)
        return x;
        else
        return y;
    }
