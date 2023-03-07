 string concatenatedString(string s1, string s2) 
    { 
       
     unordered_map<char,int>m1;

            unordered_map<char,int>m2;
            for(int i=0;i<s1.size();i++){
                m1[s1[i]]++;
            }
            for(int i=0;i<s2.size();i++){
                m2[s2[i]]++;
            }
            string s="";
            for(int i=0;i<s1.size();i++){
                if(m2.find(s1[i])==m2.end())
                    s=s+s1[i];
            }
            for(int i=0;i<s2.size();i++){
                if(m1.find(s2[i])==m1.end())
                    s=s+s2[i];
            }
            if(s.size()==0)
                return "-1";
            return s;
    }
