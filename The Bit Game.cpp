
#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int cnt=0;
    while(n>0)
    {
        if(n&1==1)
        {
            cnt++;
        }
        n=n/2;
    }
    if(cnt%2==1)
    {
        cout<<1;
    }
    else
    cout<<2;

    return 0;
}
