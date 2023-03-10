 
#include<bits/stdc++.h>
using namespace std;
 
vector<int>sol1(vector<int>&a)
{
    stack<int>s;
     int n=a.size();
    s.push(a[n-1]);
    vector<int>v;
    v.push_back(-1);
    for(int i=n-2;i>=0;i--)
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
vector<int>nextgreater(vector<int>&v)
{
    vector<int>a;
    int n=v.size();
    for(int i=0;i<n;i++)
    {
        int j;
        for(j=i+1;j<n;j++)
        {
            if(v[i]<v[j])
            {
                a.push_back(v[j]);
                break;
            }
        }
        if(j==n)
        {
            a.push_back(-1);
        }
        
    }
    return a;
}
int main()
{
   vector<int>a={5,15,10,8,6,12,9,18};
    vector<int>p1=nextgreater(a);
     vector<int>p=sol1(a);
    reverse(begin(p),end(p));
   for(auto i:p)
   {
       cout<<i<<" ";
   }
   cout<<endl;
   for(auto i:p1)
   {
       cout<<i<<" ";
   }
    return 0;
}
