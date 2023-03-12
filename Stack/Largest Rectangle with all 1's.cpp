#include <bits/stdc++.h>

using namespace std;

int largest(int a[], int n)
{
    if(n==1)
    return 1;
   int res = 0;
 int tp=0;
      int curr=0;
    
    stack<long long> s;
    for (int i = 0; i < n; i++) {
          
        while (s.empty()==false && a[s.top()] >= a[i]) {
             tp = s.top();
            s.pop();
            curr = a[tp] * (s.empty() ? i : (i - s.top() - 1));
            res = max(res,curr);
        }
        s.push(i);
    }
    while (s.empty()==false) {
         
        tp = s.top();
        s.pop();
        curr = a[tp] * (s.empty() ? n : (n - s.top() - 1));
        res = max(res, curr);
       // s.pop();
    }
    return res;
}

int maxs(int a[][100],int n,int m)
{
    int res=largest(a[0],m);
    for(int i=1;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(a[i][j]==1)
            {
                a[i][j]+=a[i-1][j];
            }
        }
        res=max(res,largest(a[i],m));
    }
    return res;
}

int main()
{
int n,m;
cin>>n>>m;
int a[n][100];
for(int i=0;i<n;i++)
{
    for(int j=0;j<m;j++)
    {
        cin>>a[i][j];
    }
}
cout<<maxs(a,n,m);
    return 0;
}
