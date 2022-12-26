
long long maxArea(long long A[], int len)
{
    
    int mx=0;
    int i=0;
    int j=len-1;
    while(i<j)
    {
        int mi=min(A[i],A[j]);
        mx=max(mx,mi*(j-i));
        if(A[i]>A[j])
        {
            j--;
        }
        else
        {
            i++;
        }
    }
    return mx;
    
    
}
