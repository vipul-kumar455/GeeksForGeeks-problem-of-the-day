
class Solution {
	public:
	
	bool isPrime(int n)
{
    
    if (n <= 1)  return false;
    if (n <= 3)  return true;
   
    if (n%2 == 0 || n%3 == 0) return false;
   
    for (int i=5; i*i<=n; i=i+6)
        if (n%i == 0 || n%(i+2) == 0)
           return false;
   
    return true;
}

int bo(int x)
{
      if (x==2)
        return 2;
    else if (isPrime(x))
        return x;
    else
    {
        int i=0;
        do {
            i++;
            if(isPrime(x+i)){
                if(isPrime(x-i)){
                    return  x-i;
                x=0;
                }

                else{
                    return x+i;
                x=0;
                }
            }
            else if(isPrime(x-i)){
               return x-i;
                x=0;
            }

        }while(x!=0);
    }
}
		int NthTerm(int N){
		    
		    int p1=bo(N);
		    
		    if(isPrime(N))
		    return  0;
		    else
		    
		    return abs(p1-N);
		    
		}

};

