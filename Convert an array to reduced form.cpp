class Solution{
public:	
	// Converts arr[0..n-1] to reduced form.
	void convert(int arr[], int n) {
	    // code here
	     unordered_map<int,int>mp;
	    int nums[n];
	    
	    for(int i=0;i<n;i++)
	    nums[i] = arr[i];
	    
	    sort(nums,nums+n);
	    
	    for(int i=0;i<n;i++)
	    mp[nums[i]] = i;
	    
	    for(int i=0;i<n;i++)
	    arr[i] = mp[arr[i]];
	    
	    return;
	}

};
