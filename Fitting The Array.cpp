
#include <bits/stdc++.h>

using namespace std;
bool solve(int a[],int b[],int n)
{
        sort(a,a+n);
    sort(b,b+n);
for(int i=0;i<n;i++)
{
    if(a[i]>b[i])
    return 0;
}
return 1;
}
int main()
{
   int n;
   cin>>n;
   int a[n],b[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        cin>>b[i];
    }
    

if(solve(a,b,n))
cout<<"Yes";
else
cout<<"No";
    return 0;
}
