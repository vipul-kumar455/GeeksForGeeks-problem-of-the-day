#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s = "aabbbcc";
    int n = s.size();
    int cnt = 0;
    int res=0;

    for(int i = 1; i < n; i++)
    {
        if(s[i] == s[i-1])
        {
            cnt++;
            
        }
        else
        {
            cnt=0;
        }
        if(cnt>=2)
        {
            res++;
            cnt=0;
        }
    }
    cout << res;

    return 0;
}
