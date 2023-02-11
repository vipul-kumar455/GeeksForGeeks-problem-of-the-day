 long long int floorSqrt(long long int x) 
    {
     /*long long i=0;
        while(i*i<=x)
        {
            i++;
        }
        return i-1;*/
        
        long long int l=1;
        long long int h=x;
        long long int ans=-1;
        while(l<=h)
        {
            long long int mid=(l+h)/2;
            long long int ms=mid*mid;
            if(ms==x)
            return mid;
            else if(ms>x)
            {
                h=mid-1;
            }
            else
            {
                l=mid+1;
                ans=mid;
            }
        }
        return ans;
    }
