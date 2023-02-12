
#include <bits/stdc++.h>

using namespace std;
 
bool solve(int a[],int n,int x)
{
    for(int k=0;k<n-2;k++)
    {
    int i=k+1;
    int j=n-1;
    int sum=0;
     while(i>k && j>k && i<j)
     {
         sum=a[i]+a[j]+a[k];
         if(sum==x)
         return 1;
         else if(sum>x)
         {
             j--;
         }
         else
         {
             i++;
         }
     }
    }
     return 0;
}
int main()
{
   // int a[]={2,3,4,8,9,20,40};
    int a[]={1,2,5,6};
    int x=14;
    int  n=sizeof(a)/sizeof(a[0]);
   cout<<solve(a,n,x);

    return 0;
}
