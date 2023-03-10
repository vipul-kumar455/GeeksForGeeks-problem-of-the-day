 string removePair(string str)
    {
        stack<char>st;
        int n=str.size();
        string s="";
        st.push(str[0]);
        for(int i=1;i<n;i++)
        {
            //st.push(str[i]);
            if(!st.empty() && st.top()==str[i])
            {
            st.pop();
            }
            else
            {
           st.push(str[i]);
            }
            
            
        }
        while(!st.empty())
        {
            s.insert(s.begin(),st.top());
            st.pop();
        }
        //reverse(begin(s),end(s));
        return s;
    }
