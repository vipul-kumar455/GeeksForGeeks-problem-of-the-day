
class Solution {
  public:
     int solve(vector<int> &v,int ind,int k)

    {

        if(v.size()==1)

        return v[0];

        

        ind=(ind+k-1)%v.size();

        v.erase(v.begin()+ind);

        return solve(v,ind,k);

    }

    int safePos(int n, int k) {

        // code here

      

      vector<int> v;

      for(int i=1;i<=n;i++)

       v.push_back(i);

       

      return solve(v,0,k);

    }
};
