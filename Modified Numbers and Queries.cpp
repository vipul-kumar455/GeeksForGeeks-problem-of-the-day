
class Solution {
  public:
 int Sum(int N)

{

    int SumOfPrimeDivisors[N+1] = { 0 };

 

    for (int i = 2; i <= N; ++i) {

 

        if (!SumOfPrimeDivisors[i]) {

 

 

            for (int j = i; j <= N; j += i) {

 

                SumOfPrimeDivisors[j] += i;

            }

        }

    }

    return SumOfPrimeDivisors[N];

}

 

  public:

    int sumOfAll(int l, int r){

        // code here

        int ans=0;

        for(int N=l;N<=r;N++){

           

           if(l==1 and r==N){

           ans+=Sum(N)+1;

           }

           

           else{

             ans+=Sum(N);  

           } 

           

            

            

            

        }

        return ans;
       
    }
};
