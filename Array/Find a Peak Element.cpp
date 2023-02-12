
#include <bits/stdc++.h>

using namespace std;

int solve(int a[],int n)
{
     if(n==1)
    return a[0];
   // if(a[0]>=a[1]) return a[0];
    
    if(a[n-1]>=a[n-2]) return a[n-1];
    int temp;
    for(int i=1;i<n-1;i++)
    
        if(a[i]>=a[i-1] && a[i]>=a[i+1])
        temp=a[i];
    
    return temp;
}
int main()
{
    int a[]={10,7,8,20,12};
    int  n=sizeof(a)/sizeof(a[0]);
   cout<<solve(a,n);

    return 0;
}
