
#include <bits/stdc++.h>

using namespace std;

int main()
{
   int a[]={2,3,10,10,6,4,8,10};
   int n=sizeof(a)/sizeof(a[0]);
   sort(a,a+n);
   int freq=1;
   int i=1;
   while(i<n)
   {
       while(i<n && a[i]==a[i-1])
       {
           freq++;
           i++;
       }
       cout<<a[i-1]<<" "<<freq<<endl;
       i++;
       freq=1;
   }
   if(n==1 || a[n-1]!=a[n-2])
   cout<<a[n-1]<<" "<<1;  
   
   return 0;
}
