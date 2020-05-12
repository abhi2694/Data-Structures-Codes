class Solution {
public:
    bool isAlienSorted(vector<string>& words, string order) {
        unordered_map<char,int> umap;
        
        for(int i=0;order[i]!='\0';i++)
            umap[order[i]] = i;
        
        int n = words.size();
        
        for(int i=0;i<n-1;i++)
        {
            int x = words[i].length();
            int y = words[i+1].length();
            
            if(words[i][0]==words[i+1][0] && x>y)
                return false;
            
            for(int j=0;j<x && j<y;)
            {
                if(umap[words[i][j]]>umap[words[i+1][j]])
                    return false;
                if(umap[words[i][j]]==umap[words[i+1][j]])
                    j++;
                if(umap[words[i][j]]<umap[words[i+1][j]])
                    break;
            }
        }
        
        return true;
    }
};
