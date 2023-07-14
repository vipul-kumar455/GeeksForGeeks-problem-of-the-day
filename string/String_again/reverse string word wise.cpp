 
#include <bits/stdc++.h>

using namespace std;
const int CHAR=256;


void reverse(string& s,int low,int high)
{
    int n=s.size();
    while(low<=high)
    {
        swap(s[low],s[high]);
        low++;
        high--;
    }
}
void reverseword(string& s)
{
    int n=s.size();
    int start=0;
    for(int i=0;i<n;i++)
    {
        if(s[i]==' ')
        {
            reverse(s,start,i);
            start=i+1;
        }
    }
    reverse(s,start,n-1);
    reverse(s,0,n-1);
}

int main()
{
    
   string s4="geeks for welcome";
    reverseword(s4);
 cout<<s4;
     return 0;
}



