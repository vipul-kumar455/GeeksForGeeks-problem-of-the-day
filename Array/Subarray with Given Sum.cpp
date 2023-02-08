 #include<bits/stdc++.h>
 using namespace std;
 bool solve(int a[],int n,int sum)
 {
      int s=0;
     int curr=0;
     for(int e=0;e<n;e++)
     {
         curr+=a[e];
         while(sum<curr)
         {
             curr-=a[s];
             s++;
         }
         if(sum==curr)
         return true;
     }
     return false;
 }
 bool brute(int a[],int n,int sum)
 {
    
     for(int i=0;i<n;i++)
     { int curr=0;
         for(int j=i;j<n;j++)
         {
             curr+=a[j];
              if(curr==sum)
         return true;
         }
        
         
     }
     return false;
 }
 int main()
 {
     int a[]={4,8,12,5};
     int n=sizeof(a)/sizeof(a[0]);
     int sum=17;
     cout<<brute(a,n,sum);
    
 }
