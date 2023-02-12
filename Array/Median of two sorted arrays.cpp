
#include <bits/stdc++.h>

using namespace std;
 
 
double solve(int a1[],int a2[],int n1,int n2)
{
   int l=0;
   int h=n1;
   while(l<=h)
   {
       int i1=(l+h)/2;
       int i2=(n1+n2+1)/2-i1;
       int mi1=(i1==n1)?INT_MAX:a1[i1];
       int mx1=(i1==0)?INT_MIN:a1[i1-1];
       int mi2=(i2==n2)?INT_MAX:a2[i2];
       int mx2=(i2==0)?INT_MIN:a2[i2-1];
       if(mx1<=mi2 && mx2<=mi2)
   {
       if((n1+n2)%2==0)
       return ((double) max(mx1,mx2)+min(mi1,mi2))/2;
       else
       return (double) max(mx1,mx2);
   }
   else if(mx1>mi2) h=i1-1;
   else
   l=i1+1;
       
   }
    
   
    
}

double getMed(int a1[], int a2[], int n1, int n2)
{
	int begin1 = 0, end1 = n1;

	while(begin1 <= end1)
	{
		int i1 = (begin1 + end1) / 2;
		int i2 = (n1 + n2 + 1) / 2 - i1;

		int min1 = (i1 == n1)?INT_MAX:a1[i1];
		int max1 = (i1 == 0)?INT_MIN:a1[i1 - 1];
		
		int min2 = (i2 == n2)?INT_MAX:a2[i2];
		int max2 = (i2 == 0)?INT_MIN:a2[i2 - 1];

		if(max1 <= min2 && max2 <= min1)
		{
			if((n1 + n2) % 2 == 0)
				return ((double)max(max1, max2) + min(min1, min2)) / 2;
			else
				return (double)max(max1, max2);
		}
		else if(max1 > min2)
			end1 = i1 - 1;
		else 
			begin1 = i1 + 1;
	}
}


int main()
{ 
   int a1[]={10,20,30,40,50};
   int a2[]={5,15,25,35,45};
   int n1=sizeof(a1)/sizeof(a1[0]);
    int n2=sizeof(a2)/sizeof(a2[0]);
 
   cout<<solve(a1,a2,n1,n2);

    return 0;
}
