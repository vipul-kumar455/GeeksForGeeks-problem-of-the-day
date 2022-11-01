int median(vector<vector<int>> &matrix, int R, int C){
           vector<int>a;
            for(int i=0;i<R;i++)
            {
                for(int j=0;j<C;j++)
                {
                    a.push_back(matrix[i][j]);
                }
            }
            int n=a.size();
              int b[n];
   
    int max = *max_element(a.begin(), a.end());
  
    int t = max + 1;
    int count[t];
    for (int i = 0; i < t; i++)
        count[i] = 0;    
 
    for (int i = 0; i < n; i++)
        count[a[i]]++;    
 
    int mode = 0;
    int k = count[0];
    for (int i = 1; i < t; i++)
    {
        if (count[i] > k)
        {
            k = count[i];
            mode = i;
        }
    }    
   
    for (int i = 1; i < t; i++)
        count[i] = count[i] + count[i-1];
 
    for (int i = 0; i < n; i++)
    {
        b[count[a[i]]-1] = a[i];
        count[a[i]]--;
    }
      
    float median;
    return b[n/2];
    }
};
