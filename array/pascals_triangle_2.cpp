class Solution {
public:
    vector<int> getRow(int k) {
        vector<int> v;
        v.push_back(1);
        if(k==0)
            return v;
        
        v.push_back(1);
        if(k==1)
            return v;
        for(int i=2;i<=k;i++)
        {
            int x = v.size();
            vector<int> u;
            u.push_back(1);
            int j = 0;
            while(j<x-1)
            {
                u.push_back(v[j]+v[j+1]);
                j++;
            }
            u.push_back(1);
            v = u;
        }
        
        return v;
        
    }
};