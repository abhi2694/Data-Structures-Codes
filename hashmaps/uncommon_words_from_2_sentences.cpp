class Solution {
public:
    vector<string> uncommonFromSentences(string A, string B) {
        unordered_map<string,int> umap;
        
        vector<string> v;
        
        int i=0;
        for(i=0;A[i]!='\0';i++)
        {
         string x = "";
         while(A[i]!=' ' && A[i]!='\0')
         {
             x = x + A[i];
              i++;
         }
            
        x = x + '\0';
            
        if(umap.count(x)>0)
            umap[x]--;
        else
            umap[x]++;
            if(A[i]=='\0')
                break;
            //i++;
        }
        
        i = 0;
        for(i=0;B[i]!='\0';i++)
        {
            string x = "";
            while(B[i]!=' ' && B[i]!='\0')
         {
             x = x + B[i];
              i++;
         }
            
            x = x + '\0';
            
            if(umap.count(x)==0)
            {
                //v.push_back(x);
                umap[x]++;
            }
            else
                umap[x]--;
             if(B[i]=='\0')
                break;
            //i++;
        }
        
        for(auto j: umap)
        {
            if(j.second>0)
            v.push_back(j.first);
        }
        
        return v;
        
    }
};
