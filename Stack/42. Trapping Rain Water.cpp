#include<bits/stdc++.h>
using namespace std;
int solve(int h[],int n)
{
   if(n<=2)
    return 0;
    vector<int>left(n,0),right(n,0);
    left[0]=h[0];
    right[n-1]=h[n-1];
    for(int i=1;i<n;i++)
    {
        left[i]=max(left[i-1],h[i]);
        right[n-i-1]=max(right[n-i],h[n-i-1]);
    }
    int ans=0;
    for(int i=0;i<n;i++)
    {
        ans+=min(left[i],right[i])-h[i];
    }
    return ans;
    
}
 int main()
 
 {
     int a[]={0,1,0,2,1,0,1,3,2,1,2,1};
     int b[]={4,2,0,3,2,5};
     int n=sizeof(a)/sizeof(a[0]);
     int n1=sizeof(b)/sizeof(b[0]);
    // cout<<solve(a,n)<<endl;
       cout<<solve(b,n1)<<endl;
     
     
     
 }
