class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        
        int m = grid.size();
        int n = grid[0].size();
        
        vector<vector<int>> v(m,vector<int>(n,0));
        
        for(int i = 0; i<m ; i++){
            for(int j = 0; j<n ; j++){
                int newCol = (j + k)%n;
                int incr = (j + k)/n;
                int newRow = (i + incr)%m;
                v[newRow][newCol] = grid[i][j];
            }
        }
        return v;
    }
};