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
