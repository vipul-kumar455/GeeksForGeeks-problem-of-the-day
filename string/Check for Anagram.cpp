 
#include <bits/stdc++.h>

using namespace std;
 
const int CHAR =256;
bool ana(string s1, string s2)
{
    int n=s1.size();
    int m=s2.size();
    if(n!=m)
    return 0;
    int cnt[CHAR]={0};
    for(int i=0;i<n;i++)
    {
        cnt[s1[i]]++;
        cnt[s2[i]]--;
    }
    for(int i=0;i<n;i++)
    {
        if(cnt[i]!=0)
        return 0;
    }
    return 1;
}
int main()
{
    string s1="silent ";
    string s2="listen ";
    cout<<ana(s1,s2 );
    
    return 0;
}
