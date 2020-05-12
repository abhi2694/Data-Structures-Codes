class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char,int> u;
        
        for(int i=0;s[i]!='\0';i++)
            u[s[i]]++;
        int x = -1;
        
        for(int i=0;s[i]!='\0';i++)
            if(u[s[i]]==1)
            {
                x = i;
                break;
            }
        
        return x;
    }

