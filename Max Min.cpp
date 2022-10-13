
class Solution
{
   public:
    int findSum(int A[], int N)
    {
    	int mi=*min_element(A,A+N);
    		int ma=*max_element(A,A+N);
    		return mi+ma;
    }

};
