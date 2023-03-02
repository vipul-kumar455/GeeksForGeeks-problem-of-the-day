 
#include <bits/stdc++.h>

using namespace std;
 
void rev(string &s, int low, int high)
{
    while(low<=high)
    {
        swap(s[low],s[high]);
        low++;
        high--;
    }
}
void reverses(string &s)
{
    int n=s.size();
    int cnt=0;
    for(int i=0;i<n;i++)
    {
        if(s[i]==' ')
        {
            rev(s,cnt,i-1);
            cnt=i+1;
        }
    }
    rev(s, cnt, n-1);
    rev(s,0,n-1);
}

 
int main()
{
    string s="welcome to gFg";
    reverses(s);
    cout<<s;

    return 0;
}
