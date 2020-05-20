class Solution {
public:
    int heightChecker(vector<int>& heights) {
        int c = 0;
        vector<int> v = heights;
        
        int n = heights.size();
        
        sort(v.begin(),v.end());
        
        for(int i=0;i<n;i++)
        {
            if(v[i]!=heights[i])
                c++;
        }
        
        return c;
    }
};