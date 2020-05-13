class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& A) {
        int n = A.size();
        vector<vector<int>> res;
        
        for(int i = 0;i<n;i++)
        {
            int m = A[i].size();
            vector<int> v;
            for(int j = m-1;j>=0;j--)
            {
               v.push_back(!A[i][j]);
            }
            
            res.push_back(v);
        }
        
        return res;
    }
};