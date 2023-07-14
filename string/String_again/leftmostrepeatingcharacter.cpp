 
#include <bits/stdc++.h>

using namespace std;
const int CHAR=256;

int leftmostrepeatingcharacter(string s)
{
    int count[CHAR]={0};
    int n=s.size();
    for(int i=0;i<n;i++)
    {
        count[s[i]]++;
    }
    for(int i=0;i<n;i++)
    {
        if(count[s[i]]>1)
        return i;
    }
    return -1;
}

int main()
{
   string s1="abcd";
   string s2="adcb";
   string s3="abbcc";
     
   // cout<<anagram(s1,s2)<<endl;
    cout<<leftmostrepeatingcharacter(s3)<<endl;
    return 0;
}
