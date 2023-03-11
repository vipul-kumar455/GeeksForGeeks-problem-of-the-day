vector<long long> nextLargerElement(vector<long long> arr, int n){
     
   //  reverse(begin(arr),end(arr));
     stack<long long>st;
     vector<long long>v;
     st.push(arr[n-1]);
     v.push_back(-1);
     for(int i=n-2;i>=0;i--)
     {
         while(st.empty()==false && st.top()<=arr[i])
         {
             st.pop();
         }
         long long span=st.empty()?-1:st.top();
         v.push_back(span);
         st.push(arr[i]);
     }
     reverse(begin(v),end(v));
     return v;
     
     
        // Your code here
    }
