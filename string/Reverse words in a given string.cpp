class Solution
{
    public:
    //Function to reverse words in a given string.
    void rev(string &s,int l,int h)
    {
        while(l<h)
        {
            swap(s[l],s[h]);
            l++;
            h--;
        }
    }
    string reverseWords(string s) 
    { 
        int n=s.size(); 
        int cnt=0;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='.')
            {
                rev(s,cnt,i-1);
                cnt=i+1;
            }
        }
        rev(s,cnt,n-1);
        rev(s,0,n-1);
        return s;
    } 
};
