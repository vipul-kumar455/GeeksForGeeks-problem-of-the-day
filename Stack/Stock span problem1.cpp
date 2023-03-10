 vector <int> calculateSpan(int price[], int n)
    {
        stack<int>st;
        vector<int>v;
        st.push(0);
        v.push_back(1);
        int span;
         for(int i=1;i<n;i++)
         {  
             while(st.empty()==false && price[st.top()]<=price[i])
             {
                 st.pop();
             }
             span=st.empty()?i+1:i-st.top();
             v.push_back(span);
             st.push(i);
         }
         return v;
    }
