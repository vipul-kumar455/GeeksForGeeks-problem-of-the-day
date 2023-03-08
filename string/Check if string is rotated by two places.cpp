 bool isRotated(string str1, string str2)
    {
        // Your code here
        int n=str1.size();
        int m=str2.size();
        if(n!=m)
        return 0;
        if(n==1 && m==1)
        return 0;
        string s1=str1+str1;
        
        int ans=s1.find(str2);
        if(ans==2 || ans==n-2)
        return 1;
        return 0;
    }
