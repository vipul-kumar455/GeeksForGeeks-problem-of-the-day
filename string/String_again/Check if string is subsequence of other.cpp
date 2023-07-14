 
#include <bits/stdc++.h>

using namespace std;

bool solve(string s1, string s2)
{
    int j=0;
    int n=s1.size();
    int m=s2.size();
    for(int i=0;i<n && j<m;i++)
    {
        if(s1[i]==s2[j])
        {
            j++;
        }
    }
    return (j==m);
}

int main()
{
   string s1="abcd";
   string s2="ade";
    cout<<solve(s1,s2);

    return 0;
}
