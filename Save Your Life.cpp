string maxSum(string w,char x[], int b[],int n){
          // code here  
          if(w.length()==1)
          return w;
          int maxe = 0;
          string ans = "";
          string temp="";
          int curr = 0;
          map<char,int> mp;
          for(int i = 0;i<n;i++)
          {
              mp[x[i]] = b[i];
          }
        //   string temp ="";
          for(int i = 0;i<w.length();i++)
          {
             if(mp.find(w[i])==mp.end())
                 curr+=(int)w[i];
             else
                 curr+=mp[w[i]];
             temp+=w[i];
             if(curr>maxe)
             {
                 maxe = curr;
                 ans = temp;
             }
             if(curr<0)
             {
                 curr=0;
                 temp="";
             }
                
          }
           if(curr>maxe)
           ans = temp;
          return ans;
      }
