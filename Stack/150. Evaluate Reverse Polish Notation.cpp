class Solution {
public:
    int evalRPN(vector<string>& p) {
        int n = p.size();
        stack<int> st;
        for (const auto& s : p) {
            if (s == "+" || s == "-" || s == "*" || s == "/") {
                int op1 = st.top(); st.pop();
                int op2 = st.top(); st.pop();
                if (s == "+") st.push(op2 + op1);
                else if (s == "-") st.push(op2 - op1);
                else if (s == "*") st.push(op2 * op1);
                else if (s == "/") st.push(static_cast<int>(op2 / static_cast<double>(op1)));
            } else {
                st.push(stoi(s));
            }
        }
        return st.top();
    }
};
