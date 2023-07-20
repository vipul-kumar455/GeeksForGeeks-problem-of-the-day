 bool areIsomorphic(string str1, string str2)
    {
        
        // Your code here
        
        int n=str1.size();
        int m=str2.size();
        if(n!=m)
        return false;
        // aba  a-2, b-1
        // xyy  x-1, y-2
        unordered_map<char,int>mp1;
         unordered_map<char,int>mp2;
       
         for(int i=0;i<n;i++)
         {
             if(mp1[str1[i]]!=mp2[str2[i]])
             return false;
             mp1[str1[i]]=i+1;
               mp2[str2[i]]=i+1;
             
         }
         return true;
         // a-2 , b-2, c-1 == aabbc
         //x-2,   y-2, z-1  ==xyxyz
    } 
