class Solution{
    public:
    int removals(vector<int>& arr, int k){
       
        int cnt=0;
        sort(arr.begin(),arr.end());
        int i=0,j=0;
        while(j<arr.size())
        {
            if(arr[j]-arr[i]<=k)
            j++;
            else if(i<j)
            {
                i++;
            }
            cnt=max(cnt,j-i);
        }
        return  (arr.size()-cnt);
    }
};
