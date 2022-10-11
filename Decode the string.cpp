
#include <bits/stdc++.h>
using namespace std;
string solve(string s)
{
    int n=s.size();
    string ans="";
    stack<char>st;
    for(int i=0;i<n;i++)
    {
        if(s[i]==']')
        {
            while(st.size()>0 && st.top()!='[')
            {
                ans=st.top()+ans;
                st.pop();
            }
            if(st.size()!=0)
            {
                st.pop();
            }
            string num="";
            while(st.size()>0 && st.top()>='0' && st.top()<='9')
            {
                num=st.top()+num;
                st.pop();
            }
            int di=stoi(num);
            string temp=ans;
            for(int i=0;i<di-1;i++)
            {
                ans+=temp;
                
            }
            for(int i=0;i<ans.size();i++)
            {
                st.push(ans[i]);
            }
            ans="";
        }
        else
        {
            st.push(s[i]);
        }
    }
    while(st.size()>0)
    {
        ans=st.top()+ans;
        st.pop();
    }
    return ans;
}
int main()
{
string s="3[b2[ca]]";

cout<<solve(s);

    return 0;
}

***********************************************
***********************************************

*******************************
*

********************************

With explanation  


#include <bits/stdc++.h>
using namespace std;
string solve(string s)
{
    int n=s.size();
    string ans="";
    stack<char>st;
    for(int i=0;i<n;i++)
    {
        if(s[i]==']') // jab tak close bracket na ho tab tak perform kro
        {
            while(st.size()>0 && st.top()!='[') // jab stack size zero se braa ho and stack ka top open bracket na ho 
            {
                ans=st.top()+ans; // ans sting me stack ke top kom push kro
                st.pop();   // and usko pop krte rho
            }
            if(st.size()!=0)  //agar upar ka operation krne ke baad bhi atack ka size zero na hoto saare element to pop kr do
            {
                st.pop();
            }
            string num=""; 
            while(st.size()>0 && st.top()>='0' && st.top()<='9') // number ko erxtract krne ka jab stack size>0 and stack top lie bt 0 to 9
            {
                num=st.top()+num; // num me push krte rho number ko jo ki top pe hai
                
                st.pop();  // and num me insert krne ke baad pop kr do
            }
            int di=stoi(num);  // ek int variable lo and usme string ko int me convert kr ke store kr lo
            string temp=ans; // ek temp bnao and uskp ans se initialise kro
            for(int i=0;i<di-1;i++) // and then ans me digit se ek km tk temp ko insert krte rho
            {
                ans+=temp;
                
            }
            for(int i=0;i<ans.size();i++) //sb ho jae uske baad stack me saare ans wale char ko push kr do 
            {
                st.push(ans[i]);
            }
            ans=""; // last me ans ko khali kr do taki next operation me ise phir se use kiya ja sake
        }
        else
        {
            st.push(s[i]); // agr uapr wale if condition satisfy nhi hote hai to saare ko stack me push kar do
        }
    }
    while(st.size()>0)
    {
        ans=st.top()+ans;// jab tk stack size bra h to ans me uske top koinsert kr do
        st.pop();  //and pop kr do
    }
    return ans;
}
int main()
{
string s="3[b2[ca]]";

cout<<solve(s);

    return 0;
}
