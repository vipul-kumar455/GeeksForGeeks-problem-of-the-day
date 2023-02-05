//Optimize approach

#include<bits/stdc++.h>
using namespace std;
 
int sum(int a[],int n)
{
     int res=a[0];
        int mx=a[0];
        for(int i=1;i<n;i++)
        {
            mx=max(mx+a[i],a[i]);
            res=max(res,mx);
        }
        return res;
}
int circular(int a[],int n)
{
    int max_nor=sum(a,n);
    if(max_nor<0)
    return max_nor;
    int a_sum=0;
    for(int i=0;i<n;i++)
    {
        a_sum+=a[i];
        a[i]=-a[i];
    }
    int max_cir=a_sum+sum(a,n);
    return max(max_cir,max_nor);
    
}
int main()
{
    int a[]={8,-8,9,-9,10,-11,12};
    int n=sizeof(a)/sizeof(a[0]);
  cout<<circular(a,n);
   
     
    return 0;
}










//Again Brute force approach without rotation

int brute(int a[],int n)
{
    int res=a[0];
    for(int i=0;i<n;i++)
    {
        int curr_max=a[i];
        int curr_sum=a[i];
        for(int j=1;j<n;j++)
        {
            int idx=(i+j)%n;
            curr_sum+=a[idx];
            curr_max=max(curr_max,curr_sum);
            
        }
        res=max(res,curr_max);
    }
    return res;
    
}






// By using rotation brute force approach

#include<bits/stdc++.h>
using namespace std;

void reverse(int arr[], int low, int high)
{
	while(low < high)
	{
		swap(arr[high], arr[low]);

		low++;
		high--;
	}
}   

void leftRotate(int arr[], int d, int n)
{
	reverse(arr, 0, d - 1);

	reverse(arr, d, n - 1);

	reverse(arr, 0, n - 1);
}
int sum(int a[],int n)
{
     int res=a[0];
        int mx=a[0];
        for(int i=1;i<n;i++)
        {
            mx=max(mx+a[i],a[i]);
            res=max(res,mx);
        }
        return res;
}
int solve(int a[],int n)
{
    int mx=0;
     for(int i=1;i<=n;i++)
     {
         leftRotate(a,i,n);
         int s1=sum(a,n);
         if(s1>mx)
         mx=s1;
     }
     return mx;
    
    
}

int main()
{
    int a[]={8,-8,9,-9,10,-11,12};
    int n=sizeof(a)/sizeof(a[0]);
  cout<<solve(a,n);
   
     
    return 0;
}
