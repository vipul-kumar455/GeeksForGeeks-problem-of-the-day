 int evaluatePostfix(string x)
    {
       stack<int>s;
        
       for(int i=0;i<x.size();i++)
       {
           char ch=x[i];
           if(ch>='0' && ch<='9')
           {
               
               s.push((ch-'0'));
               
           }
           else
           {
               int res;int op1;
               int op2;
  op1=s.top();
           s.pop();
            op2=s.top();
           s.pop();
           if(x[i]=='+')
           {
               res=int(op2)+int(op1);
               s.push(res);
           }
           else if(x[i]=='-')
           {
               res=int(op2)-int(op1);
               s.push(res);
           }
           else if(x[i]=='*')
           {
               res=int(op2)*int(op1);
               s.push(res);
           }
           else
           {
               res=int(op2)/int(op1);
               s.push(res);
           }
           
           }
           
           
       }
       return s.top();
    }
