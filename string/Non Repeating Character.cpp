class Solution
{
    public:
    //Function to find the first non-repeating character in a string.
    const int CHAR=256; 
    char nonrepeatingCharacter(string s)
    {
         
        int count[CHAR]={0};
        int n=s.size();
        for(int i=0;i<n;i++)
        {
            count[s[i]]++;
        }
        for(int i=0;i<n;i++)
        {
            if(count[s[i]]==1)
            {
            return s[i];
            
            }
        }
        return '$';
       
    }

};
