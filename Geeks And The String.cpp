class Solution {
  public:
    string removePair(string s) {
        // code here
       stack<char> st;

        for(int i=0;i<s.length();i++)

        {

            if(st.empty() || st.top()!=s[i])

            st.push(s[i]);

            else

            st.pop();

        }

        

        if(st.empty())

        return "-1";

        string ans = "";

        

        while(!st.empty())

        {

            ans+= st.top();

            st.pop();

        }

        //since the string is in reverse order we have to reverse it to get the actual string

        reverse(ans.begin(),ans.end());

        return ans;
    }
};
