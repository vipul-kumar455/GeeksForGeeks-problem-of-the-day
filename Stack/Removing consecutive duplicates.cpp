 string removeConsecutiveDuplicates(string s)
    {
        // Your code here
        stack<char>st;
        string str;
        st.push(s[0]);
        for(int i=1;i<s.size();i++)
        {
           // st.push(s[i]);
            if(st.top()==s[i])
            {
                st.pop();
            }
            st.push(s[i]);
        }
        while(!st.empty())
        {
            str+=st.top();
            st.pop();
        }
        reverse(begin(str),end(str));
        return str;
    }
