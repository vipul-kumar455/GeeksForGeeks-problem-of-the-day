
#include <iostream>

using namespace std;

int main()
{
   int a[]={2,3,10,6,4,8,1};
   int n=sizeof(a)/sizeof(a[0]);
   int res=a[1]-a[0];
   int mi=a[0];
   for(int j=1;j<n;j++)
   {
       res=max(res,a[j]-mi);
       mi=min(mi,a[j]);
   }
   cout<<res;
   
   return 0;
}
