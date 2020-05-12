class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char,char> umap,umap1;
        
        for(int i=0;s[i]!='\0' && t[i]!='\0';i++)
        {
            if(umap.count(s[i])>0)
            {   
                if(umap[s[i]]!=t[i])
                    return false;
            }
            
            if(umap1.count(t[i])>0)
                {
                    if(umap1[t[i]]!=s[i])
                        return false;
                }
            
            umap[s[i]] = t[i];
            umap1[t[i]] = s[i];
        }
        
        return true;
    }
};
