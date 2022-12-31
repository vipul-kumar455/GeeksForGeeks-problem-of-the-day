
class Solution {
  public:
    int minLaptops(int n, int a[], int b[]) {
       
    sort(a,a+n);
    sort(b,b+n);
    int i=1,j=0;
    
    int pl=1;
    while(i< n && j<n)
    {
        if(a[i]<b[j])
        {
           pl++;
           //i++;
        }
        else
        {
           
            j++;
        }
        i++;
        
    }
    return pl;
        
    }
};
