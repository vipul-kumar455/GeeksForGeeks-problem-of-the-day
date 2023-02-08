 #include<bits/stdc++.h>
 using namespace std;
 const int n = 1e5 + 10;
  int pr[n];
  int a[n];
  int solve(int a[],int n,int l,int r)
  {
      
     pr[0]=a[0];
     for(int i=1;i<n;i++)
     {
         pr[i]=pr[i-1]+a[i];
         
     }
     if(l==0)
    return pr[r];
    else
     return pr[r]-pr[l-1];
  }
 int main()
 {
     int a[]={2,8,3,9,6,5,4};
     int n=sizeof(a)/sizeof(a[0]);
     int l,r;
     cout<<"Enter l and r: "<<endl;
     cin>>l>>r;
     cout<<solve(a,n,l,r)<<endl;
    
     return 0;
    
 }
