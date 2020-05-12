class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int,int> umap;
        
        int n = nums.size();
        
        for(int i=0;i<n;i++)
        {
            if(umap.count(nums[i])>0)
            {
                if((i - umap[nums[i]])<=k)
                    return true;
            }
            
            umap[nums[i]] = i;
        }
        
        return false;
    }
};
