class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& nums, int r, int c) {
        int m = nums.size();
        int n = nums[0].size();
        
        if((m*n)!=(r*c))
            return nums;
        
       vector<vector<int>> res(r,vector<int>(c,0));
        
        int a = 0,b = 0;
        
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                res[a][b] = nums[i][j];
                b++;
                if(b==c)
                {
                    b = 0;
                    a++;
                }
                    
            }
        }
        
        return res;
    }
};