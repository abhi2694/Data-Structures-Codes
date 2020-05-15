class Solution {
public:
    int minStartValue(vector<int>& nums) {
        int sum = 0;
        int x  = 0;
        
        int n = nums.size();
        
        for(int i=0;i<n;i++)
        {
            sum+=nums[i];
            if(sum<x)
                x = sum;
        }
        
        return abs(x)+1;
    }
};