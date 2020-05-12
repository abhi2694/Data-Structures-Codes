class Solution {
public:
    char findTheDifference(string s, string t) {
        unordered_map<char,int> u1;
        
        for(int i=0;t[i]!='\0';i++)
            u1[t[i]]++;
        
        for(int i=0;s[i]!='\0';i++)
        {
            u1[s[i]]--;
            if(u1[s[i]]==0)
                u1.erase(s[i]);
        }
        
        char a = 'a';
        
        for(auto i: u1)
            a = i.first;
        
        return a;
    }

