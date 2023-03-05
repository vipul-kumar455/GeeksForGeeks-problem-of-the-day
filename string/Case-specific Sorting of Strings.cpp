#include <bits/stdc++.h>
#include <string>

using namespace std;
 
int main()
{
    string str="defRTSersUXI";  
    int n=12;
      string s1,s2;
        for(int i=0;i<n;i++)
        {
            if(islower(str[i]))
            {
                s1+=str[i];
            }
            else
            {
                s2+=str[i];
            }
        }
        sort(begin(s1),end(s1));
         sort(begin(s2),end(s2));
        
       cout<<s1<<endl;
        cout<<s2<<endl;
        string p;
        int a=0,b=0;
        for(int i=0;i<n;i++)
        {
            if(islower(str[i]))
            {
                p+=s1[a];
                a++;
                 
            }
            else
            {
                p+=s2[b];
                b++;
                 
            }
        }
      
     cout<<p<<endl;
   
    return 0;
}
