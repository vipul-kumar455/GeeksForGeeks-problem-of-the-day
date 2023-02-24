int sumExists(int arr[], int n, int sum) {
    // Your code here
     unordered_set<int>mp;
      for(int i=0;i<n;i++)
      {
          if(mp.find(sum-arr[i])!=mp.end())
          return 1;
          else
          mp.insert(arr[i]);
      }
      return 0;
}
