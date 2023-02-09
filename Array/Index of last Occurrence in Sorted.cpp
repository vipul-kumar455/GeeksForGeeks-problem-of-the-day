
#include <iostream>

using namespace std;
int solve(int a[],int n,int l,int h,int x)
{
    
    
    while(l<h)
    {
        int mid=(l+h)/2;
        if(a[mid]>x)
        h=mid-1;
        else if(x>a[mid])
        l=mid+1;
        else
        {
            if(mid==n-1 || a[mid]!=a[mid+1])
            return mid;
            else
           l=mid+1;
        }
        
    }
    return  -1;
    
}

int solve1(int a[],int n,int l,int h,int x)
{
    
     if(l>h)
     return -1;
        int mid=(l+h)/2;
        if(a[mid]>x)
        return solve1(a,n,l,mid-1,x);
        else if(x>a[mid])
       
           return solve1(a,n,mid+1,h,x);
        else
        {
            if(mid==n-1 || a[mid]!=a[mid+1])
            return mid;
            else
            
            return solve1(a,n,mid+1,h,x);
        }
        
    
    
}
int main()
{
    int a[]={1,2,3,4,4,5,6};
    int n=sizeof(a)/sizeof(a[0]);
    int x=5;
    cout<<solve(a,n,0,n-1,x);
    

    return 0;
}
