 
#include <bits/stdc++.h>

using namespace std;
 
const int CHAR =256;
 
int left(string s)
{
    int n=s.size();
    int cnt[CHAR]={0};
    for(int i=0;i<n;i++)
    {
        cnt[s[i]]++;
    }
    for(int i=0;i<n;i++)
    {
        if(cnt[s[i]]>1)
        return i;
    }
    return -1;
}
int main()
{
    string s1="geeksg ";
    
    cout<<left(s1 );
    
    return 0;
}
