
#include <iostream>

using namespace std;

int main()
{
    int a[]={1,4,-1,3,6,-5};
    int n=sizeof(a)/sizeof(a[0]);
    int k=2;
    int curr=0;
    for(int i=0;i<k;i++)
    {
        curr+=a[i];
    }
    int res=curr;
    for(int i=k;i<n;i++)
    {
        curr+=a[i]-a[i-k];
        res=max(res,curr);
    }
    cout<<res;
    
    

    return 0;
}
