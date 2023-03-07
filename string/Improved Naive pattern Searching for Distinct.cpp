 
#include <bits/stdc++.h>

using namespace std;
void sol(string &s,string &p)
{
     int n=s.size();
     int m=p.size();
     for(int i=0;i<=n-m;i++)
     {
         int j;
         for(j=0;j<m;j++)
         {
             if(p[j]!=s[i+j])
             break;
         }
         if(j==m)
         cout<<i<<" ";
         if(j==0)
         i++;
         else
         i=i+j;
     }
}
int main()
{
     string s="abcdbabcd";
     string p="abcd";
     sol(s,p);
    
    
    return 0;
}
//Time complexity: o(N)
