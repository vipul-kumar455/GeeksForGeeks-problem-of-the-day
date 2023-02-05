#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[]={0,0,1,0,1,1,1,0,1};
    int n=sizeof(a)/sizeof(a[0]);
  
   int res=0;
          int cnt=0;
          int mx=0;
    for(int i=0;i<n;i++)
    { 
       if(a[i]==1)
       ++cnt;
       else
       {
           cnt=0;
          // res=max(res,cnt);
       }
       if(cnt>mx)
       mx=cnt;
    }
    cout<<mx<<" ";
    return 0;
}
