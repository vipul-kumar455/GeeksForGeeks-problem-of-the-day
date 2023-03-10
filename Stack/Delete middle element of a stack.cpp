 void del(stack<int>&s, int n,int i=0)
    {
        if(i==n/2)
       {
        s.pop();
        return;
       }
       int a=s.top();
       s.pop();
       del(s,n,i+1);
       s.push(a);
       return;
      
       
    }
    void deleteMid(stack<int>&s, int n)
    {
         del(s,n,0);
    }
