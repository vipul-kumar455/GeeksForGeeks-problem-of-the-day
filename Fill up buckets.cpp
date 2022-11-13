//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    int totalWays(int n, vector<int>c) {
        // code here
        if(c.size()==1)
        return c[0];
        long long mul=1,mod=1e9+7;
        sort(c.begin(),c.end());
        for(int i=0;i<n;i++)
        {
            mul=mul*(c[i]-i)%mod;
        }
        return mul%mod;
        
        
        
       
    }
    //13 10 10 7 7 3 7
    //75600
   
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		vector<int>capacity(n);
		for(int i = 0; i < n; i++)
			cin >> capacity[i];
		Solution ob;
		int ans = ob.totalWays(n, capacity);
		cout << ans << "\n";
	}  
	return 0;
}
// } Driver Code Ends
