class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int,int> umap;
        
        int n = nums.size();
        
        for(int i=0;i<n;i++)
            umap[nums[i]]++;
        
        int a  = 0;
        
        for(auto i : umap)
            if(i.second == 1)
                a = i.first;
        
        return a;
    }
};
