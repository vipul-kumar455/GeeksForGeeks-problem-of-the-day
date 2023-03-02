 
#include <bits/stdc++.h>

using namespace std;
bool sol(string s1, string s2)
{
    int j=0;
    for(int i=0;i<s1.size() && j<s2.size();i++)
    {
        if(s1[i]==s2[j])
        {
            j++;
        }
    }
    return (j==s2.size());
}
int main()
{
    string s1="abcde";
    string s2="ade";
    cout<<sol(s1,s2);
    
    return 0;
}

/////optimize way

 
#include <bits/stdc++.h>

using namespace std;
bool sol(string s1, string s2,int n, int m)
{
    if(m==0)
    return true;
    if(n==0)
    return false;
    if(s1[n-1]==s2[m-1])
    return sol(s1,s2,n-1,m-1);
    else
    return sol(s1,s2,n-1,m);
}
int main()
{
    string s1="abcde";
    string s2="ade";
    cout<<sol(s1,s2,s1.size(),s2.size());
    
    return 0;
}
