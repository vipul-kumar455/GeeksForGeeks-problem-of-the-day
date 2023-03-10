bool ispar(string x)
    {
        stack<char>st;
        int n=x.size();
        for(int i=0;i<n;i++)
        {
            if(st.empty())
            {
                st.push(x[i]);
            }
            else if((st.top()=='(' && x[i]==')') || (st.top()=='[' && x[i]==']') || (st.top()=='{' && x[i]=='}'))
            {
                st.pop();
                
            }
            else
            {
                st.push(x[i]);
            }
        }
        if(st.empty())
        return 1;
        return 0;
    }
