
#include <iostream>

using namespace std;
int solve(int a[], int n, int x)
{
    int l=0;
    int h=n-1;
    while(l<h)
    {
        int mid=(l+h)/2;
        if(a[mid]==x)
        return mid;
        if(a[l]<a[mid])
        {
            if(x>=a[l] && x<a[mid])
            {
                h=mid-1;
            }
            else
            {
                l=mid+1;
            }
        }
         else
    {
        if(x>a[mid] && x<=a[h])
        {
            l=mid+1;
        }
        else
        {
            h=mid-1;
        }
    }
    }
   
    return -1;
}

int main()
{
   int a[]={10,20,40,60,5,8};
   int n=sizeof(a)/sizeof(a[0]);
   int x=5;
   cout<<solve(a,n ,x);
   
    return 0;
}
