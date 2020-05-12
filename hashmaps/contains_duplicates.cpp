class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int,int> umap;
        
        int n = nums.size();
        
        for(int i=0;i<n;i++)
            umap[nums[i]]++;
        
        for(auto i: umap)
            if(i.second>1)
                return true;
        
        return false;
    }
};
