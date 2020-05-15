class Solution {
public:
    int findLucky(vector<int>& arr) {
        unordered_map<int,int> umap;
        
        int n = arr.size();
        
        for(int i=0;i<n;i++)
            umap[arr[i]]++;
        
        int res = -1;
        
        for(auto i: umap)
        {
            if(i.first==i.second)
            {
                if(i.first>res)
                    res = i.first;
            }
        }
        
        return res;
    }
};