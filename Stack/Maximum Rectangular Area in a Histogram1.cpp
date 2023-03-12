
#include <bits/stdc++.h>

using namespace std;
long long solve(long long a[], int n)
{
    if(n==1)
    return 1;
    long long res = 0;
     long long tp=0;
      long long curr=0;
    
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


int main()
{
long long a[]={60,20,50,40,10,50,60};
long long n=sizeof(a)/sizeof(a[0]);

cout<<solve(a,n)<<endl;
    return 0;
}
