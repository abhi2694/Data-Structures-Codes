class Solution {
public:
    vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {
        int n = nums.size();
        
        vector<int> vec;
        
        for(int i=0;i<n;i++)
            vec.insert(vec.begin()+index[i], nums[i]); 
        
        return vec;
    }
};
