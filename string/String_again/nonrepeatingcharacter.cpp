 
#include <bits/stdc++.h>

using namespace std;
const int CHAR=256;

int nonrepeatingcharacter(string s)
{
    int n=s.size();
    int cnt[CHAR]={0};
    for(int i=0;i<n;i++)
    {
        cnt[s[i]]++;
    }
    for(int i=0;i<n;i++)
    {
        if(cnt[s[i]]==1)
        return i;
    }
    return -1;
    
}
int main()
{
   string s1="abcd";
   string s2="adcb";
   string s3="abbcc";
   string s4="geeksforgeeks";
   
 cout<<nonrepeatingcharacter(s4)<<endl;
     return 0;
}
