//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    vector<int> asteroidCollision(int N, vector<int> &a) {
         vector<int>v;

        stack<int>st;

        for(int i=0;i<N;i++){

            if(a[i]>0) st.push(a[i]);

            else{

                if(st.empty()) v.push_back(a[i]);

                else{

                    while(!st.empty() && -1*a[i]>st.top()) st.pop();

                    if(!st.empty() && -1*a[i]==st.top()) st.pop();

                    else if(st.empty()) v.push_back(a[i]);

                }

            }

        }

        vector<int>temp;

        while(!st.empty()){

            temp.push_back(st.top());

            st.pop();

        }

        reverse(temp.begin(),temp.end());

        v.insert(v.end(),temp.begin(),temp.end());

        return v;
    }
    //return v;
    
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;

        vector<int> asteroids(N);
        for (int i = 0; i < N; i++) cin >> asteroids[i];

        Solution obj;
        vector<int> ans = obj.asteroidCollision(N, asteroids);
        for (auto &it : ans) cout << it << ' ';
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends
