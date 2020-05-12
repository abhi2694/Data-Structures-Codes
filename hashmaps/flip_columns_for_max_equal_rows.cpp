class Solution {
public:
    
    int maxEqualRowsAfterFlips(vector<vector<int>>& matrix) {
        map<vector<int>,int> umap;
        
        int n = matrix.size();
        
        for(int i=0;i<n;i++)
        {
            umap[matrix[i]]++; 
        }
        
        int c = 0;
        
        for(int i=0;i<n;i++)
        {
            int x = umap[matrix[i]];
            
            int m = matrix[i].size();
            for(int j=0;j<m;j++)
                matrix[i][j] = !matrix[i][j];
            
            int y = umap[matrix[i]];
            
            for(int j=0;j<m;j++)
                matrix[i][j] = !matrix[i][j];
            
            if(c<(x+y))
                c = x + y;
            
        }
        
        return c;
        
    }
};
