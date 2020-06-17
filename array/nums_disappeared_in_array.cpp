class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        unordered_map<int,int> umap;
        
        int n = nums.size();
        
        for(int i=0;i<n;i++)
            umap[nums[i]]++;
        
        vector<int> v;
        
        for(int i = 1;i<=n;i++)
        {
            if(umap.count(i)==0)
                v.push_back(i);
        }
        
        return v;
    }
};