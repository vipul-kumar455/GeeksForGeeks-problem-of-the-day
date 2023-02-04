
//Brute force approach

#include <bits/stdc++.h>

using namespace std;

int main()
{
   int a[]={ 7,4,0,9};
   int n=sizeof(a)/sizeof(a[0]);
   int res=0;
   for(int i=1;i<n-1;i++)
   {
       int lmax=a[i];
       for(int j=0;j<i;j++)
       {
           lmax=max(lmax,a[j]);
       }
       int rmax=a[i];
       for(int j=i+1;j<n;j++){
           rmax=max(rmax,a[j]);
       }
       res+=min(lmax,rmax)-a[i];
   }
   cout<<res;
   
   
   return 0;
}


//Optimize one


#include <bits/stdc++.h>

using namespace std;

int main()
{
   int a[]={ 7,4,0,9};
   int n=sizeof(a)/sizeof(a[0]);
   int res=0;
    int lmax[n];
    int rmax[n];
    lmax[0]=a[0];
    rmax[n-1]=a[n-1];
    for(int i=1;i<n;i++)
    {
        lmax[i]=max(lmax[i-1],a[i]);
    }
    for(int i=n-2;i>=0;i--){
        rmax[i]=max(a[i],rmax[i+1]);
    }
    for(int i=1;i<n;i++)
    {
        res+=min(lmax[i],rmax[i])-a[i];
    }
    cout<<res;
   
   
   return 0;
}
