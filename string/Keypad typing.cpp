string printNumber(string s, int n) 
{
    int temp[]={2,2,2,3,3,3,4,4,4,5,5,5,6,6,6,7,7,7,7,8,8,8,9,9,9,9};
    string res="";
    for(int i=0;i<n;i++)
    {
        string ans=to_string(temp[s[i]-'a']);
        res+=ans;
    }
    return res;
    
}