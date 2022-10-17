
class Solution{
	
	public:
	vector<int> downwardDigonal(int n, vector<vector<int>> A)
	{
		// Your code goes here
		vector<int>a;
		for(int i=0;i<n;i++)
		{
		    int k=i;
		    for(int j=0;j<=i;j++)
		    {
		        a.push_back(A[j][k--]);
		    }
		    
		}
		for(int i=1;i<n;i++)
		{
		    int k=i;
		    for(int j=n-1;j>=i;j--)
		    {
		        a.push_back(A[k++][j]);
		    }
		}
		return a;
	}

};
