 int betBalance(string s)
        {
            
            int sum=4;
            int res=1;
            for(int i=0;i<s.size();i++)
            {
                 if(sum<res)
                return -1;
                if(s[i]=='W')
                {
                    sum+=res;
                    res=1;
                }
                
                else if(s[i]=='L')
                {
                    sum-=res;
                     res=2*res;
                }
               
               
            }
            
            return (sum);
        }
