
//optimize approach


#include <iostream>

using namespace std;
 
int sol(int a[],int n)
{
    int res=0;
    int cnt=1;
    for(int i=1;i<n;i++)
    {
        if(a[res]==a[i])
        {
            cnt++;
        }
        else
        cnt--;
        if(cnt==0)
        {
            res=i;
            cnt=1;
        }
        
    }
    cnt=0;
    for(int i=0;i<n;i++)
    {
       if(a[res]==a[i])
       {
           cnt++;
       }
        
    }
    if(cnt<=n/2)
    res=-1;
    return res;
   
}
int main()
{
    int a[]={8,7,6,8,6,6,6,6};
    int n=sizeof(a)/sizeof(a[0]);
    cout<<sol(a,n);

    return 0;
}










//Brute force approch
#include <iostream>

using namespace std;
int solve(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        int cnt=1;
        for(int j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            {
                cnt++;
            }
        }
        if(cnt>n/2)
        return i;
        
    }
    return -1;
}
int main()
{
    int a[]={8,7,6,8,6,6,6,6};
    int n=sizeof(a)/sizeof(a[0]);
    cout<<solve(a,n);

    return 0;
}
