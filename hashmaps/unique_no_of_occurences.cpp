class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int> umap;
        
        int n = arr.size();
        
        for(int i=0;i<n;i++)
        {
            umap[arr[i]]++;
        }
        
        unordered_map<int,bool> u2;
        
        for(auto i : umap)
        {
            if(u2.count(i.second)>0)
                return false;
            u2[i.second] = true;    
        }
        return true;
    }
};
