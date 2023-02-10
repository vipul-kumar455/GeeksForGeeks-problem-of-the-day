int leftIndex(int n, int a[], int x){
    
    int l=0;
    int h=n-1;
    while(l<=h)
    {
        int mid=(l+h)/2;
        if(x==a[mid])
        {
            if(a[mid-1]!=a[mid])
            return mid;
            else
            h=mid-1;
            
        }
        else if(x>a[mid])
        l=mid+1;
        else if(x<a[mid])
        h=mid-1;
    }
    return -1;
    
}
