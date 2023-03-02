 
#include <bits/stdc++.h>

using namespace std;
int sol(string s)
{
    int n=s.size();
     unordered_map<char,int>mp;
     for(int i=0;i<n;i++)
     {
         mp[s[i]]++;
     }
     for(int i=0;i<n;i++)
     {
         if(mp[s[i]]==1)
         return i;
     }
     return -1;
}
int main()
{
    string s="abcabcdd";
    cout<<sol(s);

    return 0;
}
