
#include<bits/stdc++.h>
using namespace std;
vector<int>sol(vector<int>&a,int n)
{
    stack<int>s;
    s.push(a[0]);
    vector<int>v;
    v.push_back(-1);
    for(int i=1;i<n;i++)
    {
        while(s.empty()==false && s.top()<=a[i])
        {
            s.pop();
        }
        int pg=s.empty()?-1:s.top();
        v.push_back(pg);
        s.push(a[i]);
    }
    return v;
}
int main()
{
   vector<int>a={15,10,18,12,4,6,2,8};
   int n=a.size();
   vector<int>v=sol(a,n);
   for(auto i:v)
   {
       cout<<i<<" ";
   }
    return 0;
}
