class Solution {
  public:
    int check(int a[])
    {
        int count = 0;
        for(int i = 0;i<26;i++)
        {
            if(a[i]>0)
            count++;
        }
        return count;
    }
    int countOfSubstrings(string S, int k) {
        // code here
        int a[26] = {0};
        int ans =0;
        for(int i = 0;i<k;i++)
        {
            a[S[i]-'a']++;
        }
        if(check(a)==k-1)
        ans++;
        for(int i =k;i<S.length();i++)
        {
            a[S[i]-'a']++;
            a[S[i-k]-'a']--;
            if(check(a)==k-1)
            ans++;
        }
        return ans;
    }
};
