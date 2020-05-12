class Solution {
public:
    vector<int> decompressRLElist(vector<int>& nums) {
        int n = nums.size();
        
        vector<int> v;
        
        for(int i=0;i<(n/2);i++)
        {
            int f = nums[2*i];
            int val = nums[2*i+1];
            
            for(int j = 0;j<f;j++)
                v.push_back(val);
        }
        
        return v;
    }
};
