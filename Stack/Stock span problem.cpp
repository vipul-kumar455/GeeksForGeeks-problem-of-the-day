 #include<bits/stdc++.h>
 using namespace std;
 vector<int>sol(vector<int>&v,int n)

 {
     vector<int>v1;
stack<int>s;
s.push(v[0]);
v1.push_back(1);
int span;
for(int i=1;i<n;i++)
{
    while(s.empty()==false && v[s.top()]<=v[i])
    {
       s.pop(); 
    }
    span=s.empty()?i+1:i-s.top();
    v1.push_back(span);
    s.push(i);
}
return v1;
     
 }
 int main()
 {
     vector<int>a={12,4,5, 34, 21, 89,56};
     int n=7;
     vector<int>v=sol(a,n);
     for(auto i:v)
     {
         cout<<i<<" ";
     }   
    
     
     
 }

//Time complexity:: Theta(n)

//BRUTE FORCE APPROACH


#include <bits/stdc++.h>
using namespace std;

void printSpan(int arr[],int n){
    for(int i=0;i<n;i++){
        int span=1;
        for(int j=i-1;j>=0&&arr[j]<=arr[i];j--)
        {
             
            span++;
        }
        cout<<span<<" ";
        
    }    
}
void sol(int a[],int n)
{
   
    for(int i=0;i<n;i++)
    { int span=1;
        for(int j=i-1;j>=0 && a[j]<=a[i];j--)
        {
            span++;
        }
        cout<<span<<" ";
    }
    
}

int main() 
{ 
    int arr[]={18,12,13,14,11,16};
    int n=6;
    printSpan(arr,n);
    cout<<endl;
    sol(arr,n);
    return 0; 
}

