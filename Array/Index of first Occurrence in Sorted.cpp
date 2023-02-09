
//Iterative approach


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
int main()
{
    int a[]={1,2,3,4,4,5,5,6};
    int n=sizeof(a)/sizeof(a[0]);
    int x=4;
    cout<<solve(a,n,0,n-1,x);
    

    return 0;
}



//Recursive approach
#include <iostream>

using namespace std;
int solve(int a[],int n,int l,int h,int x)
{
    if(l>h)
    return -1;
    
    
        int mid=(l+h)/2;
        if(a[mid]>x)
        return solve(a,n,l,mid-1,x);
        else if(x>a[mid])
        return solve(a,n,mid+1,h,x);
        else
        {
            if(mid==0 || a[mid-1]!=a[mid])
            return mid;
            else
            return solve(a,n,l,mid-1,x);
        }
        
        
    
}
int main()
{
    int a[]={1,2,3,4,4,5,5,6};
    int n=sizeof(a)/sizeof(a[0]);
    int x=4;
    cout<<solve(a,n,0,n-1,x);
    

    return 0;
}
