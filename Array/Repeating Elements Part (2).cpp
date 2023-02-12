
#include <bits/stdc++.h>

using namespace std;
 
int sol1(int a[],int n)
{
    int slow=a[0],fast=a[0];
    do{
        slow=a[slow];
        fast=a[a[fast]];
    }while(slow!=fast);
    slow=a[0];
    while(slow!=fast)
    {
        slow=a[slow];
        fast=a[fast];
        
    }
    return slow;
 
    
}

int main()
{ 
   int a[]={1, 3, 2, 4, 6, 5, 7, 3};
   int n=sizeof(a)/sizeof(a[0]);
   cout<<sol1(a,n);
   

    return 0;
}
