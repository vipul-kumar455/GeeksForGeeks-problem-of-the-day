#include <iostream>
#include <vector>

using namespace std;
// Time complexity: theta(n)
int main() {
    int a[]={6,2,5,4,1,5,6};
    int n=7;
    int res=0;
    for(int i=0;i<n;i++)
    {
        int curr=a[i];
        //go left side and check 
        for(int j=i-1;j>=0;j--)
        {
            if(a[j]>=a[i])
            curr+=a[i];
            else
            break;
        }]// go right side and  check
        for(int j=i+1;j<n;j++)
        {
            if(a[j]>=a[i])
            curr+=a[i];
            else
            break;
        }
        res=max(res,curr);
    }
cout<<res;
    

    return 0;
}
