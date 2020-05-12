class Solution {
public:
    int repeatedNTimes(vector<int>& A) {
        unordered_map<int,int> umap;
        
        int n = A.size();
        
        for(int i=0;i<n;i++)
        {
            umap[A[i]]++;
        }
        
        int a = 0;
        
        for(auto i:umap)
        {
            if(i.second==(n/2))
                a = i.first;
        }
        
        return a;
    }
};
