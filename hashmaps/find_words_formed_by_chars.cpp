class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        unordered_map<char,int> umap;
        
        int n = chars.length();
        
        for(int i=0;i<n;i++)
            umap[chars[i]]++;
        
        int m = words.size();
        
        int c = 0;
        
        for(int i=0;i<m;i++)
        {
            int k = words[i].length();
            int j = 0;
            unordered_map<char,int> temp;
            temp = umap;
            for(j=0;j<k;j++)
            {
                if(temp.count(words[i][j])==0)
                    break;
                else
                {
                    temp[words[i][j]]--;
                    if(temp[words[i][j]]==0)
                        temp.erase(words[i][j]);
                }
            }
            if(j==k)
                c+=k;
        }
        return c;
    }
};
