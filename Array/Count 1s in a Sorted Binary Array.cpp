
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
            if(mid==0 || a[mid-1]!=a[mid])
            return mid;
            else
           h=mid-1;
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
int count(int a[],int n,int l,int h,int x)
{
    int first=solve(a,n,0,n-1,x);
    if(first==-1)
    return 0;
    else
    return (solve1(a,n,0,n-1,x)-first+1);
    
}
int sol(int a[],int n)
{
    int l=0;
    int h=n-1;
    while(l<=h)
    {
        int mid=(l+h)/2;
        if(a[mid]==0)
        l=mid+1;
        else
        {
            if(mid==0 || a[mid-1]==0)
            {
                return (n-mid);
            }
            else
            h=mid-1;
        }
    }
    return 0;
    
}
int main()
{
    int a[]={0,0,1,1,1,1,1};
    int n=sizeof(a)/sizeof(a[0]);
    int x=1;
   // cout<<solve(a,n,0,n-1,x);
    //cout<<count(a,n,0,n-1,x);
    cout<<sol(a,n);
    

    return 0;
}
