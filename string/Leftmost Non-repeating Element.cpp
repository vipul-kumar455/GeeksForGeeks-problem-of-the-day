 
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


//brute force approach


 
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
int sol1(string s)
{
    
    int n=s.size();
    for(int i=0;i<n;i++)
    {bool flag=false;
    for(int j=0;j<n;j++)
    {
        if(i!=j && s[i]==s[j])
        {
            flag=true;
            break;
        }
    }
       if(flag==false)
       return i;
    }
    return -1;
}
int main()
{
    string s="geeksfor";
    cout<<sol1(s);

    return 0;
}
