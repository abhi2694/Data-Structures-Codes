class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        
        vector<vector<int>> res;
        if(numRows==0)
            return res;
        vector<int> v;
        v.push_back(1);
        res.push_back(v);
        if(numRows==1)
            return res;
        
        v.clear();
        v.push_back(1);
        v.push_back(1);
        res.push_back(v);
        if(numRows==2)
            return res;
        
        for(int i = 2;i<numRows;i++)
        {
            int k = res[i-1].size();
            vector<int> u;
            u.push_back(1);
            int j = 0;
            while(j<k-1)
            {
                u.push_back(res[i-1][j]+res[i-1][j+1]);
                j++;
            }
            u.push_back(1);
            res.push_back(u);
        }
        
        return res;
    }
};