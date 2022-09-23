
#include<bits/stdc++.h>
using namespace std; 


class Solution{
public:
    int minLength(string s, int n) {
      /* stack<char>st;
       vector<string>list={"12", "21", "34", "43", "56", "65", "78", "87", "09", "90"};
       for(int i=0;i<n;i++)
       {
           if(st.empty())
           {
           st.push(s[i]);
           }
           else
           {
               string temp;
               temp+=st.top();
               temp+=s[i];
               int flag=0;
               for(int j=0;j<(int)list.size();j++)
               {
                  
                   if(list[j]==temp)
                   
                   
                      flag=1;
                   
                      if(flag==1)
                      {
                          st.pop();
                      }
                      else
                      {
                          st.push(s[i]);
                      }
                   
               }
           }
             return (int)(st.size());
       }
     */
     set<string>k={"12", "21", "34", "43", "56", "65", "78", "87", "09", "90"};
     stack<char>st;
     for(auto i:s)
     {
         string temp;
         if(st.empty())
         st.push(i);
         else
         {
             temp.push_back(st.top());
             temp.push_back(i);
             if(k.find(temp)!=k.end())
             {
             n=n-2;
             st.pop();
             }
             else
             {
                 st.push(i);
             }
             
        }
     }
     return n;
    } 
};

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;

        string s;
        cin >> s;

        Solution obj;
        cout << obj.minLength(s, n) << "\n";
    }
    return 0;
}
