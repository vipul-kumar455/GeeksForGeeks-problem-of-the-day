class Solution 
{
    
    public:
    //Function to find if there is a celebrity in the party or not.
    bool know(vector<vector<int> >& M,int a, int b, int n)
    {
        if(M[a][b]==1)
        return true;
        else
        return false;
        
    }
    int celebrity(vector<vector<int> >& M, int n) 
    {
       stack<int>s;
       for(int i=0;i<n;i++)
       {
           s.push(i);
       }
       while(s.size()>1)
       {
           int p=s.top();
           s.pop();
           int q=s.top();
           s.pop();
           if(know(M,p,q,n))
           {
               s.push(q);
           }
           else
           {
               s.push(p);
          }
       }
       int ans=s.top();
       int zero=0;
       int one=0;
       for(int i=0;i<n;i++)
       {
           if(M[ans][i]==0)
           zero++;
       }
       if(zero!=n)
       return -1;
       for(int i=0;i<n;i++)
       {
           if(M[i][ans]==1)
           one++;
       }
       if(one!=n-1)
       {
          return -1; 
       }
       return ans;
    }
};
