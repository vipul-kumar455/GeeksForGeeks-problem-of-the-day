//Most optimized approach

#include <bits/stdc++.h>

using namespace std;
vector<int>solve(vector<int>&arr,int n,int k)
{
   if(k==1 || n==1) return arr;
        list<int>q;
        int l=0,r=0;
        vector<int> ans;
        while(r<n){
              while(!q.empty() and  arr[q.back()]<= arr[r])
              q.pop_back();
             q.push_back(r);
             if(r>=k-1)
            {
                ans.emplace_back(arr[q.front()]);
                if(q.front() == l) q.pop_front();
                l++;
            }
            r++;
        }
        return ans;
}
int main()
{
    int n;
    cin>>n;
    vector<int>a(n);
     for(int i=0;i<n;i++)
     {
         cin>>a[i];
     }
     int k;
     cin>>k;
     vector<int>v=solve(a,n,k);
     for(auto i:v)
     {
         cout<<i<<" ";
     }
    return 0;
}
//Brute force approach

#include <bits/stdc++.h>

using namespace std;
vector<int>solve(int a[],int n,int k)
{
    vector<int>v;
    int mx=INT_MIN;
    for(int i=0;i<n-k+1;i++)
    {
        for(int j=i;j<i+k;j++)
        {
            mx=max(mx,a[j]);
        }
        v.push_back(mx);
    }
    return v;
}
int main()
{
    int n;
    cin>>n;
    int a[n];
     for(int i=0;i<n;i++)
     {
         cin>>a[i];
     }
     int k;
     cin>>k;
     vector<int>v=solve(a,n,k);
     for(auto i:v)
     {
         cout<<i<<" ";
     }
    return 0;
}




//First Approach 


#include <bits/stdc++.h>

using namespace std;
vector<int>solve(int a[],int n,int k)
{
    vector<int>v;
    int mx=INT_MIN;
    for(int i=0;i<k;i++)
    {
        mx=max(mx,a[i]);
    }
    v.push_back(mx);
    for(int i=k;i<n;i++)
    {
        mx=max(mx,a[i]);
        v.push_back(mx);
    }
    return v;
}
int main()
{
    int n;
    cin>>n;
    int a[n];
     for(int i=0;i<n;i++)
     {
         cin>>a[i];
     }
     int k;
     cin>>k;
     vector<int>v=solve(a,n,k);
     for(auto i:v)
     {
         cout<<i<<" ";
     }
    return 0;
}
