class Solution {
public:
    int maxNumberOfBalloons(string text) {
        unordered_map<char,int> umap;
        
        for(int i=0;text[i]!='\0';i++)
            umap[text[i]]++;
        
        string x = "balloon";
        
        for(int i=0;x[i]!='\0';i++)
        {
            if(umap.count(x[i])==0)
                umap[x[i]] = 0;
        }
        
        int mini = INT_MAX;
        
        for(auto i:umap)
        {
            int a = INT_MAX;
            if(i.first=='b' || i.first=='a' || i.first=='n')
                a = i.second;
            else if(i.first=='l' || i.first=='o')
                a = i.second/2;
            
            if(mini>a)
                mini = a;
        }
        
        return mini;
    }
};
