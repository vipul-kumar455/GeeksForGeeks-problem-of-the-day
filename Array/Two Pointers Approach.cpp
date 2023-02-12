
#include <bits/stdc++.h>

using namespace std;

bool solve(int a[],int n,int x)
{
    int i=0;
    int j=n-1;
     while(i<j)
     {
         if(a[i]+a[j]==x)
         return 1;
         else if(a[i]+a[j]>x)
         {
             j--;
         }
         else
         {
             i++;
         }
     }
     return 0;
}
int main()
{
    int a[]={2,5,8,12,30};
    int x=15;
    int  n=sizeof(a)/sizeof(a[0]);
   cout<<solve(a,n,x);

    return 0;
}
