class Solution
{
    public:
    //Function to calculate sum of all numbers present in a string.
    int findSum(string str)
    {
    	
     int sum=0;
     int n=str.size();
     
     int cnt=0;
     for(int i=0;i<n;i++)
     {
         if(isdigit(str[i]))
         {
            cnt=cnt*10+(str[i]-48);
              
         }
         else
         {
            sum+=cnt;
            cnt=0;
         }
         
     } sum+=cnt;
    	return sum;
    }
};
