 long binarySubstring(int n, string s){
        
       /* int cnt=0;
         for(int i=0;i<n;i++)
         {
              if(s[i]=='1')
              cnt++;
         }
         return (cnt*(cnt-1))/2;
         */
         int one=0;
         int res=0;
          for(int i=0;i<n;i++)
          {
              if(s[i]=='1')
              {
                  res+=one;
                  one++;
              }
          }
          return res;
        
    }
