
class Solution {
  public:
  bool isPowerOfTwo(int n)
{
    if (n == 0)
        return false;
 
    return (ceil(log2(n)) == floor(log2(n)));
}
    string lexicographicallySmallest(string S, int k) {
        // code here
        int n=S.size();
        if(isPowerOfTwo(n))
        {
        k=k/2;
        }
        else
        {
            k=k*2;
        }
        if(k>=n)
        return "-1";
        stack<char>st;
        for(int i=0;i<n;i++)
        {
            while(k>0 && st.empty()==false && st.top()>S[i])
            {
                st.pop();
                k--;
            }
            st.push(S[i]);
            
        }
    while(st.empty()==false && k>0)
    {
    st.pop();
    k--;
    }
    string ans=" ";
    while(st.size()!=0)
    {
        ans.push_back(st.top());
        st.pop();
    }
    reverse(ans.begin(),ans.end());
    return ans;
    }
};
