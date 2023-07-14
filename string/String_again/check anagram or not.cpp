 
#include <bits/stdc++.h>

using namespace std;

bool anagram(string s1, string s2)
{
    int n=s1.size();
    int m=s2.size();
    int cnt[CHAR]={0};
    for(int i=0;i<n;i++)
    {
        cnt[s1[i]]++;
        cnt[s2[i]]--;
    }
    for(int i=0;i<CHAR;i++)
    {
        if(cnt[i]!=0)
        return 0;
    }
    return 1;
    
}

int main()
{
   string s1="abcd";
   string s2="adcb";
     
    cout<<anagram(s1,s2)<<endl;

    return 0;
}

