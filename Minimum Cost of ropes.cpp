
#include <bits/stdc++.h>

using namespace std;

int main()
{
   int n;
   cin>>n;
   int a[n];
   for(int i=0;i<n;i++)
   {
       cin>>a[i];
   }
  priority_queue<long long ,vector<long long>,greater<long long>>pq(a,a+n);
  long long ans=0;
  while(pq.size()>1)
  {
      long long ab=pq.top();
      pq.pop();
      ab+=pq.top();
      pq.pop();
      ans+=ab;
      pq.push(ab);
      
  }
  cout<<ans;
    return 0;
}
