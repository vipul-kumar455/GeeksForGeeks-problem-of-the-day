 #include<bits/stdc++.h>
 using namespace std;
 bool sol(string &s)
 {
     int n=s.size();
     stack<char>st;
     for(int i=0;i<n;i++)
     {
         if(st.empty())
         {
             st.push(s[i]);
         }
         else if((st.top()=='(' && s[i]==')' )|| (st.top()  =='[' && s[i]==']')  || (st.top()=='{' && s[i]=='}'))

         st.pop();
          else 
     {
         st.push(s[i]);
     }
     }
    if(st.empty())
    return 1;
    return 0;
 }
 int main()
 {
     string s="({[]})";
     
    
    cout<<sol(s);
     
 }
