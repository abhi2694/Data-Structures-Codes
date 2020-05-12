class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        unordered_map<int,int> umap;
        
        int n = nums.size();
        int sum = 0;
        
        for(int i=0;i<n;i++)
        {
            umap[nums[i]]++;
            sum+=nums[i];
        }
        int i=0;
        for(i=0;i<n;i++)
        {
            if(umap[nums[i]]==2)
                break;
        }
        
        vector<int> v;
        v.push_back(nums[i]);
        v.push_back(((((n)*(n+1))/2)-sum)+nums[i]);
        return v;
    }
};
