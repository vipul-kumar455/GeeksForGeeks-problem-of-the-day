 #include<bits/stdc++.h>
 using namespace std;
int sol(int a[],int n)
{
    int rs=0;
    int ls=0;for(int i=0;i<n;i++)
    {
        rs+=a[i];
    }
    for(int i=0;i<n;i++)
    {
        rs-=a[i];
        if(ls==rs)
        return a[i];
        ls+=a[i];
    }
    return -1;
}
 int main()
 {
     int a[]={3,4,8,9,-9,7};
     int n=sizeof(a)/sizeof(a[0]);
      
     cout<<sol(a,n)<<endl;
    
     return 0;
    
 }
