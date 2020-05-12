class Solution {
public:
    bool isAnagram(string s, string t) {
        map<char,int> m1;
        map<char,int> m2;
        
        for(int i=0;s[i]!='\0';i++)
            m1[s[i]]++;
        
        for(int i=0;t[i]!='\0';i++)
            m2[t[i]]++;
        
        for(auto i:m1)
        {
            if(m2.count(i.first)>0)
            {
                if(m2[i.first]==i.second)
                    m2.erase(i.first);
                else
                    return false;
            }
            else
                return false;
        }
        
        if(m2.size()!=0)
            return false;
        
        return true;
    }
};
